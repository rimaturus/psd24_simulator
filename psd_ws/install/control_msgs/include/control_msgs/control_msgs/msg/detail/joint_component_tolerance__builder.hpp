// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__BUILDER_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/msg/detail/joint_component_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace msg
{

namespace builder
{

class Init_JointComponentTolerance_acceleration
{
public:
  explicit Init_JointComponentTolerance_acceleration(::control_msgs::msg::JointComponentTolerance & msg)
  : msg_(msg)
  {}
  ::control_msgs::msg::JointComponentTolerance acceleration(::control_msgs::msg::JointComponentTolerance::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::msg::JointComponentTolerance msg_;
};

class Init_JointComponentTolerance_velocity
{
public:
  explicit Init_JointComponentTolerance_velocity(::control_msgs::msg::JointComponentTolerance & msg)
  : msg_(msg)
  {}
  Init_JointComponentTolerance_acceleration velocity(::control_msgs::msg::JointComponentTolerance::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointComponentTolerance_acceleration(msg_);
  }

private:
  ::control_msgs::msg::JointComponentTolerance msg_;
};

class Init_JointComponentTolerance_position
{
public:
  explicit Init_JointComponentTolerance_position(::control_msgs::msg::JointComponentTolerance & msg)
  : msg_(msg)
  {}
  Init_JointComponentTolerance_velocity position(::control_msgs::msg::JointComponentTolerance::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointComponentTolerance_velocity(msg_);
  }

private:
  ::control_msgs::msg::JointComponentTolerance msg_;
};

class Init_JointComponentTolerance_component
{
public:
  explicit Init_JointComponentTolerance_component(::control_msgs::msg::JointComponentTolerance & msg)
  : msg_(msg)
  {}
  Init_JointComponentTolerance_position component(::control_msgs::msg::JointComponentTolerance::_component_type arg)
  {
    msg_.component = std::move(arg);
    return Init_JointComponentTolerance_position(msg_);
  }

private:
  ::control_msgs::msg::JointComponentTolerance msg_;
};

class Init_JointComponentTolerance_joint_name
{
public:
  Init_JointComponentTolerance_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointComponentTolerance_component joint_name(::control_msgs::msg::JointComponentTolerance::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_JointComponentTolerance_component(msg_);
  }

private:
  ::control_msgs::msg::JointComponentTolerance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::msg::JointComponentTolerance>()
{
  return control_msgs::msg::builder::Init_JointComponentTolerance_joint_name();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__BUILDER_HPP_
