// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/msg/detail/chain_connection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_ChainConnection_reference_interfaces
{
public:
  explicit Init_ChainConnection_reference_interfaces(::controller_manager_msgs::msg::ChainConnection & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::msg::ChainConnection reference_interfaces(::controller_manager_msgs::msg::ChainConnection::_reference_interfaces_type arg)
  {
    msg_.reference_interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::msg::ChainConnection msg_;
};

class Init_ChainConnection_name
{
public:
  Init_ChainConnection_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChainConnection_reference_interfaces name(::controller_manager_msgs::msg::ChainConnection::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ChainConnection_reference_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::msg::ChainConnection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::msg::ChainConnection>()
{
  return controller_manager_msgs::msg::builder::Init_ChainConnection_name();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__BUILDER_HPP_
