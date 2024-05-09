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



namespace imu_sensor_broadcaster {

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
        std::string sensor_name = "";
        std::string frame_id = "";
        std::vector<double> static_covariance_orientation = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        std::vector<double> static_covariance_angular_velocity = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        std::vector<double> static_covariance_linear_acceleration = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
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
    : ParamListener(parameters_interface, rclcpp::get_logger("imu_sensor_broadcaster"), prefix) {
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
        if (param.get_name() == (prefix_ + "sensor_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.sensor_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "frame_id")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "static_covariance_orientation")) {
            if(auto validation_result = fixed_size<double>(param, 9);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.static_covariance_orientation = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "static_covariance_angular_velocity")) {
            if(auto validation_result = fixed_size<double>(param, 9);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.static_covariance_angular_velocity = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "static_covariance_linear_acceleration")) {
            if(auto validation_result = fixed_size<double>(param, 9);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.static_covariance_linear_acceleration = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "sensor_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Defines sensor name used as prefix for its interfaces. Interface names are: <sensor_name>/orientation.x, ..., <sensor_name>/angular_velocity.x, ..., <sensor_name>/linear_acceleration.x.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.sensor_name);
          parameters_interface_->declare_parameter(prefix_ + "sensor_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Sensor's frame_id in which values are published.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.frame_id);
          parameters_interface_->declare_parameter(prefix_ + "frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "static_covariance_orientation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Static orientation covariance. Row major about x, y, z axes";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.static_covariance_orientation);
          parameters_interface_->declare_parameter(prefix_ + "static_covariance_orientation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "static_covariance_angular_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Static angular velocity covariance. Row major about x, y, z axes";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.static_covariance_angular_velocity);
          parameters_interface_->declare_parameter(prefix_ + "static_covariance_angular_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "static_covariance_linear_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Static linear acceleration covariance. Row major about x, y, z axes";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.static_covariance_linear_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "static_covariance_linear_acceleration", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "sensor_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'sensor_name': {}", validation_result.error()));
      }
      updated_params.sensor_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'frame_id': {}", validation_result.error()));
      }
      updated_params.frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "static_covariance_orientation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 9);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'static_covariance_orientation': {}", validation_result.error()));
      }
      updated_params.static_covariance_orientation = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "static_covariance_angular_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 9);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'static_covariance_angular_velocity': {}", validation_result.error()));
      }
      updated_params.static_covariance_angular_velocity = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "static_covariance_linear_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 9);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'static_covariance_linear_acceleration': {}", validation_result.error()));
      }
      updated_params.static_covariance_linear_acceleration = param.as_double_array();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    private:
      void update_internal_params(Params updated_params) {
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
      rclcpp::Logger logger_ = rclcpp::get_logger("imu_sensor_broadcaster");
      std::mutex mutable mutex_;
  };

} // namespace imu_sensor_broadcaster
