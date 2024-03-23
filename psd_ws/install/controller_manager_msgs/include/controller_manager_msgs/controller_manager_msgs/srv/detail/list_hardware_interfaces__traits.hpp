// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListHardwareInterfaces_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListHardwareInterfaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListHardwareInterfaces_Request & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::ListHardwareInterfaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ListHardwareInterfaces_Request & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareInterfaces_Request>()
{
  return "controller_manager_msgs::srv::ListHardwareInterfaces_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareInterfaces_Request>()
{
  return "controller_manager_msgs/srv/ListHardwareInterfaces_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListHardwareInterfaces_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_interfaces
  {
    if (msg.command_interfaces.size() == 0) {
      out << "command_interfaces: []";
    } else {
      out << "command_interfaces: [";
      size_t pending_items = msg.command_interfaces.size();
      for (auto item : msg.command_interfaces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state_interfaces
  {
    if (msg.state_interfaces.size() == 0) {
      out << "state_interfaces: []";
    } else {
      out << "state_interfaces: [";
      size_t pending_items = msg.state_interfaces.size();
      for (auto item : msg.state_interfaces) {
        to_flow_style_yaml(item, out);
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
  const ListHardwareInterfaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command_interfaces.size() == 0) {
      out << "command_interfaces: []\n";
    } else {
      out << "command_interfaces:\n";
      for (auto item : msg.command_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: state_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_interfaces.size() == 0) {
      out << "state_interfaces: []\n";
    } else {
      out << "state_interfaces:\n";
      for (auto item : msg.state_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListHardwareInterfaces_Response & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::ListHardwareInterfaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ListHardwareInterfaces_Response & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareInterfaces_Response>()
{
  return "controller_manager_msgs::srv::ListHardwareInterfaces_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareInterfaces_Response>()
{
  return "controller_manager_msgs/srv/ListHardwareInterfaces_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareInterfaces>()
{
  return "controller_manager_msgs::srv::ListHardwareInterfaces";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareInterfaces>()
{
  return "controller_manager_msgs/srv/ListHardwareInterfaces";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ListHardwareInterfaces>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__TRAITS_HPP_
