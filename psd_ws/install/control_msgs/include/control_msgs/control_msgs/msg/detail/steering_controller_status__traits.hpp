// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/steering_controller_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SteeringControllerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: traction_wheels_position
  {
    if (msg.traction_wheels_position.size() == 0) {
      out << "traction_wheels_position: []";
    } else {
      out << "traction_wheels_position: [";
      size_t pending_items = msg.traction_wheels_position.size();
      for (auto item : msg.traction_wheels_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traction_wheels_velocity
  {
    if (msg.traction_wheels_velocity.size() == 0) {
      out << "traction_wheels_velocity: []";
    } else {
      out << "traction_wheels_velocity: [";
      size_t pending_items = msg.traction_wheels_velocity.size();
      for (auto item : msg.traction_wheels_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steer_positions
  {
    if (msg.steer_positions.size() == 0) {
      out << "steer_positions: []";
    } else {
      out << "steer_positions: [";
      size_t pending_items = msg.steer_positions.size();
      for (auto item : msg.steer_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: linear_velocity_command
  {
    if (msg.linear_velocity_command.size() == 0) {
      out << "linear_velocity_command: []";
    } else {
      out << "linear_velocity_command: [";
      size_t pending_items = msg.linear_velocity_command.size();
      for (auto item : msg.linear_velocity_command) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steering_angle_command
  {
    if (msg.steering_angle_command.size() == 0) {
      out << "steering_angle_command: []";
    } else {
      out << "steering_angle_command: [";
      size_t pending_items = msg.steering_angle_command.size();
      for (auto item : msg.steering_angle_command) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SteeringControllerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: traction_wheels_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traction_wheels_position.size() == 0) {
      out << "traction_wheels_position: []\n";
    } else {
      out << "traction_wheels_position:\n";
      for (auto item : msg.traction_wheels_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traction_wheels_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traction_wheels_velocity.size() == 0) {
      out << "traction_wheels_velocity: []\n";
    } else {
      out << "traction_wheels_velocity:\n";
      for (auto item : msg.traction_wheels_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steer_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steer_positions.size() == 0) {
      out << "steer_positions: []\n";
    } else {
      out << "steer_positions:\n";
      for (auto item : msg.steer_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: linear_velocity_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_velocity_command.size() == 0) {
      out << "linear_velocity_command: []\n";
    } else {
      out << "linear_velocity_command:\n";
      for (auto item : msg.linear_velocity_command) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: steering_angle_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steering_angle_command.size() == 0) {
      out << "steering_angle_command: []\n";
    } else {
      out << "steering_angle_command:\n";
      for (auto item : msg.steering_angle_command) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SteeringControllerStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::msg::SteeringControllerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::SteeringControllerStatus & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::SteeringControllerStatus>()
{
  return "control_msgs::msg::SteeringControllerStatus";
}

template<>
inline const char * name<control_msgs::msg::SteeringControllerStatus>()
{
  return "control_msgs/msg/SteeringControllerStatus";
}

template<>
struct has_fixed_size<control_msgs::msg::SteeringControllerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::SteeringControllerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::SteeringControllerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__TRAITS_HPP_
