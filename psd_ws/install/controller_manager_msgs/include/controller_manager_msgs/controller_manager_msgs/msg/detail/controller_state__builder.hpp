// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/msg/detail/controller_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerState_chain_connections
{
public:
  explicit Init_ControllerState_chain_connections(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::msg::ControllerState chain_connections(::controller_manager_msgs::msg::ControllerState::_chain_connections_type arg)
  {
    msg_.chain_connections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_reference_interfaces
{
public:
  explicit Init_ControllerState_reference_interfaces(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_chain_connections reference_interfaces(::controller_manager_msgs::msg::ControllerState::_reference_interfaces_type arg)
  {
    msg_.reference_interfaces = std::move(arg);
    return Init_ControllerState_chain_connections(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_is_chained
{
public:
  explicit Init_ControllerState_is_chained(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_reference_interfaces is_chained(::controller_manager_msgs::msg::ControllerState::_is_chained_type arg)
  {
    msg_.is_chained = std::move(arg);
    return Init_ControllerState_reference_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_is_chainable
{
public:
  explicit Init_ControllerState_is_chainable(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_is_chained is_chainable(::controller_manager_msgs::msg::ControllerState::_is_chainable_type arg)
  {
    msg_.is_chainable = std::move(arg);
    return Init_ControllerState_is_chained(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_required_state_interfaces
{
public:
  explicit Init_ControllerState_required_state_interfaces(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_is_chainable required_state_interfaces(::controller_manager_msgs::msg::ControllerState::_required_state_interfaces_type arg)
  {
    msg_.required_state_interfaces = std::move(arg);
    return Init_ControllerState_is_chainable(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_required_command_interfaces
{
public:
  explicit Init_ControllerState_required_command_interfaces(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_required_state_interfaces required_command_interfaces(::controller_manager_msgs::msg::ControllerState::_required_command_interfaces_type arg)
  {
    msg_.required_command_interfaces = std::move(arg);
    return Init_ControllerState_required_state_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_claimed_interfaces
{
public:
  explicit Init_ControllerState_claimed_interfaces(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_required_command_interfaces claimed_interfaces(::controller_manager_msgs::msg::ControllerState::_claimed_interfaces_type arg)
  {
    msg_.claimed_interfaces = std::move(arg);
    return Init_ControllerState_required_command_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_type
{
public:
  explicit Init_ControllerState_type(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_claimed_interfaces type(::controller_manager_msgs::msg::ControllerState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ControllerState_claimed_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_state
{
public:
  explicit Init_ControllerState_state(::controller_manager_msgs::msg::ControllerState & msg)
  : msg_(msg)
  {}
  Init_ControllerState_type state(::controller_manager_msgs::msg::ControllerState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ControllerState_type(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

class Init_ControllerState_name
{
public:
  Init_ControllerState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerState_state name(::controller_manager_msgs::msg::ControllerState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ControllerState_state(msg_);
  }

private:
  ::controller_manager_msgs::msg::ControllerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::msg::ControllerState>()
{
  return controller_manager_msgs::msg::builder::Init_ControllerState_name();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__BUILDER_HPP_
