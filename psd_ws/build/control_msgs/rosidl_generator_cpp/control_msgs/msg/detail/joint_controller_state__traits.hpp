// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/joint_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: set_point
  {
    out << "set_point: ";
    rosidl_generator_traits::value_to_yaml(msg.set_point, out);
    out << ", ";
  }

  // member: process_value
  {
    out << "process_value: ";
    rosidl_generator_traits::value_to_yaml(msg.process_value, out);
    out << ", ";
  }

  // member: process_value_dot
  {
    out << "process_value_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.process_value_dot, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: p
  {
    out << "p: ";
    rosidl_generator_traits::value_to_yaml(msg.p, out);
    out << ", ";
  }

  // member: i
  {
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: i_clamp
  {
    out << "i_clamp: ";
    rosidl_generator_traits::value_to_yaml(msg.i_clamp, out);
    out << ", ";
  }

  // member: antiwindup
  {
    out << "antiwindup: ";
    rosidl_generator_traits::value_to_yaml(msg.antiwindup, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointControllerState & msg,
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

  // member: set_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_point: ";
    rosidl_generator_traits::value_to_yaml(msg.set_point, out);
    out << "\n";
  }

  // member: process_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_value: ";
    rosidl_generator_traits::value_to_yaml(msg.process_value, out);
    out << "\n";
  }

  // member: process_value_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_value_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.process_value_dot, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p: ";
    rosidl_generator_traits::value_to_yaml(msg.p, out);
    out << "\n";
  }

  // member: i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: i_clamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_clamp: ";
    rosidl_generator_traits::value_to_yaml(msg.i_clamp, out);
    out << "\n";
  }

  // member: antiwindup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antiwindup: ";
    rosidl_generator_traits::value_to_yaml(msg.antiwindup, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointControllerState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::JointControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::JointControllerState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::JointControllerState>()
{
  return "control_msgs::msg::JointControllerState";
}

template<>
inline const char * name<control_msgs::msg::JointControllerState>()
{
  return "control_msgs/msg/JointControllerState";
}

template<>
struct has_fixed_size<control_msgs::msg::JointControllerState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<control_msgs::msg::JointControllerState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<control_msgs::msg::JointControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__TRAITS_HPP_
