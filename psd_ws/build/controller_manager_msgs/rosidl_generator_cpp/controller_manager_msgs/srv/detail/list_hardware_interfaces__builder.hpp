// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareInterfaces_Request>()
{
  return ::controller_manager_msgs::srv::ListHardwareInterfaces_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListHardwareInterfaces_Response_state_interfaces
{
public:
  explicit Init_ListHardwareInterfaces_Response_state_interfaces(::controller_manager_msgs::srv::ListHardwareInterfaces_Response & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Response state_interfaces(::controller_manager_msgs::srv::ListHardwareInterfaces_Response::_state_interfaces_type arg)
  {
    msg_.state_interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Response msg_;
};

class Init_ListHardwareInterfaces_Response_command_interfaces
{
public:
  Init_ListHardwareInterfaces_Response_command_interfaces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListHardwareInterfaces_Response_state_interfaces command_interfaces(::controller_manager_msgs::srv::ListHardwareInterfaces_Response::_command_interfaces_type arg)
  {
    msg_.command_interfaces = std::move(arg);
    return Init_ListHardwareInterfaces_Response_state_interfaces(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListHardwareInterfaces_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListHardwareInterfaces_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ListHardwareInterfaces_Response_command_interfaces();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__BUILDER_HPP_
