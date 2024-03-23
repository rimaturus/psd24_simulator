// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__TRAITS_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/srv/detail/query_calibration_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryCalibrationState_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QueryCalibrationState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryCalibrationState_Request & msg, bool use_flow_style = false)
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
  const control_msgs::srv::QueryCalibrationState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::srv::QueryCalibrationState_Request & msg)
{
  return control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::srv::QueryCalibrationState_Request>()
{
  return "control_msgs::srv::QueryCalibrationState_Request";
}

template<>
inline const char * name<control_msgs::srv::QueryCalibrationState_Request>()
{
  return "control_msgs/srv/QueryCalibrationState_Request";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryCalibrationState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryCalibrationState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::srv::QueryCalibrationState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const QueryCalibrationState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_calibrated
  {
    out << "is_calibrated: ";
    rosidl_generator_traits::value_to_yaml(msg.is_calibrated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QueryCalibrationState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_calibrated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_calibrated: ";
    rosidl_generator_traits::value_to_yaml(msg.is_calibrated, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QueryCalibrationState_Response & msg, bool use_flow_style = false)
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
  const control_msgs::srv::QueryCalibrationState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::srv::QueryCalibrationState_Response & msg)
{
  return control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::srv::QueryCalibrationState_Response>()
{
  return "control_msgs::srv::QueryCalibrationState_Response";
}

template<>
inline const char * name<control_msgs::srv::QueryCalibrationState_Response>()
{
  return "control_msgs/srv/QueryCalibrationState_Response";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryCalibrationState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryCalibrationState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::srv::QueryCalibrationState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::srv::QueryCalibrationState>()
{
  return "control_msgs::srv::QueryCalibrationState";
}

template<>
inline const char * name<control_msgs::srv::QueryCalibrationState>()
{
  return "control_msgs/srv/QueryCalibrationState";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryCalibrationState>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::srv::QueryCalibrationState_Request>::value &&
    has_fixed_size<control_msgs::srv::QueryCalibrationState_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::srv::QueryCalibrationState>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::srv::QueryCalibrationState_Request>::value &&
    has_bounded_size<control_msgs::srv::QueryCalibrationState_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::srv::QueryCalibrationState>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::srv::QueryCalibrationState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::srv::QueryCalibrationState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__TRAITS_HPP_
