// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "controller_manager_msgs/srv/detail/switch_controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchController_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: activate_controllers
  {
    if (msg.activate_controllers.size() == 0) {
      out << "activate_controllers: []";
    } else {
      out << "activate_controllers: [";
      size_t pending_items = msg.activate_controllers.size();
      for (auto item : msg.activate_controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deactivate_controllers
  {
    if (msg.deactivate_controllers.size() == 0) {
      out << "deactivate_controllers: []";
    } else {
      out << "deactivate_controllers: [";
      size_t pending_items = msg.deactivate_controllers.size();
      for (auto item : msg.deactivate_controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_controllers
  {
    if (msg.start_controllers.size() == 0) {
      out << "start_controllers: []";
    } else {
      out << "start_controllers: [";
      size_t pending_items = msg.start_controllers.size();
      for (auto item : msg.start_controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_controllers
  {
    if (msg.stop_controllers.size() == 0) {
      out << "stop_controllers: []";
    } else {
      out << "stop_controllers: [";
      size_t pending_items = msg.stop_controllers.size();
      for (auto item : msg.stop_controllers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: strictness
  {
    out << "strictness: ";
    rosidl_generator_traits::value_to_yaml(msg.strictness, out);
    out << ", ";
  }

  // member: start_asap
  {
    out << "start_asap: ";
    rosidl_generator_traits::value_to_yaml(msg.start_asap, out);
    out << ", ";
  }

  // member: activate_asap
  {
    out << "activate_asap: ";
    rosidl_generator_traits::value_to_yaml(msg.activate_asap, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    to_flow_style_yaml(msg.timeout, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwitchController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: activate_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.activate_controllers.size() == 0) {
      out << "activate_controllers: []\n";
    } else {
      out << "activate_controllers:\n";
      for (auto item : msg.activate_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deactivate_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deactivate_controllers.size() == 0) {
      out << "deactivate_controllers: []\n";
    } else {
      out << "deactivate_controllers:\n";
      for (auto item : msg.deactivate_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_controllers.size() == 0) {
      out << "start_controllers: []\n";
    } else {
      out << "start_controllers:\n";
      for (auto item : msg.start_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stop_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_controllers.size() == 0) {
      out << "stop_controllers: []\n";
    } else {
      out << "stop_controllers:\n";
      for (auto item : msg.stop_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: strictness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strictness: ";
    rosidl_generator_traits::value_to_yaml(msg.strictness, out);
    out << "\n";
  }

  // member: start_asap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_asap: ";
    rosidl_generator_traits::value_to_yaml(msg.start_asap, out);
    out << "\n";
  }

  // member: activate_asap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activate_asap: ";
    rosidl_generator_traits::value_to_yaml(msg.activate_asap, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout:\n";
    to_block_style_yaml(msg.timeout, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwitchController_Request & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::SwitchController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::SwitchController_Request & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::SwitchController_Request>()
{
  return "controller_manager_msgs::srv::SwitchController_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::SwitchController_Request>()
{
  return "controller_manager_msgs/srv/SwitchController_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SwitchController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SwitchController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::SwitchController_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace controller_manager_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SwitchController_Response & msg,
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
  const SwitchController_Response & msg,
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

inline std::string to_yaml(const SwitchController_Response & msg, bool use_flow_style = false)
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
  const controller_manager_msgs::srv::SwitchController_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  controller_manager_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use controller_manager_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const controller_manager_msgs::srv::SwitchController_Response & msg)
{
  return controller_manager_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<controller_manager_msgs::srv::SwitchController_Response>()
{
  return "controller_manager_msgs::srv::SwitchController_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::SwitchController_Response>()
{
  return "controller_manager_msgs/srv/SwitchController_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SwitchController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SwitchController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::SwitchController_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::SwitchController>()
{
  return "controller_manager_msgs::srv::SwitchController";
}

template<>
inline const char * name<controller_manager_msgs::srv::SwitchController>()
{
  return "controller_manager_msgs/srv/SwitchController";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SwitchController>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::SwitchController_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::SwitchController_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SwitchController>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::SwitchController_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::SwitchController_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::SwitchController>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::SwitchController_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::SwitchController_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__TRAITS_HPP_
