// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_state'
#include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetHardwareComponentState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: target_state
  {
    out << "target_state: ";
    to_flow_style_yaml(msg.target_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetHardwareComponentState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: target_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_state:\n";
    to_block_style_yaml(msg.target_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetHardwareComponentState_Request & msg, bool use_flow_style = false)
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

}  // namespace controller_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_manager_msgs::srv::SetHardwareComponentState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::SetHardwareComponentState_Request & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::SetHardwareComponentState_Request>()
{
  return "controller_manager_msgs::srv::SetHardwareComponentState_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::SetHardwareComponentState_Request>()
{
  return "controller_manager_msgs/srv/SetHardwareComponentState_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
// already included above
// #include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetHardwareComponentState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetHardwareComponentState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetHardwareComponentState_Response & msg, bool use_flow_style = false)
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

}  // namespace controller_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_manager_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_manager_msgs::srv::SetHardwareComponentState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::SetHardwareComponentState_Response & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::SetHardwareComponentState_Response>()
{
  return "controller_manager_msgs::srv::SetHardwareComponentState_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::SetHardwareComponentState_Response>()
{
  return "controller_manager_msgs/srv/SetHardwareComponentState_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::integral_constant<bool, has_fixed_size<lifecycle_msgs::msg::State>::value> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::integral_constant<bool, has_bounded_size<lifecycle_msgs::msg::State>::value> {};

template<>
struct is_message<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::SetHardwareComponentState>()
{
  return "controller_manager_msgs::srv::SetHardwareComponentState";
}

template<>
inline const char * name<controller_manager_msgs::srv::SetHardwareComponentState>()
{
  return "controller_manager_msgs/srv/SetHardwareComponentState";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::SetHardwareComponentState_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::SetHardwareComponentState>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::SetHardwareComponentState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::SetHardwareComponentState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__TRAITS_HPP_
