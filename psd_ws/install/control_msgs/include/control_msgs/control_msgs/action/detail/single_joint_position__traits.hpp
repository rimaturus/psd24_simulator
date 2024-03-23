// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:action/SingleJointPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__TRAITS_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/action/detail/single_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SingleJointPosition_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: min_duration
  {
    out << "min_duration: ";
    to_flow_style_yaml(msg.min_duration, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SingleJointPosition_Goal & msg,
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

  // member: min_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_duration:\n";
    to_block_style_yaml(msg.min_duration, out, indentation + 2);
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SingleJointPosition_Goal & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_Goal & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_Goal>()
{
  return "control_msgs::action::SingleJointPosition_Goal";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_Goal>()
{
  return "control_msgs/action/SingleJointPosition_Goal";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SingleJointPosition_Result & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SingleJointPosition_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SingleJointPosition_Result & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_Result & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_Result>()
{
  return "control_msgs::action::SingleJointPosition_Result";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_Result>()
{
  return "control_msgs/action/SingleJointPosition_Result";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SingleJointPosition_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SingleJointPosition_Feedback & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SingleJointPosition_Feedback & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_Feedback & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_Feedback>()
{
  return "control_msgs::action::SingleJointPosition_Feedback";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_Feedback>()
{
  return "control_msgs/action/SingleJointPosition_Feedback";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_Feedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_Feedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_msgs/action/detail/single_joint_position__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SingleJointPosition_SendGoal_Request & msg,
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
  const SingleJointPosition_SendGoal_Request & msg,
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

inline std::string to_yaml(const SingleJointPosition_SendGoal_Request & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_SendGoal_Request & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_SendGoal_Request>()
{
  return "control_msgs::action::SingleJointPosition_SendGoal_Request";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_SendGoal_Request>()
{
  return "control_msgs/action/SingleJointPosition_SendGoal_Request";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::SingleJointPosition_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::SingleJointPosition_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_SendGoal_Request>
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
  const SingleJointPosition_SendGoal_Response & msg,
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
  const SingleJointPosition_SendGoal_Response & msg,
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

inline std::string to_yaml(const SingleJointPosition_SendGoal_Response & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_SendGoal_Response & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_SendGoal_Response>()
{
  return "control_msgs::action::SingleJointPosition_SendGoal_Response";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_SendGoal_Response>()
{
  return "control_msgs/action/SingleJointPosition_SendGoal_Response";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_SendGoal>()
{
  return "control_msgs::action::SingleJointPosition_SendGoal";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_SendGoal>()
{
  return "control_msgs/action/SingleJointPosition_SendGoal";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::SingleJointPosition_SendGoal_Request>::value &&
    has_fixed_size<control_msgs::action::SingleJointPosition_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::SingleJointPosition_SendGoal_Request>::value &&
    has_bounded_size<control_msgs::action::SingleJointPosition_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::SingleJointPosition_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::SingleJointPosition_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::SingleJointPosition_SendGoal_Response>
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
  const SingleJointPosition_GetResult_Request & msg,
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
  const SingleJointPosition_GetResult_Request & msg,
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

inline std::string to_yaml(const SingleJointPosition_GetResult_Request & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_GetResult_Request & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_GetResult_Request>()
{
  return "control_msgs::action::SingleJointPosition_GetResult_Request";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_GetResult_Request>()
{
  return "control_msgs/action/SingleJointPosition_GetResult_Request";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/single_joint_position__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SingleJointPosition_GetResult_Response & msg,
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
  const SingleJointPosition_GetResult_Response & msg,
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

inline std::string to_yaml(const SingleJointPosition_GetResult_Response & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_GetResult_Response & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_GetResult_Response>()
{
  return "control_msgs::action::SingleJointPosition_GetResult_Response";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_GetResult_Response>()
{
  return "control_msgs/action/SingleJointPosition_GetResult_Response";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::SingleJointPosition_Result>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::SingleJointPosition_Result>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_GetResult>()
{
  return "control_msgs::action::SingleJointPosition_GetResult";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_GetResult>()
{
  return "control_msgs/action/SingleJointPosition_GetResult";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::SingleJointPosition_GetResult_Request>::value &&
    has_fixed_size<control_msgs::action::SingleJointPosition_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::SingleJointPosition_GetResult_Request>::value &&
    has_bounded_size<control_msgs::action::SingleJointPosition_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::SingleJointPosition_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::SingleJointPosition_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::SingleJointPosition_GetResult_Response>
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
// #include "control_msgs/action/detail/single_joint_position__traits.hpp"

namespace control_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SingleJointPosition_FeedbackMessage & msg,
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
  const SingleJointPosition_FeedbackMessage & msg,
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

inline std::string to_yaml(const SingleJointPosition_FeedbackMessage & msg, bool use_flow_style = false)
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
  const control_msgs::action::SingleJointPosition_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::action::SingleJointPosition_FeedbackMessage & msg)
{
  return control_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::action::SingleJointPosition_FeedbackMessage>()
{
  return "control_msgs::action::SingleJointPosition_FeedbackMessage";
}

template<>
inline const char * name<control_msgs::action::SingleJointPosition_FeedbackMessage>()
{
  return "control_msgs/action/SingleJointPosition_FeedbackMessage";
}

template<>
struct has_fixed_size<control_msgs::action::SingleJointPosition_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::SingleJointPosition_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::SingleJointPosition_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::SingleJointPosition_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::SingleJointPosition_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_msgs::action::SingleJointPosition>
  : std::true_type
{
};

template<>
struct is_action_goal<control_msgs::action::SingleJointPosition_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_msgs::action::SingleJointPosition_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_msgs::action::SingleJointPosition_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__TRAITS_HPP_
