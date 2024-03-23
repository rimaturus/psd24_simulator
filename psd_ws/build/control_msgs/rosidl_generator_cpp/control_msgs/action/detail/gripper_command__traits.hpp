// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/action/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command'
#include "control_msgs/msg/detail/gripper_command__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_Goal & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_Goal>()
{
  return "control_msgs::action::GripperCommand_Goal";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_Goal>()
{
  return "control_msgs/action/GripperCommand_Goal";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_Goal>
  : std::integral_constant<bool, has_fixed_size<control_msgs::msg::GripperCommand>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_Goal>
  : std::integral_constant<bool, has_bounded_size<control_msgs::msg::GripperCommand>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: effort
  {
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << ", ";
  }

  // member: stalled
  {
    out << "stalled: ";
    rosidl_generator_traits::value_to_yaml(msg.stalled, out);
    out << ", ";
  }

  // member: reached_goal
  {
    out << "reached_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_Result & msg,
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

  // member: effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << "\n";
  }

  // member: stalled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stalled: ";
    rosidl_generator_traits::value_to_yaml(msg.stalled, out);
    out << "\n";
  }

  // member: reached_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_Result & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_Result>()
{
  return "control_msgs::action::GripperCommand_Result";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_Result>()
{
  return "control_msgs/action/GripperCommand_Result";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::GripperCommand_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: effort
  {
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << ", ";
  }

  // member: stalled
  {
    out << "stalled: ";
    rosidl_generator_traits::value_to_yaml(msg.stalled, out);
    out << ", ";
  }

  // member: reached_goal
  {
    out << "reached_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_Feedback & msg,
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

  // member: effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effort: ";
    rosidl_generator_traits::value_to_yaml(msg.effort, out);
    out << "\n";
  }

  // member: stalled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stalled: ";
    rosidl_generator_traits::value_to_yaml(msg.stalled, out);
    out << "\n";
  }

  // member: reached_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_goal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_Feedback & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_Feedback>()
{
  return "control_msgs::action::GripperCommand_Feedback";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_Feedback>()
{
  return "control_msgs/action/GripperCommand_Feedback";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::GripperCommand_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_msgs/action/detail/gripper_command__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_SendGoal_Request & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_SendGoal_Request>()
{
  return "control_msgs::action::GripperCommand_SendGoal_Request";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_SendGoal_Request>()
{
  return "control_msgs/action/GripperCommand_SendGoal_Request";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::GripperCommand_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::GripperCommand_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_SendGoal_Response & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_SendGoal_Response>()
{
  return "control_msgs::action::GripperCommand_SendGoal_Response";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_SendGoal_Response>()
{
  return "control_msgs/action/GripperCommand_SendGoal_Response";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_SendGoal>()
{
  return "control_msgs::action::GripperCommand_SendGoal";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_SendGoal>()
{
  return "control_msgs/action/GripperCommand_SendGoal";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Request>::value &&
    has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Request>::value &&
    has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::GripperCommand_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_GetResult_Request & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_GetResult_Request>()
{
  return "control_msgs::action::GripperCommand_GetResult_Request";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_GetResult_Request>()
{
  return "control_msgs/action/GripperCommand_GetResult_Request";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/gripper_command__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_GetResult_Response & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_GetResult_Response>()
{
  return "control_msgs::action::GripperCommand_GetResult_Response";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_GetResult_Response>()
{
  return "control_msgs/action/GripperCommand_GetResult_Response";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::GripperCommand_Result>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::GripperCommand_Result>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_GetResult>()
{
  return "control_msgs::action::GripperCommand_GetResult";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_GetResult>()
{
  return "control_msgs/action/GripperCommand_GetResult";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::GripperCommand_GetResult_Request>::value &&
    has_fixed_size<control_msgs::action::GripperCommand_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::GripperCommand_GetResult_Request>::value &&
    has_bounded_size<control_msgs::action::GripperCommand_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::GripperCommand_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::GripperCommand_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::GripperCommand_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/gripper_command__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GripperCommand_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::action::GripperCommand_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::GripperCommand_FeedbackMessage & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::GripperCommand_FeedbackMessage>()
{
  return "control_msgs::action::GripperCommand_FeedbackMessage";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_FeedbackMessage>()
{
  return "control_msgs/action/GripperCommand_FeedbackMessage";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::GripperCommand_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::GripperCommand_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_msgs::action::GripperCommand>
  : std::true_type
{
};

template<>
struct is_action_goal<control_msgs::action::GripperCommand_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_msgs::action::GripperCommand_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_msgs::action::GripperCommand_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
