// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from controller_manager_msgs:srv/ListControllers.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__BUILDER_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "controller_manager_msgs/srv/detail/list_controllers__struct.hpp"
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
auto build<::controller_manager_msgs::srv::ListControllers_Request>()
{
  return ::controller_manager_msgs::srv::ListControllers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace controller_manager_msgs


namespace controller_manager_msgs
{

namespace srv
{

namespace builder
{

class Init_ListControllers_Response_controller
{
public:
  Init_ListControllers_Response_controller()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::controller_manager_msgs::srv::ListControllers_Response controller(::controller_manager_msgs::srv::ListControllers_Response::_controller_type arg)
  {
    msg_.controller = std::move(arg);
    return std::move(msg_);
  }

private:
  ::controller_manager_msgs::srv::ListControllers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::controller_manager_msgs::srv::ListControllers_Response>()
{
  return controller_manager_msgs::srv::builder::Init_ListControllers_Response_controller();
}

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__BUILDER_HPP_
