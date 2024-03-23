// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHardwareComponentState_Request_target_state
{
public:
  explicit Init_SetHardwareComponentState_Request_target_state(::controller_manager_msgs::srv::SetHardwareComponentState_Request & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::SetHardwareComponentState_Request target_state(::controller_manager_msgs::srv::SetHardwareComponentState_Request::_target_state_type arg)
  {
    msg_.target_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::SetHardwareComponentState_Request msg_;
};

class Init_SetHardwareComponentState_Request_name
{
public:
  Init_SetHardwareComponentState_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHardwareComponentState_Request_target_state name(::controller_manager_msgs::srv::SetHardwareComponentState_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SetHardwareComponentState_Request_target_state(msg_);
  }

private:
  ::controller_manager_msgs::srv::SetHardwareComponentState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::SetHardwareComponentState_Request>()
{
  return controller_manager_msgs::srv::builder::Init_SetHardwareComponentState_Request_name();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_SetHardwareComponentState_Response_state
{
public:
  explicit Init_SetHardwareComponentState_Response_state(::controller_manager_msgs::srv::SetHardwareComponentState_Response & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::SetHardwareComponentState_Response state(::controller_manager_msgs::srv::SetHardwareComponentState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::SetHardwareComponentState_Response msg_;
};

class Init_SetHardwareComponentState_Response_ok
{
public:
  Init_SetHardwareComponentState_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetHardwareComponentState_Response_state ok(::controller_manager_msgs::srv::SetHardwareComponentState_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_SetHardwareComponentState_Response_state(msg_);
  }

private:
  ::controller_manager_msgs::srv::SetHardwareComponentState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::SetHardwareComponentState_Response>()
{
  return controller_manager_msgs::srv::builder::Init_SetHardwareComponentState_Response_ok();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SET_HARDWARE_COMPONENT_STATE__BUILDER_HPP_
