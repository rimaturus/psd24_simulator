#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <visualization_msgs/msg/marker_array.hpp> 
#include <fstream>
#include <vector>
#include <cmath>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp> 
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>

#include <std_msgs/msg/float32_multi_array.hpp>
#include "custom_msgs/msg/cone_rb_color.hpp"

struct Cone {
    double x, y, z, color;
};

class ConeFilterNode : public rclcpp::Node {
public:
    ConeFilterNode() : Node("cone_filter_node") {
        // Parameters (to make them configurable from launch file or command line)
        this->declare_parameter<std::string>("inner_cones_file", "/home/ubuntu/psd_ws/src/psd_gazebo_worlds/world/track_csv/track_inner.csv");
        this->declare_parameter<std::string>("outer_cones_file", "/home/ubuntu/psd_ws/src/psd_gazebo_worlds/world/track_csv/track_outer.csv");

        RCLCPP_INFO(this->get_logger(), "Cones loaded");

        this->declare_parameter<std::string>("pose_topic", "/psd_vehicle_pose");

        this->declare_parameter<double>("max_distance", 10.0);  // [meters]
        this->declare_parameter<double>("max_angle", 120*(M_PI/180));      // [radians]

        RCLCPP_INFO(this->get_logger(), "Range and bearing defined");

        // Get parameter values
        this->get_parameter("inner_cones_file", inner_cones_file_);
        this->get_parameter("outer_cones_file", outer_cones_file_);

        this->get_parameter("pose_topic", pose_topic_);

        this->get_parameter("max_distance", max_distance_);
        this->get_parameter("max_angle", max_angle_);

        RCLCPP_INFO(this->get_logger(), "Get params done");

        // Load inner cone positions from CSV
        loadConesFromFile(inner_cones_file_, cones_, 1.0); // Yellow (1.0) for outer cones
        loadConesFromFile(outer_cones_file_, cones_, 2.0); // Blue (2.0) for inner cones

        RCLCPP_INFO(this->get_logger(), "Load cones file");

        // Subscribe to pose topic
        pose_subscription_ = this->create_subscription<geometry_msgs::msg::Pose>(
            pose_topic_, 10, 
            std::bind(&ConeFilterNode::poseCallback, this, std::placeholders::_1));

        // Create publisher for viewed cones 
        viewed_cones_marker_publisher_ = this->create_publisher<visualization_msgs::msg::MarkerArray>(
            "viewed_cones_marker", 10);

        viewed_cones_rbc_publisher_ = this->create_publisher<std_msgs::msg::Float32MultiArray>(
            "viewed_cones_RBCcolor", 10);
    }

private:
    void loadConesFromFile(const std::string& filename, std::vector<Cone>& cones, double color) {
        RCLCPP_INFO(this->get_logger(), "Loading cones from file: %s", filename.c_str()); 
        std::ifstream file(filename);
        std::string line;

        while (std::getline(file, line)) {
            std::istringstream iss(line);
            Cone cone;
            char comma;

            // Read x, y, z, and discard the fourth value
            if (!(iss >> cone.x >> comma >> cone.y >> comma >> cone.z >> comma)) {
                RCLCPP_ERROR(this->get_logger(), "Error parsing line: %s", line.c_str());
                continue; // Skip the rest of the line if there's an error
            }

            cone.color = color;
            cones.push_back(cone);
        }

        RCLCPP_INFO(this->get_logger(), "Loaded %lu cones.", cones.size());
    }

    void poseCallback(const geometry_msgs::msg::Pose::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "poseCallback private");

        // Yaw calculation from quaternion
        tf2::Quaternion q(msg->orientation.x, msg->orientation.y, msg->orientation.z, msg->orientation.w);
        tf2::Matrix3x3 m(q);

        double roll, pitch, yaw;
        m.getRPY(roll, pitch, yaw);

        // Filter cones
        visualization_msgs::msg::MarkerArray viewed_markers;  
        std_msgs::msg::Float32MultiArray viewed_cones_rbc;

        int id = 0;  // Marker ID
        for (const auto& cone : cones_) {
            // Calculate distance and angle
            double dx = cone.x - msg->position.x;
            double dy = cone.y - msg->position.y;
            double distance = std::sqrt(dx * dx + dy * dy);
            double cone_yaw = std::atan2(dy, dx);  
            double angle = cone_yaw - yaw;

            // Normalize angle to range [-pi, pi]
            while (angle > M_PI) { angle -= 2 * M_PI; }
            while (angle < -M_PI) { angle += 2 * M_PI; }

            if (distance <= max_distance_ && std::abs(angle) <= max_angle_) { 
                RCLCPP_INFO(this->get_logger(), "New viewed cone \n\tdistance:  %f\n\tangle:  %f", distance, angle);

                // Create a marker for the viewed cone
                visualization_msgs::msg::Marker marker;
                marker.header.frame_id = "home";
                marker.header.stamp = this->get_clock()->now();
                marker.ns = "viewed_cones_marker";
                marker.id = id++;
                marker.type = visualization_msgs::msg::Marker::SPHERE;
                marker.action = visualization_msgs::msg::Marker::ADD;
                marker.pose.position.x = cone.x;
                marker.pose.position.y = cone.y;
                marker.pose.position.z = cone.z;
                marker.pose.orientation.w = 1.0;  // No rotation
                marker.scale.x = 0.5;   // Adjust size
                marker.scale.y = 0.5;
                marker.scale.z = 0.5;
                marker.color.a = 0.5;  // Alpha (transparency)
                marker.color.r = cone.color == 1.0 ? 1.0 : 0.0;  // if yellow 
                marker.color.g = cone.color == 1.0 ? 1.0 : 0.0;  // if yellow 
                marker.color.b = cone.color == 2.0 ? 1.0 : 0.0;  // if blue 

                viewed_markers.markers.push_back(marker);

                // Add viewed cone with range and bearing and color
                viewed_cones_rbc.data.push_back(static_cast<float>(distance));   // Range
                viewed_cones_rbc.data.push_back(static_cast<float>(angle));      // Bearing
                viewed_cones_rbc.data.push_back(static_cast<float>(cone.color));
            }
        }
        
        // Publish viewed markers
        viewed_cones_marker_publisher_->publish(viewed_markers);
        viewed_cones_rbc_publisher_->publish(viewed_cones_rbc);
    }

    std::vector<Cone> cones_;

    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr pose_subscription_;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr viewed_cones_marker_publisher_;
    rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr viewed_cones_rbc_publisher_;

    std::string inner_cones_file_;
    std::string outer_cones_file_;

    std::string pose_topic_;
    double max_distance_;
    double max_angle_; 
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ConeFilterNode>());
    rclcpp::shutdown();
    return 0;
}
