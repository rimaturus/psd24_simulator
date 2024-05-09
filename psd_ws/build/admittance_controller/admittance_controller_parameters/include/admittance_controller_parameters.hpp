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



namespace admittance_controller {

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
        std::vector<std::string> joints;
        std::vector<std::string> command_joints = {};
        std::vector<std::string> command_interfaces;
        std::vector<std::string> state_interfaces;
        std::vector<std::string> chainable_command_interfaces;
        std::string robot_description;
        bool enable_parameter_update_without_reactivation = true;
        struct Kinematics {
            std::string plugin_name;
            std::string plugin_package;
            std::string base;
            std::string tip;
            double alpha = 0.01;
        } kinematics;
        struct FtSensor {
            std::string name;
            double filter_coefficient = 0.05;
            struct Frame {
                std::string id;
            } frame;
        } ft_sensor;
        struct Control {
            struct Frame {
                std::string id;
            } frame;
        } control;
        struct FixedWorldFrame {
            struct Frame {
                std::string id;
            } frame;
        } fixed_world_frame;
        struct GravityCompensation {
            struct Frame {
                std::string id;
            } frame;
            struct Cog {
                std::vector<double> pos;
                double force = 0.0;
            } CoG;
        } gravity_compensation;
        struct Admittance {
            std::vector<bool> selected_axes;
            std::vector<double> mass;
            std::vector<double> damping_ratio;
            std::vector<double> stiffness;
            double joint_damping = 5.0;
        } admittance;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool enable_parameter_update_without_reactivation = true;
        struct Kinematics {
            double alpha = 0.01;
        } kinematics;
        struct FtSensor {
            double filter_coefficient = 0.05;
        } ft_sensor;
        struct GravityCompensation {
            struct Cog {
                double force = 0.0;
            } CoG;
        } gravity_compensation;
        struct Admittance {
            double joint_damping = 5.0;
        } admittance;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("admittance_controller"), prefix) {
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
      output.kinematics.alpha = params.kinematics.alpha;
      output.ft_sensor.filter_coefficient = params.ft_sensor.filter_coefficient;
      output.gravity_compensation.CoG.force = params.gravity_compensation.CoG.force;
      output.admittance.joint_damping = params.admittance.joint_damping;
      output.enable_parameter_update_without_reactivation = params.enable_parameter_update_without_reactivation;

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
        if (param.get_name() == (prefix_ + "joints")) {
            updated_params.joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_joints")) {
            updated_params.command_joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_interfaces")) {
            updated_params.command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "state_interfaces")) {
            updated_params.state_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "chainable_command_interfaces")) {
            updated_params.chainable_command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.plugin_name")) {
            updated_params.kinematics.plugin_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.plugin_package")) {
            updated_params.kinematics.plugin_package = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.base")) {
            updated_params.kinematics.base = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.tip")) {
            updated_params.kinematics.tip = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.alpha")) {
            updated_params.kinematics.alpha = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.name")) {
            updated_params.ft_sensor.name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.frame.id")) {
            updated_params.ft_sensor.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.filter_coefficient")) {
            updated_params.ft_sensor.filter_coefficient = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "control.frame.id")) {
            updated_params.control.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "fixed_world_frame.frame.id")) {
            updated_params.fixed_world_frame.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.frame.id")) {
            updated_params.gravity_compensation.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.CoG.pos")) {
            if(auto validation_result = fixed_size<double>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.gravity_compensation.CoG.pos = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.CoG.force")) {
            updated_params.gravity_compensation.CoG.force = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.selected_axes")) {
            if(auto validation_result = fixed_size<bool>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.selected_axes = param.as_bool_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.mass")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = element_bounds<double>(param, 0.0001, 1000000.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.mass = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.damping_ratio")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.damping_ratio = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.stiffness")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = element_bounds<double>(param, 0.0, 100000000.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.stiffness = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.joint_damping")) {
            if(auto validation_result = gt_eq(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.joint_damping = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "robot_description")) {
            updated_params.robot_description = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_parameter_update_without_reactivation")) {
            updated_params.enable_parameter_update_without_reactivation = param.as_bool();
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
      if (!parameters_interface_->has_parameter(prefix_ + "joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies which joints will be used by the controller. ";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "(optional) Specifies the joints for writing into another controllers reference. This parameter is only relevant when chaining the output of this controller to the input of another controller.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.command_joints);
          parameters_interface_->declare_parameter(prefix_ + "command_joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies which command interfaces the controller will claim.";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "state_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies which state interfaces the controller will claim.";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "state_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "chainable_command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies which reference interfaces the controller will export. Normally, the position and velocity are used.";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "chainable_command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.plugin_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the name of the kinematics plugin to load.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.plugin_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.plugin_package")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the package name that contains the kinematics plugin.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.plugin_package", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.base")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the base link of the robot description used by the kinematics plugin.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.base", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.tip")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the end effector link of the robot description used by the kinematics plugin.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.tip", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.alpha")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the damping coefficient for the Jacobian pseudo inverse.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.kinematics.alpha);
          parameters_interface_->declare_parameter(prefix_ + "kinematics.alpha", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the name of the force torque sensor in the robot description which will be used in the admittance calculation.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the frame/link name of the force torque sensor.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.filter_coefficient")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the filter coefficient for the sensor's exponential filter.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ft_sensor.filter_coefficient);
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.filter_coefficient", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "control.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the control frame used for admittance calculation.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "control.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "fixed_world_frame.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the world frame use for admittance calculation. Gravity must point down in this frame.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "fixed_world_frame.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the frame which center of gravity (CoG) is defined in. Normally, the force torque sensor frame should be used.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.CoG.pos")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the position of the center of gravity (CoG) of the end effector in the gravity compensation frame.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.CoG.pos", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.CoG.force")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the weight of the end effector, e.g mass * 9.81.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.gravity_compensation.CoG.force);
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.CoG.force", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.selected_axes")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies whether the axes x, y, z, rx, ry, and rz should be included in the admittance calculation.";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_BOOL_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.selected_axes", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.mass")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the mass values for x, y, z, rx, ry, and rz used in the admittance calculation.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0001;
          descriptor.floating_point_range.at(0).to_value = 1000000.0;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.mass", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.damping_ratio")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies damping ratio values for x, y, z, rx, ry, and rz used in the admittance calculation. The damping ratio is defined as: zeta = D / (2 * sqrt( M * S )).";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.damping_ratio", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.stiffness")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the stiffness values for x, y, z, rx, ry, and rz used in the admittance calculation.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = 100000000.0;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.stiffness", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.joint_damping")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Specifies the joint damping applied used in the admittance calculation.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.admittance.joint_damping);
          parameters_interface_->declare_parameter(prefix_ + "admittance.joint_damping", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "robot_description")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Contains robot description in URDF format. The description is used for forward and inverse kinematics.";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "robot_description", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_parameter_update_without_reactivation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If enabled, the parameters will be dynamically updated while the controller is running.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_parameter_update_without_reactivation);
          parameters_interface_->declare_parameter(prefix_ + "enable_parameter_update_without_reactivation", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.command_joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "state_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.state_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "chainable_command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.chainable_command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.plugin_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.plugin_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.plugin_package");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.plugin_package = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.base");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.base = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.tip");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.tip = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.alpha");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.alpha = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.filter_coefficient");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.filter_coefficient = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "control.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.control.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "fixed_world_frame.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.fixed_world_frame.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gravity_compensation.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.CoG.pos");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gravity_compensation.CoG.pos': {}", validation_result.error()));
      }
      updated_params.gravity_compensation.CoG.pos = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.CoG.force");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gravity_compensation.CoG.force = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.selected_axes");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<bool>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.selected_axes': {}", validation_result.error()));
      }
      updated_params.admittance.selected_axes = param.as_bool_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.mass");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.mass': {}", validation_result.error()));
      }
      if(auto validation_result = element_bounds<double>(param, 0.0001, 1000000.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.mass': {}", validation_result.error()));
      }
      updated_params.admittance.mass = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.damping_ratio");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.damping_ratio': {}", validation_result.error()));
      }
      updated_params.admittance.damping_ratio = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.stiffness");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.stiffness': {}", validation_result.error()));
      }
      if(auto validation_result = element_bounds<double>(param, 0.0, 100000000.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.stiffness': {}", validation_result.error()));
      }
      updated_params.admittance.stiffness = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.joint_damping");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.joint_damping': {}", validation_result.error()));
      }
      updated_params.admittance.joint_damping = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "robot_description");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.robot_description = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "enable_parameter_update_without_reactivation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_parameter_update_without_reactivation = param.as_bool();


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
      rclcpp::Logger logger_ = rclcpp::get_logger("admittance_controller");
      std::mutex mutable mutex_;
  };

} // namespace admittance_controller
