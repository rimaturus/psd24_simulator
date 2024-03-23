// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__BUILDER_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/srv/detail/query_calibration_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::srv::QueryCalibrationState_Request>()
{
  return ::control_msgs::srv::QueryCalibrationState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace control_msgs


namespace control_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryCalibrationState_Response_is_calibrated
{
public:
  Init_QueryCalibrationState_Response_is_calibrated()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::srv::QueryCalibrationState_Response is_calibrated(::control_msgs::srv::QueryCalibrationState_Response::_is_calibrated_type arg)
  {
    msg_.is_calibrated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::srv::QueryCalibrationState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::srv::QueryCalibrationState_Response>()
{
  return control_msgs::srv::builder::Init_QueryCalibrationState_Response_is_calibrated();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__BUILDER_HPP_
