// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/msg/detail/controller_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'chain_connections'
#include "controller_manager_msgs/msg/detail/chain_connection__traits.hpp"

namespace controller_manager_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: claimed_interfaces
  {
    if (msg.claimed_interfaces.size() == 0) {
      out << "claimed_interfaces: []";
    } else {
      out << "claimed_interfaces: [";
      size_t pending_items = msg.claimed_interfaces.size();
      for (auto item : msg.claimed_interfaces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: required_command_interfaces
  {
    if (msg.required_command_interfaces.size() == 0) {
      out << "required_command_interfaces: []";
    } else {
      out << "required_command_interfaces: [";
      size_t pending_items = msg.required_command_interfaces.size();
      for (auto item : msg.required_command_interfaces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: required_state_interfaces
  {
    if (msg.required_state_interfaces.size() == 0) {
      out << "required_state_interfaces: []";
    } else {
      out << "required_state_interfaces: [";
      size_t pending_items = msg.required_state_interfaces.size();
      for (auto item : msg.required_state_interfaces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_chainable
  {
    out << "is_chainable: ";
    rosidl_generator_traits::value_to_yaml(msg.is_chainable, out);
    out << ", ";
  }

  // member: is_chained
  {
    out << "is_chained: ";
    rosidl_generator_traits::value_to_yaml(msg.is_chained, out);
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
    out << ", ";
  }

  // member: chain_connections
  {
    if (msg.chain_connections.size() == 0) {
      out << "chain_connections: []";
    } else {
      out << "chain_connections: [";
      size_t pending_items = msg.chain_connections.size();
      for (auto item : msg.chain_connections) {
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
  const ControllerState & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
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

  // member: claimed_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.claimed_interfaces.size() == 0) {
      out << "claimed_interfaces: []\n";
    } else {
      out << "claimed_interfaces:\n";
      for (auto item : msg.claimed_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: required_command_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.required_command_interfaces.size() == 0) {
      out << "required_command_interfaces: []\n";
    } else {
      out << "required_command_interfaces:\n";
      for (auto item : msg.required_command_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: required_state_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.required_state_interfaces.size() == 0) {
      out << "required_state_interfaces: []\n";
    } else {
      out << "required_state_interfaces:\n";
      for (auto item : msg.required_state_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_chainable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_chainable: ";
    rosidl_generator_traits::value_to_yaml(msg.is_chainable, out);
    out << "\n";
  }

  // member: is_chained
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_chained: ";
    rosidl_generator_traits::value_to_yaml(msg.is_chained, out);
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

  // member: chain_connections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chain_connections.size() == 0) {
      out << "chain_connections: []\n";
    } else {
      out << "chain_connections:\n";
      for (auto item : msg.chain_connections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerState & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::msg::ControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::msg::ControllerState & msg)
{
  return controller_manager_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::msg::ControllerState>()
{
  return "controller_manager_msgs::msg::ControllerState";
}

template<>
inline const char * name<controller_manager_msgs::msg::ControllerState>()
{
  return "controller_manager_msgs/msg/ControllerState";
}

template<>
struct has_fixed_size<controller_manager_msgs::msg::ControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::msg::ControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::msg::ControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__TRAITS_HPP_
