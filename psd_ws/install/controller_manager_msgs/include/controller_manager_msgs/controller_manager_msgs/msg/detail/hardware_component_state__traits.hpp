// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state'
#include "lifecycle_msgs/msg/detail/state__traits.hpp"
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__traits.hpp"

namespace controller_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareComponentState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: class_type
  {
    out << "class_type: ";
    rosidl_generator_traits::value_to_yaml(msg.class_type, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

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
  const HardwareComponentState & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: class_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_type: ";
    rosidl_generator_traits::value_to_yaml(msg.class_type, out);
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

inline std::string to_yaml(const HardwareComponentState & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::msg::HardwareComponentState & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::msg::HardwareComponentState & msg)
{
  return controller_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::msg::HardwareComponentState>()
{
  return "controller_manager_msgs::msg::HardwareComponentState";
}

template<>
inline const char * name<controller_manager_msgs::msg::HardwareComponentState>()
{
  return "controller_manager_msgs/msg/HardwareComponentState";
}

template<>
struct has_fixed_size<controller_manager_msgs::msg::HardwareComponentState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::msg::HardwareComponentState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::msg::HardwareComponentState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__TRAITS_HPP_
