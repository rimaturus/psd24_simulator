// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace diff_drive_controller {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::vector<std::string> left_wheel_names = {};
        std::vector<std::string> right_wheel_names = {};
        double wheel_separation = 0.0;
        int64_t wheels_per_side = 0;
        double wheel_radius = 0.0;
        double wheel_separation_multiplier = 1.0;
        double left_wheel_radius_multiplier = 1.0;
        double right_wheel_radius_multiplier = 1.0;
        bool tf_frame_prefix_enable = true;
        std::string tf_frame_prefix = "";
        std::string odom_frame_id = "odom";
        std::string base_frame_id = "base_link";
        std::vector<double> pose_covariance_diagonal = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        std::vector<double> twist_covariance_diagonal = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        bool open_loop = false;
        bool position_feedback = true;
        bool enable_odom_tf = true;
        double cmd_vel_timeout = 0.5;
        bool publish_limited_velocity = false;
        int64_t velocity_rolling_window_size = 10;
        bool use_stamped_vel = true;
        double publish_rate = 50.0;
        struct Linear {
            struct X {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = std::numeric_limits<double>::quiet_NaN();
                double min_velocity = std::numeric_limits<double>::quiet_NaN();
                double max_acceleration = std::numeric_limits<double>::quiet_NaN();
                double min_acceleration = std::numeric_limits<double>::quiet_NaN();
                double max_jerk = std::numeric_limits<double>::quiet_NaN();
                double min_jerk = std::numeric_limits<double>::quiet_NaN();
            } x;
        } linear;
        struct Angular {
            struct Z {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = std::numeric_limits<double>::quiet_NaN();
                double min_velocity = std::numeric_limits<double>::quiet_NaN();
                double max_acceleration = std::numeric_limits<double>::quiet_NaN();
                double min_acceleration = std::numeric_limits<double>::quiet_NaN();
                double max_jerk = std::numeric_limits<double>::quiet_NaN();
                double min_jerk = std::numeric_limits<double>::quiet_NaN();
            } z;
        } angular;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double wheel_separation = 0.0;
        int64_t wheels_per_side = 0;
        double wheel_radius = 0.0;
        double wheel_separation_multiplier = 1.0;
        double left_wheel_radius_multiplier = 1.0;
        double right_wheel_radius_multiplier = 1.0;
        bool tf_frame_prefix_enable = true;
        bool open_loop = false;
        bool position_feedback = true;
        bool enable_odom_tf = true;
        double cmd_vel_timeout = 0.5;
        bool publish_limited_velocity = false;
        int64_t velocity_rolling_window_size = 10;
        bool use_stamped_vel = true;
        double publish_rate = 50.0;
        struct Linear {
            struct X {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = std::numeric_limits<double>::quiet_NaN();
                double min_velocity = std::numeric_limits<double>::quiet_NaN();
                double max_acceleration = std::numeric_limits<double>::quiet_NaN();
                double min_acceleration = std::numeric_limits<double>::quiet_NaN();
                double max_jerk = std::numeric_limits<double>::quiet_NaN();
                double min_jerk = std::numeric_limits<double>::quiet_NaN();
            } x;
        } linear;
        struct Angular {
            struct Z {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = std::numeric_limits<double>::quiet_NaN();
                double min_velocity = std::numeric_limits<double>::quiet_NaN();
                double max_acceleration = std::numeric_limits<double>::quiet_NaN();
                double min_acceleration = std::numeric_limits<double>::quiet_NaN();
                double max_jerk = std::numeric_limits<double>::quiet_NaN();
                double min_jerk = std::numeric_limits<double>::quiet_NaN();
            } z;
        } angular;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("diff_drive_controller"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = logger;
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.wheel_separation = params.wheel_separation;
      output.wheels_per_side = params.wheels_per_side;
      output.wheel_radius = params.wheel_radius;
      output.wheel_separation_multiplier = params.wheel_separation_multiplier;
      output.left_wheel_radius_multiplier = params.left_wheel_radius_multiplier;
      output.right_wheel_radius_multiplier = params.right_wheel_radius_multiplier;
      output.tf_frame_prefix_enable = params.tf_frame_prefix_enable;
      output.open_loop = params.open_loop;
      output.position_feedback = params.position_feedback;
      output.enable_odom_tf = params.enable_odom_tf;
      output.cmd_vel_timeout = params.cmd_vel_timeout;
      output.publish_limited_velocity = params.publish_limited_velocity;
      output.velocity_rolling_window_size = params.velocity_rolling_window_size;
      output.use_stamped_vel = params.use_stamped_vel;
      output.publish_rate = params.publish_rate;
      output.linear.x.has_velocity_limits = params.linear.x.has_velocity_limits;
      output.linear.x.has_acceleration_limits = params.linear.x.has_acceleration_limits;
      output.linear.x.has_jerk_limits = params.linear.x.has_jerk_limits;
      output.linear.x.max_velocity = params.linear.x.max_velocity;
      output.linear.x.min_velocity = params.linear.x.min_velocity;
      output.linear.x.max_acceleration = params.linear.x.max_acceleration;
      output.linear.x.min_acceleration = params.linear.x.min_acceleration;
      output.linear.x.max_jerk = params.linear.x.max_jerk;
      output.linear.x.min_jerk = params.linear.x.min_jerk;
      output.angular.z.has_velocity_limits = params.angular.z.has_velocity_limits;
      output.angular.z.has_acceleration_limits = params.angular.z.has_acceleration_limits;
      output.angular.z.has_jerk_limits = params.angular.z.has_jerk_limits;
      output.angular.z.max_velocity = params.angular.z.max_velocity;
      output.angular.z.min_velocity = params.angular.z.min_velocity;
      output.angular.z.max_acceleration = params.angular.z.max_acceleration;
      output.angular.z.min_acceleration = params.angular.z.min_acceleration;
      output.angular.z.max_jerk = params.angular.z.max_jerk;
      output.angular.z.min_jerk = params.angular.z.min_jerk;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "left_wheel_names")) {
            updated_params.left_wheel_names = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "right_wheel_names")) {
            updated_params.right_wheel_names = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_separation")) {
            updated_params.wheel_separation = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheels_per_side")) {
            updated_params.wheels_per_side = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_radius")) {
            updated_params.wheel_radius = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_separation_multiplier")) {
            updated_params.wheel_separation_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "left_wheel_radius_multiplier")) {
            updated_params.left_wheel_radius_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "right_wheel_radius_multiplier")) {
            updated_params.right_wheel_radius_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tf_frame_prefix_enable")) {
            updated_params.tf_frame_prefix_enable = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tf_frame_prefix")) {
            updated_params.tf_frame_prefix = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "odom_frame_id")) {
            updated_params.odom_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "base_frame_id")) {
            updated_params.base_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pose_covariance_diagonal")) {
            updated_params.pose_covariance_diagonal = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "twist_covariance_diagonal")) {
            updated_params.twist_covariance_diagonal = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "open_loop")) {
            updated_params.open_loop = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "position_feedback")) {
            updated_params.position_feedback = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_odom_tf")) {
            updated_params.enable_odom_tf = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cmd_vel_timeout")) {
            updated_params.cmd_vel_timeout = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_limited_velocity")) {
            updated_params.publish_limited_velocity = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "velocity_rolling_window_size")) {
            updated_params.velocity_rolling_window_size = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "use_stamped_vel")) {
            updated_params.use_stamped_vel = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_rate")) {
            updated_params.publish_rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.has_velocity_limits")) {
            updated_params.linear.x.has_velocity_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.has_acceleration_limits")) {
            updated_params.linear.x.has_acceleration_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.has_jerk_limits")) {
            updated_params.linear.x.has_jerk_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.max_velocity")) {
            updated_params.linear.x.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.min_velocity")) {
            updated_params.linear.x.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.max_acceleration")) {
            updated_params.linear.x.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.min_acceleration")) {
            updated_params.linear.x.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.max_jerk")) {
            updated_params.linear.x.max_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.min_jerk")) {
            updated_params.linear.x.min_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.has_velocity_limits")) {
            updated_params.angular.z.has_velocity_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.has_acceleration_limits")) {
            updated_params.angular.z.has_acceleration_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.has_jerk_limits")) {
            updated_params.angular.z.has_jerk_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.max_velocity")) {
            updated_params.angular.z.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.min_velocity")) {
            updated_params.angular.z.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.max_acceleration")) {
            updated_params.angular.z.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.min_acceleration")) {
            updated_params.angular.z.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.max_jerk")) {
            updated_params.angular.z.max_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.min_jerk")) {
            updated_params.angular.z.min_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "left_wheel_names")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Link names of the left side wheels";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.left_wheel_names);
          parameters_interface_->declare_parameter(prefix_ + "left_wheel_names", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "right_wheel_names")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Link names of the right side wheels";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.right_wheel_names);
          parameters_interface_->declare_parameter(prefix_ + "right_wheel_names", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_separation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Shortest distance between the left and right wheels. If this parameter is wrong, the robot will not behave correctly in curves.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.wheel_separation);
          parameters_interface_->declare_parameter(prefix_ + "wheel_separation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheels_per_side")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of wheels on each side of the robot. This is important to take the wheels slip into account when multiple wheels on each side are present. If there are more wheels then control signals for each side, you should enter number for control signals. For example, Husky has two wheels on each side, but they use one control signal, in this case '1' is the correct value of the parameter.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.wheels_per_side);
          parameters_interface_->declare_parameter(prefix_ + "wheels_per_side", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_radius")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Radius of a wheel, i.e., wheels size, used for transformation of linear velocity into wheel rotations. If this parameter is wrong the robot will move faster or slower then expected.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.wheel_radius);
          parameters_interface_->declare_parameter(prefix_ + "wheel_radius", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_separation_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor for wheel separation (TODO(destogl): Please help me describe this correctly)";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.wheel_separation_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "wheel_separation_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "left_wheel_radius_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor when radius of left wheels differs from the nominal value in wheel_radius parameter.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.left_wheel_radius_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "left_wheel_radius_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "right_wheel_radius_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor when radius of right wheels differs from the nominal value in wheel_radius parameter.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.right_wheel_radius_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "right_wheel_radius_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tf_frame_prefix_enable")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enables or disables appending tf_prefix to tf frame id's.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.tf_frame_prefix_enable);
          parameters_interface_->declare_parameter(prefix_ + "tf_frame_prefix_enable", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tf_frame_prefix")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "(optional) Prefix to be appended to the tf frames, will be added to odom_id and base_frame_id before publishing. If the parameter is empty, controller's namespace will be used.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.tf_frame_prefix);
          parameters_interface_->declare_parameter(prefix_ + "tf_frame_prefix", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "odom_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the frame for odometry. This frame is parent of base_frame_id when controller publishes odometry.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.odom_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "odom_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "base_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the robot's base frame that is child of the odometry frame.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.base_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "base_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pose_covariance_diagonal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Odometry covariance for the encoder output of the robot for the pose. These values should be tuned to your robot's sample odometry data, but these values are a good place to start: [0.001, 0.001, 0.001, 0.001, 0.001, 0.01].";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pose_covariance_diagonal);
          parameters_interface_->declare_parameter(prefix_ + "pose_covariance_diagonal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "twist_covariance_diagonal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Odometry covariance for the encoder output of the robot for the speed. These values should be tuned to your robot's sample odometry data, but these values are a good place to start: [0.001, 0.001, 0.001, 0.001, 0.001, 0.01].";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.twist_covariance_diagonal);
          parameters_interface_->declare_parameter(prefix_ + "twist_covariance_diagonal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "open_loop")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If set to true the odometry of the robot will be calculated from the commanded values and not from feedback.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.open_loop);
          parameters_interface_->declare_parameter(prefix_ + "open_loop", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "position_feedback")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Is there position feedback from hardware.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.position_feedback);
          parameters_interface_->declare_parameter(prefix_ + "position_feedback", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_odom_tf")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publish transformation between odom_frame_id and base_frame_id.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_odom_tf);
          parameters_interface_->declare_parameter(prefix_ + "enable_odom_tf", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cmd_vel_timeout")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Timeout in seconds, after which input command on cmd_vel topic is considered staled.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cmd_vel_timeout);
          parameters_interface_->declare_parameter(prefix_ + "cmd_vel_timeout", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_limited_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publish limited velocity value.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_limited_velocity);
          parameters_interface_->declare_parameter(prefix_ + "publish_limited_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "velocity_rolling_window_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Size of the rolling window for calculation of mean velocity use in odometry.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.velocity_rolling_window_size);
          parameters_interface_->declare_parameter(prefix_ + "velocity_rolling_window_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "use_stamped_vel")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Use stamp from input velocity message to calculate how old the command actually is.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.use_stamped_vel);
          parameters_interface_->declare_parameter(prefix_ + "use_stamped_vel", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publishing rate (Hz) of the odometry and TF messages.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_rate);
          parameters_interface_->declare_parameter(prefix_ + "publish_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.has_velocity_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.has_velocity_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.has_velocity_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.has_acceleration_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.has_acceleration_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.has_acceleration_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.has_jerk_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.has_jerk_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.has_jerk_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.min_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.max_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.max_jerk);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.max_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.min_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.min_jerk);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.min_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.has_velocity_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.has_velocity_limits);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.has_velocity_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.has_acceleration_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.has_acceleration_limits);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.has_acceleration_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.has_jerk_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.has_jerk_limits);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.has_jerk_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.min_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.max_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.max_jerk);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.max_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.min_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.min_jerk);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.min_jerk", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "left_wheel_names");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.left_wheel_names = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "right_wheel_names");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.right_wheel_names = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_separation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.wheel_separation = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "wheels_per_side");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.wheels_per_side = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_radius");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.wheel_radius = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_separation_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.wheel_separation_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "left_wheel_radius_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.left_wheel_radius_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "right_wheel_radius_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.right_wheel_radius_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "tf_frame_prefix_enable");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.tf_frame_prefix_enable = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "tf_frame_prefix");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.tf_frame_prefix = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "odom_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.odom_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "base_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.base_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "pose_covariance_diagonal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pose_covariance_diagonal = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "twist_covariance_diagonal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.twist_covariance_diagonal = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "open_loop");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "position_feedback");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.position_feedback = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "enable_odom_tf");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_odom_tf = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "cmd_vel_timeout");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cmd_vel_timeout = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "publish_limited_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_limited_velocity = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "velocity_rolling_window_size");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.velocity_rolling_window_size = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "use_stamped_vel");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.use_stamped_vel = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "publish_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.has_velocity_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.has_velocity_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.has_acceleration_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.has_acceleration_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.has_jerk_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.has_jerk_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.min_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.max_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.max_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.min_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.min_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.has_velocity_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.has_velocity_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.has_acceleration_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.has_acceleration_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.has_jerk_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.has_jerk_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.min_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.max_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.max_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.min_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.min_jerk = param.as_double();


      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
    }

    private:
      void update_interal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("diff_drive_controller");
      std::mutex mutable mutex_;
  };

} // namespace diff_drive_controller
