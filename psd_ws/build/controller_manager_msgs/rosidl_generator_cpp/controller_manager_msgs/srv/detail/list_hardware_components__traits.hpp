// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/srv/detail/list_hardware_components__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListHardwareComponents_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListHardwareComponents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListHardwareComponents_Request & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::ListHardwareComponents_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ListHardwareComponents_Request & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareComponents_Request>()
{
  return "controller_manager_msgs::srv::ListHardwareComponents_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareComponents_Request>()
{
  return "controller_manager_msgs/srv/ListHardwareComponents_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareComponents_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareComponents_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ListHardwareComponents_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'component'
#include "controller_manager_msgs/msg/detail/hardware_component_state__traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListHardwareComponents_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: component
  {
    if (msg.component.size() == 0) {
      out << "component: []";
    } else {
      out << "component: [";
      size_t pending_items = msg.component.size();
      for (auto item : msg.component) {
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
  const ListHardwareComponents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.component.size() == 0) {
      out << "component: []\n";
    } else {
      out << "component:\n";
      for (auto item : msg.component) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListHardwareComponents_Response & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::ListHardwareComponents_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::ListHardwareComponents_Response & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareComponents_Response>()
{
  return "controller_manager_msgs::srv::ListHardwareComponents_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareComponents_Response>()
{
  return "controller_manager_msgs/srv/ListHardwareComponents_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareComponents_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareComponents_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::ListHardwareComponents_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareComponents>()
{
  return "controller_manager_msgs::srv::ListHardwareComponents";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareComponents>()
{
  return "controller_manager_msgs/srv/ListHardwareComponents";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareComponents>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ListHardwareComponents_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ListHardwareComponents_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareComponents>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ListHardwareComponents_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ListHardwareComponents_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ListHardwareComponents>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ListHardwareComponents_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ListHardwareComponents_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__TRAITS_HPP_
