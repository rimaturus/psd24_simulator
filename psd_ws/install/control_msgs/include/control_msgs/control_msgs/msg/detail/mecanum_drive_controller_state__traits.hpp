// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/mecanum_drive_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reference_velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MecanumDriveControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: front_left_wheel_velocity
  {
    out << "front_left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_wheel_velocity, out);
    out << ", ";
  }

  // member: back_left_wheel_velocity
  {
    out << "back_left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_wheel_velocity, out);
    out << ", ";
  }

  // member: back_right_wheel_velocity
  {
    out << "back_right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_wheel_velocity, out);
    out << ", ";
  }

  // member: front_right_wheel_velocity
  {
    out << "front_right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_wheel_velocity, out);
    out << ", ";
  }

  // member: reference_velocity
  {
    out << "reference_velocity: ";
    to_flow_style_yaml(msg.reference_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecanumDriveControllerState & msg,
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

  // member: front_left_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_wheel_velocity, out);
    out << "\n";
  }

  // member: back_left_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_left_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_wheel_velocity, out);
    out << "\n";
  }

  // member: back_right_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_wheel_velocity, out);
    out << "\n";
  }

  // member: front_right_wheel_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_wheel_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_wheel_velocity, out);
    out << "\n";
  }

  // member: reference_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_velocity:\n";
    to_block_style_yaml(msg.reference_velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecanumDriveControllerState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::MecanumDriveControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::MecanumDriveControllerState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::MecanumDriveControllerState>()
{
  return "control_msgs::msg::MecanumDriveControllerState";
}

template<>
inline const char * name<control_msgs::msg::MecanumDriveControllerState>()
{
  return "control_msgs/msg/MecanumDriveControllerState";
}

template<>
struct has_fixed_size<control_msgs::msg::MecanumDriveControllerState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<control_msgs::msg::MecanumDriveControllerState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<control_msgs::msg::MecanumDriveControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__TRAITS_HPP_
