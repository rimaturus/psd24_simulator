// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/admittance_controller_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_AdmittanceControllerState_joint_state
{
public:
  explicit Init_AdmittanceControllerState_joint_state(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::AdmittanceControllerState joint_state(::control_msgs::msg::AdmittanceControllerState::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_wrench_base
{
public:
  explicit Init_AdmittanceControllerState_wrench_base(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_joint_state wrench_base(::control_msgs::msg::AdmittanceControllerState::_wrench_base_type arg)
  {
    msg_.wrench_base = std::move(arg);
    return Init_AdmittanceControllerState_joint_state(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_admittance_velocity
{
public:
  explicit Init_AdmittanceControllerState_admittance_velocity(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_wrench_base admittance_velocity(::control_msgs::msg::AdmittanceControllerState::_admittance_velocity_type arg)
  {
    msg_.admittance_velocity = std::move(arg);
    return Init_AdmittanceControllerState_wrench_base(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_admittance_acceleration
{
public:
  explicit Init_AdmittanceControllerState_admittance_acceleration(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_admittance_velocity admittance_acceleration(::control_msgs::msg::AdmittanceControllerState::_admittance_acceleration_type arg)
  {
    msg_.admittance_acceleration = std::move(arg);
    return Init_AdmittanceControllerState_admittance_velocity(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_admittance_position
{
public:
  explicit Init_AdmittanceControllerState_admittance_position(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_admittance_acceleration admittance_position(::control_msgs::msg::AdmittanceControllerState::_admittance_position_type arg)
  {
    msg_.admittance_position = std::move(arg);
    return Init_AdmittanceControllerState_admittance_acceleration(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_ft_sensor_frame
{
public:
  explicit Init_AdmittanceControllerState_ft_sensor_frame(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_admittance_position ft_sensor_frame(::control_msgs::msg::AdmittanceControllerState::_ft_sensor_frame_type arg)
  {
    msg_.ft_sensor_frame = std::move(arg);
    return Init_AdmittanceControllerState_admittance_position(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_selected_axes
{
public:
  explicit Init_AdmittanceControllerState_selected_axes(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_ft_sensor_frame selected_axes(::control_msgs::msg::AdmittanceControllerState::_selected_axes_type arg)
  {
    msg_.selected_axes = std::move(arg);
    return Init_AdmittanceControllerState_ft_sensor_frame(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_ref_trans_base_ft
{
public:
  explicit Init_AdmittanceControllerState_ref_trans_base_ft(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_selected_axes ref_trans_base_ft(::control_msgs::msg::AdmittanceControllerState::_ref_trans_base_ft_type arg)
  {
    msg_.ref_trans_base_ft = std::move(arg);
    return Init_AdmittanceControllerState_selected_axes(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_rot_base_control
{
public:
  explicit Init_AdmittanceControllerState_rot_base_control(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_ref_trans_base_ft rot_base_control(::control_msgs::msg::AdmittanceControllerState::_rot_base_control_type arg)
  {
    msg_.rot_base_control = std::move(arg);
    return Init_AdmittanceControllerState_ref_trans_base_ft(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_stiffness
{
public:
  explicit Init_AdmittanceControllerState_stiffness(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_rot_base_control stiffness(::control_msgs::msg::AdmittanceControllerState::_stiffness_type arg)
  {
    msg_.stiffness = std::move(arg);
    return Init_AdmittanceControllerState_rot_base_control(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_damping
{
public:
  explicit Init_AdmittanceControllerState_damping(::control_msgs::msg::AdmittanceControllerState & msg)
  : msg_(msg)
  {}
  Init_AdmittanceControllerState_stiffness damping(::control_msgs::msg::AdmittanceControllerState::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return Init_AdmittanceControllerState_stiffness(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

class Init_AdmittanceControllerState_mass
{
public:
  Init_AdmittanceControllerState_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdmittanceControllerState_damping mass(::control_msgs::msg::AdmittanceControllerState::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_AdmittanceControllerState_damping(msg_);
  }

private:
  ::control_msgs::msg::AdmittanceControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::AdmittanceControllerState>()
{
  return control_msgs::msg::builder::Init_AdmittanceControllerState_mass();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__BUILDER_HPP_
