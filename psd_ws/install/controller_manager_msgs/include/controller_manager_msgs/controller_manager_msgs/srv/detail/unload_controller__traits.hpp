// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/UnloadController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/srv/detail/unload_controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UnloadController_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnloadController_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnloadController_Request & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::UnloadController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::UnloadController_Request & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::UnloadController_Request>()
{
  return "controller_manager_msgs::srv::UnloadController_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::UnloadController_Request>()
{
  return "controller_manager_msgs/srv/UnloadController_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::UnloadController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::UnloadController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::UnloadController_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UnloadController_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnloadController_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnloadController_Response & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::UnloadController_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::UnloadController_Response & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::UnloadController_Response>()
{
  return "controller_manager_msgs::srv::UnloadController_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::UnloadController_Response>()
{
  return "controller_manager_msgs/srv/UnloadController_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::UnloadController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::UnloadController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::UnloadController_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::UnloadController>()
{
  return "controller_manager_msgs::srv::UnloadController";
}

template<>
inline const char * name<controller_manager_msgs::srv::UnloadController>()
{
  return "controller_manager_msgs/srv/UnloadController";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::UnloadController>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::UnloadController_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::UnloadController_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::UnloadController>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::UnloadController_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::UnloadController_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::UnloadController>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::UnloadController_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::UnloadController_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__TRAITS_HPP_
