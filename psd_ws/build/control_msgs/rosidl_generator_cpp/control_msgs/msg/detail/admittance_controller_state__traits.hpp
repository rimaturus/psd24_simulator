// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/admittance_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mass'
// Member 'damping'
// Member 'stiffness'
#include "std_msgs/msg/detail/float64_multi_array__traits.hpp"
// Member 'rot_base_control'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'ref_trans_base_ft'
// Member 'admittance_position'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"
// Member 'selected_axes'
#include "std_msgs/msg/detail/int8_multi_array__traits.hpp"
// Member 'ft_sensor_frame'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'admittance_acceleration'
// Member 'admittance_velocity'
#include "geometry_msgs/msg/detail/twist_stamped__traits.hpp"
// Member 'wrench_base'
#include "geometry_msgs/msg/detail/wrench_stamped__traits.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdmittanceControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: mass
  {
    out << "mass: ";
    to_flow_style_yaml(msg.mass, out);
    out << ", ";
  }

  // member: damping
  {
    out << "damping: ";
    to_flow_style_yaml(msg.damping, out);
    out << ", ";
  }

  // member: stiffness
  {
    out << "stiffness: ";
    to_flow_style_yaml(msg.stiffness, out);
    out << ", ";
  }

  // member: rot_base_control
  {
    out << "rot_base_control: ";
    to_flow_style_yaml(msg.rot_base_control, out);
    out << ", ";
  }

  // member: ref_trans_base_ft
  {
    out << "ref_trans_base_ft: ";
    to_flow_style_yaml(msg.ref_trans_base_ft, out);
    out << ", ";
  }

  // member: selected_axes
  {
    out << "selected_axes: ";
    to_flow_style_yaml(msg.selected_axes, out);
    out << ", ";
  }

  // member: ft_sensor_frame
  {
    out << "ft_sensor_frame: ";
    to_flow_style_yaml(msg.ft_sensor_frame, out);
    out << ", ";
  }

  // member: admittance_position
  {
    out << "admittance_position: ";
    to_flow_style_yaml(msg.admittance_position, out);
    out << ", ";
  }

  // member: admittance_acceleration
  {
    out << "admittance_acceleration: ";
    to_flow_style_yaml(msg.admittance_acceleration, out);
    out << ", ";
  }

  // member: admittance_velocity
  {
    out << "admittance_velocity: ";
    to_flow_style_yaml(msg.admittance_velocity, out);
    out << ", ";
  }

  // member: wrench_base
  {
    out << "wrench_base: ";
    to_flow_style_yaml(msg.wrench_base, out);
    out << ", ";
  }

  // member: joint_state
  {
    out << "joint_state: ";
    to_flow_style_yaml(msg.joint_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AdmittanceControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass:\n";
    to_block_style_yaml(msg.mass, out, indentation + 2);
  }

  // member: damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "damping:\n";
    to_block_style_yaml(msg.damping, out, indentation + 2);
  }

  // member: stiffness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stiffness:\n";
    to_block_style_yaml(msg.stiffness, out, indentation + 2);
  }

  // member: rot_base_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot_base_control:\n";
    to_block_style_yaml(msg.rot_base_control, out, indentation + 2);
  }

  // member: ref_trans_base_ft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_trans_base_ft:\n";
    to_block_style_yaml(msg.ref_trans_base_ft, out, indentation + 2);
  }

  // member: selected_axes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_axes:\n";
    to_block_style_yaml(msg.selected_axes, out, indentation + 2);
  }

  // member: ft_sensor_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ft_sensor_frame:\n";
    to_block_style_yaml(msg.ft_sensor_frame, out, indentation + 2);
  }

  // member: admittance_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "admittance_position:\n";
    to_block_style_yaml(msg.admittance_position, out, indentation + 2);
  }

  // member: admittance_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "admittance_acceleration:\n";
    to_block_style_yaml(msg.admittance_acceleration, out, indentation + 2);
  }

  // member: admittance_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "admittance_velocity:\n";
    to_block_style_yaml(msg.admittance_velocity, out, indentation + 2);
  }

  // member: wrench_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench_base:\n";
    to_block_style_yaml(msg.wrench_base, out, indentation + 2);
  }

  // member: joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_state:\n";
    to_block_style_yaml(msg.joint_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdmittanceControllerState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::AdmittanceControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::AdmittanceControllerState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::AdmittanceControllerState>()
{
  return "control_msgs::msg::AdmittanceControllerState";
}

template<>
inline const char * name<control_msgs::msg::AdmittanceControllerState>()
{
  return "control_msgs/msg/AdmittanceControllerState";
}

template<>
struct has_fixed_size<control_msgs::msg::AdmittanceControllerState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::TransformStamped>::value && has_fixed_size<geometry_msgs::msg::TwistStamped>::value && has_fixed_size<geometry_msgs::msg::WrenchStamped>::value && has_fixed_size<sensor_msgs::msg::JointState>::value && has_fixed_size<std_msgs::msg::Float64MultiArray>::value && has_fixed_size<std_msgs::msg::Int8MultiArray>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<control_msgs::msg::AdmittanceControllerState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::TransformStamped>::value && has_bounded_size<geometry_msgs::msg::TwistStamped>::value && has_bounded_size<geometry_msgs::msg::WrenchStamped>::value && has_bounded_size<sensor_msgs::msg::JointState>::value && has_bounded_size<std_msgs::msg::Float64MultiArray>::value && has_bounded_size<std_msgs::msg::Int8MultiArray>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<control_msgs::msg::AdmittanceControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__TRAITS_HPP_
