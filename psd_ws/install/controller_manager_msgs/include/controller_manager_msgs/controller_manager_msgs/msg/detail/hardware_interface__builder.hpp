// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/msg/detail/hardware_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareInterface_is_claimed
{
public:
  explicit Init_HardwareInterface_is_claimed(::controller_manager_msgs::msg::HardwareInterface & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::msg::HardwareInterface is_claimed(::controller_manager_msgs::msg::HardwareInterface::_is_claimed_type arg)
  {
    msg_.is_claimed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareInterface msg_;
};

class Init_HardwareInterface_is_available
{
public:
  explicit Init_HardwareInterface_is_available(::controller_manager_msgs::msg::HardwareInterface & msg)
  : msg_(msg)
  {}
  Init_HardwareInterface_is_claimed is_available(::controller_manager_msgs::msg::HardwareInterface::_is_available_type arg)
  {
    msg_.is_available = std::move(arg);
    return Init_HardwareInterface_is_claimed(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareInterface msg_;
};

class Init_HardwareInterface_name
{
public:
  Init_HardwareInterface_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareInterface_is_available name(::controller_manager_msgs::msg::HardwareInterface::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HardwareInterface_is_available(msg_);
  }

private:
  ::controller_manager_msgs::msg::HardwareInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::msg::HardwareInterface>()
{
  return controller_manager_msgs::msg::builder::Init_HardwareInterface_name();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__BUILDER_HPP_
