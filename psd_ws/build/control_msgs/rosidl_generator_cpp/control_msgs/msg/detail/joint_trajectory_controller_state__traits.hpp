// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reference'
// Member 'feedback'
// Member 'error'
// Member 'output'
// Member 'desired'
// Member 'actual'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"
// Member 'multi_dof_reference'
// Member 'multi_dof_feedback'
// Member 'multi_dof_error'
// Member 'multi_dof_output'
// Member 'multi_dof_desired'
// Member 'multi_dof_actual'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointTrajectoryControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference
  {
    out << "reference: ";
    to_flow_style_yaml(msg.reference, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: output
  {
    out << "output: ";
    to_flow_style_yaml(msg.output, out);
    out << ", ";
  }

  // member: desired
  {
    out << "desired: ";
    to_flow_style_yaml(msg.desired, out);
    out << ", ";
  }

  // member: actual
  {
    out << "actual: ";
    to_flow_style_yaml(msg.actual, out);
    out << ", ";
  }

  // member: multi_dof_joint_names
  {
    if (msg.multi_dof_joint_names.size() == 0) {
      out << "multi_dof_joint_names: []";
    } else {
      out << "multi_dof_joint_names: [";
      size_t pending_items = msg.multi_dof_joint_names.size();
      for (auto item : msg.multi_dof_joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: multi_dof_reference
  {
    out << "multi_dof_reference: ";
    to_flow_style_yaml(msg.multi_dof_reference, out);
    out << ", ";
  }

  // member: multi_dof_feedback
  {
    out << "multi_dof_feedback: ";
    to_flow_style_yaml(msg.multi_dof_feedback, out);
    out << ", ";
  }

  // member: multi_dof_error
  {
    out << "multi_dof_error: ";
    to_flow_style_yaml(msg.multi_dof_error, out);
    out << ", ";
  }

  // member: multi_dof_output
  {
    out << "multi_dof_output: ";
    to_flow_style_yaml(msg.multi_dof_output, out);
    out << ", ";
  }

  // member: multi_dof_desired
  {
    out << "multi_dof_desired: ";
    to_flow_style_yaml(msg.multi_dof_desired, out);
    out << ", ";
  }

  // member: multi_dof_actual
  {
    out << "multi_dof_actual: ";
    to_flow_style_yaml(msg.multi_dof_actual, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTrajectoryControllerState & msg,
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

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference:\n";
    to_block_style_yaml(msg.reference, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output:\n";
    to_block_style_yaml(msg.output, out, indentation + 2);
  }

  // member: desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired:\n";
    to_block_style_yaml(msg.desired, out, indentation + 2);
  }

  // member: actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual:\n";
    to_block_style_yaml(msg.actual, out, indentation + 2);
  }

  // member: multi_dof_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.multi_dof_joint_names.size() == 0) {
      out << "multi_dof_joint_names: []\n";
    } else {
      out << "multi_dof_joint_names:\n";
      for (auto item : msg.multi_dof_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: multi_dof_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_reference:\n";
    to_block_style_yaml(msg.multi_dof_reference, out, indentation + 2);
  }

  // member: multi_dof_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_feedback:\n";
    to_block_style_yaml(msg.multi_dof_feedback, out, indentation + 2);
  }

  // member: multi_dof_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_error:\n";
    to_block_style_yaml(msg.multi_dof_error, out, indentation + 2);
  }

  // member: multi_dof_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_output:\n";
    to_block_style_yaml(msg.multi_dof_output, out, indentation + 2);
  }

  // member: multi_dof_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_desired:\n";
    to_block_style_yaml(msg.multi_dof_desired, out, indentation + 2);
  }

  // member: multi_dof_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_actual:\n";
    to_block_style_yaml(msg.multi_dof_actual, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTrajectoryControllerState & msg, bool use_flow_style = false)
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
  const control_msgs::msg::JointTrajectoryControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::JointTrajectoryControllerState & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::JointTrajectoryControllerState>()
{
  return "control_msgs::msg::JointTrajectoryControllerState";
}

template<>
inline const char * name<control_msgs::msg::JointTrajectoryControllerState>()
{
  return "control_msgs/msg/JointTrajectoryControllerState";
}

template<>
struct has_fixed_size<control_msgs::msg::JointTrajectoryControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::JointTrajectoryControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::JointTrajectoryControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__TRAITS_HPP_
