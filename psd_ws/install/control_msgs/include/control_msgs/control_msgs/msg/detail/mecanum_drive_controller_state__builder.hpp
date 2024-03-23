// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/mecanum_drive_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_MecanumDriveControllerState_reference_velocity
{
public:
  explicit Init_MecanumDriveControllerState_reference_velocity(::control_msgs::msg::MecanumDriveControllerState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::MecanumDriveControllerState reference_velocity(::control_msgs::msg::MecanumDriveControllerState::_reference_velocity_type arg)
  {
    msg_.reference_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::MecanumDriveControllerState msg_;
};

class Init_MecanumDriveControllerState_front_right_wheel_velocity
{
public:
  explicit Init_MecanumDriveControllerState_front_right_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState & msg)
  : msg_(msg)
  {}
  Init_MecanumDriveControllerState_reference_velocity front_right_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState::_front_right_wheel_velocity_type arg)
  {
    msg_.front_right_wheel_velocity = std::move(arg);
    return Init_MecanumDriveControllerState_reference_velocity(msg_);
  }

private:
  ::control_msgs::msg::MecanumDriveControllerState msg_;
};

class Init_MecanumDriveControllerState_back_right_wheel_velocity
{
public:
  explicit Init_MecanumDriveControllerState_back_right_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState & msg)
  : msg_(msg)
  {}
  Init_MecanumDriveControllerState_front_right_wheel_velocity back_right_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState::_back_right_wheel_velocity_type arg)
  {
    msg_.back_right_wheel_velocity = std::move(arg);
    return Init_MecanumDriveControllerState_front_right_wheel_velocity(msg_);
  }

private:
  ::control_msgs::msg::MecanumDriveControllerState msg_;
};

class Init_MecanumDriveControllerState_back_left_wheel_velocity
{
public:
  explicit Init_MecanumDriveControllerState_back_left_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState & msg)
  : msg_(msg)
  {}
  Init_MecanumDriveControllerState_back_right_wheel_velocity back_left_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState::_back_left_wheel_velocity_type arg)
  {
    msg_.back_left_wheel_velocity = std::move(arg);
    return Init_MecanumDriveControllerState_back_right_wheel_velocity(msg_);
  }

private:
  ::control_msgs::msg::MecanumDriveControllerState msg_;
};

class Init_MecanumDriveControllerState_front_left_wheel_velocity
{
public:
  explicit Init_MecanumDriveControllerState_front_left_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState & msg)
  : msg_(msg)
  {}
  Init_MecanumDriveControllerState_back_left_wheel_velocity front_left_wheel_velocity(::control_msgs::msg::MecanumDriveControllerState::_front_left_wheel_velocity_type arg)
  {
    msg_.front_left_wheel_velocity = std::move(arg);
    return Init_MecanumDriveControllerState_back_left_wheel_velocity(msg_);
  }

private:
  ::control_msgs::msg::MecanumDriveControllerState msg_;
};

class Init_MecanumDriveControllerState_header
{
public:
  Init_MecanumDriveControllerState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MecanumDriveControllerState_front_left_wheel_velocity header(::control_msgs::msg::MecanumDriveControllerState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MecanumDriveControllerState_front_left_wheel_velocity(msg_);
  }

private:
  ::control_msgs::msg::MecanumDriveControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::MecanumDriveControllerState>()
{
  return control_msgs::msg::builder::Init_MecanumDriveControllerState_header();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__BUILDER_HPP_
