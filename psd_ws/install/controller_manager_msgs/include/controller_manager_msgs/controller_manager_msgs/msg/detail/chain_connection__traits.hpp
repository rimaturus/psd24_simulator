// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/msg/detail/chain_connection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace controller_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChainConnection & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: reference_interfaces
  {
    if (msg.reference_interfaces.size() == 0) {
      out << "reference_interfaces: []";
    } else {
      out << "reference_interfaces: [";
      size_t pending_items = msg.reference_interfaces.size();
      for (auto item : msg.reference_interfaces) {
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
  const ChainConnection & msg,
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

  // member: reference_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_interfaces.size() == 0) {
      out << "reference_interfaces: []\n";
    } else {
      out << "reference_interfaces:\n";
      for (auto item : msg.reference_interfaces) {
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

inline std::string to_yaml(const ChainConnection & msg, bool use_flow_style = false)
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

}  // namespace controller_manager_msgs

namespace rosidl_generator_traits
{

[[deprecated("use controller_manager_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const controller_manager_msgs::msg::ChainConnection & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::msg::ChainConnection & msg)
{
  return controller_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::msg::ChainConnection>()
{
  return "controller_manager_msgs::msg::ChainConnection";
}

template<>
inline const char * name<controller_manager_msgs::msg::ChainConnection>()
{
  return "controller_manager_msgs/msg/ChainConnection";
}

template<>
struct has_fixed_size<controller_manager_msgs::msg::ChainConnection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::msg::ChainConnection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::msg::ChainConnection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__TRAITS_HPP_
