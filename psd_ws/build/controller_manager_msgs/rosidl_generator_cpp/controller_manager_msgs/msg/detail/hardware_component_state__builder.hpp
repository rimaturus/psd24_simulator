// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareComponentState_state_interfaces
{
public:
  explicit Init_HardwareComponentState_state_interfaces(::controller_manager_msgs::msg::HardwareComponentState & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::msg::HardwareComponentState state_interfaces(::controller_manager_msgs::msg::HardwareComponentState::_state_interfaces_type arg)
  {
    msg_.state_interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareComponentState msg_;
};

class Init_HardwareComponentState_command_interfaces
{
public:
  explicit Init_HardwareComponentState_command_interfaces(::controller_manager_msgs::msg::HardwareComponentState & msg)
  : msg_(msg)
  {}
  Init_HardwareComponentState_state_interfaces command_interfaces(::controller_manager_msgs::msg::HardwareComponentState::_command_interfaces_type arg)
  {
    msg_.command_interfaces = std::move(arg);
    return Init_HardwareComponentState_state_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareComponentState msg_;
};

class Init_HardwareComponentState_state
{
public:
  explicit Init_HardwareComponentState_state(::controller_manager_msgs::msg::HardwareComponentState & msg)
  : msg_(msg)
  {}
  Init_HardwareComponentState_command_interfaces state(::controller_manager_msgs::msg::HardwareComponentState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_HardwareComponentState_command_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareComponentState msg_;
};

class Init_HardwareComponentState_class_type
{
public:
  explicit Init_HardwareComponentState_class_type(::controller_manager_msgs::msg::HardwareComponentState & msg)
  : msg_(msg)
  {}
  Init_HardwareComponentState_state class_type(::controller_manager_msgs::msg::HardwareComponentState::_class_type_type arg)
  {
    msg_.class_type = std::move(arg);
    return Init_HardwareComponentState_state(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareComponentState msg_;
};

class Init_HardwareComponentState_type
{
public:
  explicit Init_HardwareComponentState_type(::controller_manager_msgs::msg::HardwareComponentState & msg)
  : msg_(msg)
  {}
  Init_HardwareComponentState_class_type type(::controller_manager_msgs::msg::HardwareComponentState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_HardwareComponentState_class_type(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareComponentState msg_;
};

class Init_HardwareComponentState_name
{
public:
  Init_HardwareComponentState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareComponentState_type name(::controller_manager_msgs::msg::HardwareComponentState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HardwareComponentState_type(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareComponentState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::msg::HardwareComponentState>()
{
  return controller_manager_msgs::msg::builder::Init_HardwareComponentState_name();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__BUILDER_HPP_
