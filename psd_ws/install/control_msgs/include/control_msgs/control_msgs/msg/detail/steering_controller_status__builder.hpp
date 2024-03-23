// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/steering_controller_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringControllerStatus_steering_angle_command
{
public:
  explicit Init_SteeringControllerStatus_steering_angle_command(::control_msgs::msg::SteeringControllerStatus & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::SteeringControllerStatus steering_angle_command(::control_msgs::msg::SteeringControllerStatus::_steering_angle_command_type arg)
  {
    msg_.steering_angle_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerStatus msg_;
};

class Init_SteeringControllerStatus_linear_velocity_command
{
public:
  explicit Init_SteeringControllerStatus_linear_velocity_command(::control_msgs::msg::SteeringControllerStatus & msg)
  : msg_(msg)
  {}
  Init_SteeringControllerStatus_steering_angle_command linear_velocity_command(::control_msgs::msg::SteeringControllerStatus::_linear_velocity_command_type arg)
  {
    msg_.linear_velocity_command = std::move(arg);
    return Init_SteeringControllerStatus_steering_angle_command(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerStatus msg_;
};

class Init_SteeringControllerStatus_steer_positions
{
public:
  explicit Init_SteeringControllerStatus_steer_positions(::control_msgs::msg::SteeringControllerStatus & msg)
  : msg_(msg)
  {}
  Init_SteeringControllerStatus_linear_velocity_command steer_positions(::control_msgs::msg::SteeringControllerStatus::_steer_positions_type arg)
  {
    msg_.steer_positions = std::move(arg);
    return Init_SteeringControllerStatus_linear_velocity_command(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerStatus msg_;
};

class Init_SteeringControllerStatus_traction_wheels_velocity
{
public:
  explicit Init_SteeringControllerStatus_traction_wheels_velocity(::control_msgs::msg::SteeringControllerStatus & msg)
  : msg_(msg)
  {}
  Init_SteeringControllerStatus_steer_positions traction_wheels_velocity(::control_msgs::msg::SteeringControllerStatus::_traction_wheels_velocity_type arg)
  {
    msg_.traction_wheels_velocity = std::move(arg);
    return Init_SteeringControllerStatus_steer_positions(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerStatus msg_;
};

class Init_SteeringControllerStatus_traction_wheels_position
{
public:
  explicit Init_SteeringControllerStatus_traction_wheels_position(::control_msgs::msg::SteeringControllerStatus & msg)
  : msg_(msg)
  {}
  Init_SteeringControllerStatus_traction_wheels_velocity traction_wheels_position(::control_msgs::msg::SteeringControllerStatus::_traction_wheels_position_type arg)
  {
    msg_.traction_wheels_position = std::move(arg);
    return Init_SteeringControllerStatus_traction_wheels_velocity(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerStatus msg_;
};

class Init_SteeringControllerStatus_header
{
public:
  Init_SteeringControllerStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringControllerStatus_traction_wheels_position header(::control_msgs::msg::SteeringControllerStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringControllerStatus_traction_wheels_position(msg_);
  }

private:
  ::control_msgs::msg::SteeringControllerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::SteeringControllerStatus>()
{
  return control_msgs::msg::builder::Init_SteeringControllerStatus_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__BUILDER_HPP_
