// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: max_effort
  {
    out << "max_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.max_effort, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: max_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.max_effort, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand & msg, bool use_flow_style = false)
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
  const control_msgs::msg::GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::GripperCommand & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::GripperCommand>()
{
  return "control_msgs::msg::GripperCommand";
}

template<>
inline const char * name<control_msgs::msg::GripperCommand>()
{
  return "control_msgs/msg/GripperCommand";
}

template<>
struct has_fixed_size<control_msgs::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::msg::GripperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
