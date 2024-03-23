// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/InterfaceValue.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/interface_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InterfaceValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: interface_names
  {
    if (msg.interface_names.size() == 0) {
      out << "interface_names: []";
    } else {
      out << "interface_names: [";
      size_t pending_items = msg.interface_names.size();
      for (auto item : msg.interface_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
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
  const InterfaceValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interface_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.interface_names.size() == 0) {
      out << "interface_names: []\n";
    } else {
      out << "interface_names:\n";
      for (auto item : msg.interface_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
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

inline std::string to_yaml(const InterfaceValue & msg, bool use_flow_style = false)
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
  const control_msgs::msg::InterfaceValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::InterfaceValue & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::InterfaceValue>()
{
  return "control_msgs::msg::InterfaceValue";
}

template<>
inline const char * name<control_msgs::msg::InterfaceValue>()
{
  return "control_msgs/msg/InterfaceValue";
}

template<>
struct has_fixed_size<control_msgs::msg::InterfaceValue>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::InterfaceValue>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::InterfaceValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__INTERFACE_VALUE__TRAITS_HPP_
