#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include <termios.h>
#include <unistd.h>
#include <iostream>
#include <fcntl.h>
#include <algorithm>

#define _USE_MATH_DEFINES
#include <cmath>

class BaseControllerNode : public rclcpp::Node
{
public:
    BaseControllerNode() : Node("psd_controller_base")
    {
        // Declare topic name as a parameter
        torque = 0.0;
        steering_angle = 0.0;

        this->declare_parameter<std::string>("drive_topic", "/effort_controller/commands");
        this->declare_parameter<std::string>("steer_topic", "/position_controller/commands");
        
        publisher_drive_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
            this->get_parameter("drive_topic").as_string(), 10);

        publisher_steer_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
            this->get_parameter("steer_topic").as_string(), 10);

        old_settings_ = get_terminal_settings();

        // Immediate key reading
        set_terminal_to_raw();

        RCLCPP_INFO(this->get_logger(), "Teleop node initialized, publishing to %s and %s", 
                    this->get_parameter("drive_topic").as_string().c_str(),
                    this->get_parameter("steer_topic").as_string().c_str());
    }

    ~BaseControllerNode()
    {
        tcsetattr(STDIN_FILENO, TCSANOW, &old_settings_);
    }

    void start()
    {
        run();
    }

private:
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr publisher_drive_;
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr publisher_steer_;

    struct termios old_settings_;

    double torque;
    const double max_torque = 15.0;
    const double torque_step = 0.5;

    double steering_angle;
    const double max_steer = 30.0 * M_PI/180.0;
    const double steer_step = 1.0 * M_PI/180.0;

    void publishDrive(std::vector<double> data)
    {
        auto message = std_msgs::msg::Float64MultiArray();
        message.data = data;
        publisher_drive_->publish(message);
    }

    void publishSteer(std::vector<double> data)
    {
        auto message = std_msgs::msg::Float64MultiArray();
        message.data = data;
        publisher_steer_->publish(message);
    }

    struct termios get_terminal_settings()
    {
        struct termios settings;
        if (tcgetattr(STDIN_FILENO, &settings) != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to get terminal settings.");
            throw std::runtime_error("Failed to get terminal settings.");
        }
        return settings;
    }

    void set_terminal_to_raw()
    {
        struct termios new_settings = old_settings_;
        new_settings.c_lflag &= ~(ICANON | ECHO);
        if (tcsetattr(STDIN_FILENO, TCSANOW, &new_settings) != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set terminal to raw mode.");
            throw std::runtime_error("Failed to set terminal to raw mode.");
        }

        fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);
    }

    int my_getchar(void){
        char var;
        int s = read(STDIN_FILENO, &var, 1);    // numero caratteri letti

        // se non leggo niente s = 0
        if(s != 1)  
            return 0;
        return var;
    }

    void handleKeypress(){
        int c = my_getchar();

        if (c != 0)
        {
            switch (c)
            {
            case 'w': // Forward
                publishDrive({torque, torque, torque, torque});
                break;
            case 's': // Reverse
                publishDrive({-torque, -torque, -torque, -torque});
                break;
            case 'a': // Left
                steering_angle = std::max(-max_steer, std::min((steering_angle + steer_step), max_steer));
                publishSteer({steering_angle, steering_angle});
                // std::cout << "Steering_angle: " << steering_angle << std::flush;
                break;
            case 'd': // Right
                steering_angle = std::max(-max_steer, std::min((steering_angle - steer_step), max_steer));
                publishSteer({steering_angle, steering_angle});
                // std::cout << "Steering_angle: " << steering_angle << std::flush;
                break;

            case '+':
                torque = std::min(torque + torque_step, max_torque);;
                // std::cout << "Set torque: " << torque << std::flush;
                break;
            case '-':
                torque = std::max(0.0, torque - torque_step);
                // std::cout << "Set torque: " << torque << std::flush;
                break;
            }
        }
        else{
            publishDrive({0.0, 0.0, 0.0, 0.0});
        }

        std::cout << "\033[2J\033[H";
        std::cout << "Custom_teleop_keyboard by rimaturus" << std::endl << std::endl << std::flush;

        std::cout << "Press:\t" << std::flush;
        std::cout << "\"+\" or \"-\" to increase/decrese torque applied to each wheel" << std::endl << std::flush;
        std::cout << "\t\"w\" or \"s\" to go forward or backward" << std::endl << std::flush;
        std::cout << "\t\"a\" or \"d\" to steer left or right" << std::endl << std::endl << std::flush;

        std::cout << "Steer: [-30°, +30°]\tsteer_step: +/-1°\nTorque: [0, 5] Nm\ttorque_step: +/- 0.5 Nm" << std::endl << std::endl << std::flush;

        std::cout << "Actual Torque:\t" << torque << std::flush;
        std::cout << "\nActual Steering_angle:\t" << steering_angle << std::flush;
    }

    void run()
    {
        rclcpp::Rate loop_rate(100); 
        while (rclcpp::ok())
        {
            handleKeypress();
            loop_rate.sleep();
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<BaseControllerNode>();
    node->start();  // Use the public start() method
    rclcpp::shutdown();
    return 0;
}

