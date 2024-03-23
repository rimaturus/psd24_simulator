// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/switch_controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchController_Request_timeout
{
public:
  explicit Init_SwitchController_Request_timeout(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  ::controller_manager_msgs::srv::SwitchController_Request timeout(::controller_manager_msgs::srv::SwitchController_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_activate_asap
{
public:
  explicit Init_SwitchController_Request_activate_asap(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchController_Request_timeout activate_asap(::controller_manager_msgs::srv::SwitchController_Request::_activate_asap_type arg)
  {
    msg_.activate_asap = std::move(arg);
    return Init_SwitchController_Request_timeout(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_start_asap
{
public:
  explicit Init_SwitchController_Request_start_asap(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchController_Request_activate_asap start_asap(::controller_manager_msgs::srv::SwitchController_Request::_start_asap_type arg)
  {
    msg_.start_asap = std::move(arg);
    return Init_SwitchController_Request_activate_asap(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_strictness
{
public:
  explicit Init_SwitchController_Request_strictness(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchController_Request_start_asap strictness(::controller_manager_msgs::srv::SwitchController_Request::_strictness_type arg)
  {
    msg_.strictness = std::move(arg);
    return Init_SwitchController_Request_start_asap(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_stop_controllers
{
public:
  explicit Init_SwitchController_Request_stop_controllers(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchController_Request_strictness stop_controllers(::controller_manager_msgs::srv::SwitchController_Request::_stop_controllers_type arg)
  {
    msg_.stop_controllers = std::move(arg);
    return Init_SwitchController_Request_strictness(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_start_controllers
{
public:
  explicit Init_SwitchController_Request_start_controllers(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchController_Request_stop_controllers start_controllers(::controller_manager_msgs::srv::SwitchController_Request::_start_controllers_type arg)
  {
    msg_.start_controllers = std::move(arg);
    return Init_SwitchController_Request_stop_controllers(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_deactivate_controllers
{
public:
  explicit Init_SwitchController_Request_deactivate_controllers(::controller_manager_msgs::srv::SwitchController_Request & msg)
  : msg_(msg)
  {}
  Init_SwitchController_Request_start_controllers deactivate_controllers(::controller_manager_msgs::srv::SwitchController_Request::_deactivate_controllers_type arg)
  {
    msg_.deactivate_controllers = std::move(arg);
    return Init_SwitchController_Request_start_controllers(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

class Init_SwitchController_Request_activate_controllers
{
public:
  Init_SwitchController_Request_activate_controllers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwitchController_Request_deactivate_controllers activate_controllers(::controller_manager_msgs::srv::SwitchController_Request::_activate_controllers_type arg)
  {
    msg_.activate_controllers = std::move(arg);
    return Init_SwitchController_Request_deactivate_controllers(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::SwitchController_Request>()
{
  return controller_manager_msgs::srv::builder::Init_SwitchController_Request_activate_controllers();
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_SwitchController_Response_ok
{
public:
  Init_SwitchController_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::SwitchController_Response ok(::controller_manager_msgs::srv::SwitchController_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::SwitchController_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::SwitchController_Response>()
{
  return controller_manager_msgs::srv::builder::Init_SwitchController_Response_ok();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__BUILDER_HPP_
