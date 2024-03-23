// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__TRAITS_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryTrajectoryState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QueryTrajectoryState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryTrajectoryState_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::srv::QueryTrajectoryState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::srv::QueryTrajectoryState_Request & msg)
{
  return control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::srv::QueryTrajectoryState_Request>()
{
  return "control_msgs::srv::QueryTrajectoryState_Request";
}

template<>
inline const char * name<control_msgs::srv::QueryTrajectoryState_Request>()
{
  return "control_msgs/srv/QueryTrajectoryState_Request";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryTrajectoryState_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryTrajectoryState_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::srv::QueryTrajectoryState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryTrajectoryState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
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
  const QueryTrajectoryState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
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

inline std::string to_yaml(const QueryTrajectoryState_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::srv::QueryTrajectoryState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::srv::QueryTrajectoryState_Response & msg)
{
  return control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::srv::QueryTrajectoryState_Response>()
{
  return "control_msgs::srv::QueryTrajectoryState_Response";
}

template<>
inline const char * name<control_msgs::srv::QueryTrajectoryState_Response>()
{
  return "control_msgs/srv/QueryTrajectoryState_Response";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryTrajectoryState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryTrajectoryState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::srv::QueryTrajectoryState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::srv::QueryTrajectoryState>()
{
  return "control_msgs::srv::QueryTrajectoryState";
}

template<>
inline const char * name<control_msgs::srv::QueryTrajectoryState>()
{
  return "control_msgs/srv/QueryTrajectoryState";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryTrajectoryState>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::srv::QueryTrajectoryState_Request>::value &&
    has_fixed_size<control_msgs::srv::QueryTrajectoryState_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::srv::QueryTrajectoryState>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::srv::QueryTrajectoryState_Request>::value &&
    has_bounded_size<control_msgs::srv::QueryTrajectoryState_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::srv::QueryTrajectoryState>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::srv::QueryTrajectoryState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::srv::QueryTrajectoryState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__TRAITS_HPP_
