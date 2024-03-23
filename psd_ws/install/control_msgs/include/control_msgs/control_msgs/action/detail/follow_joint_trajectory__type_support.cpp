// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_Goal(_init);
}

void FollowJointTrajectory_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_Goal *>(message_memory);
  typed_message->~FollowJointTrajectory_Goal();
}

size_t size_function__FollowJointTrajectory_Goal__path_tolerance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowJointTrajectory_Goal__path_tolerance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowJointTrajectory_Goal__path_tolerance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowJointTrajectory_Goal__path_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::JointTolerance *>(
    get_const_function__FollowJointTrajectory_Goal__path_tolerance(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::JointTolerance *>(untyped_value);
  value = item;
}

void assign_function__FollowJointTrajectory_Goal__path_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::JointTolerance *>(
    get_function__FollowJointTrajectory_Goal__path_tolerance(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::JointTolerance *>(untyped_value);
  item = value;
}

void resize_function__FollowJointTrajectory_Goal__path_tolerance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FollowJointTrajectory_Goal__component_path_tolerance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowJointTrajectory_Goal__component_path_tolerance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowJointTrajectory_Goal__component_path_tolerance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowJointTrajectory_Goal__component_path_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::JointComponentTolerance *>(
    get_const_function__FollowJointTrajectory_Goal__component_path_tolerance(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::JointComponentTolerance *>(untyped_value);
  value = item;
}

void assign_function__FollowJointTrajectory_Goal__component_path_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::JointComponentTolerance *>(
    get_function__FollowJointTrajectory_Goal__component_path_tolerance(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::JointComponentTolerance *>(untyped_value);
  item = value;
}

void resize_function__FollowJointTrajectory_Goal__component_path_tolerance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FollowJointTrajectory_Goal__goal_tolerance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowJointTrajectory_Goal__goal_tolerance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowJointTrajectory_Goal__goal_tolerance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowJointTrajectory_Goal__goal_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::JointTolerance *>(
    get_const_function__FollowJointTrajectory_Goal__goal_tolerance(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::JointTolerance *>(untyped_value);
  value = item;
}

void assign_function__FollowJointTrajectory_Goal__goal_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::JointTolerance *>(
    get_function__FollowJointTrajectory_Goal__goal_tolerance(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::JointTolerance *>(untyped_value);
  item = value;
}

void resize_function__FollowJointTrajectory_Goal__goal_tolerance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::JointTolerance> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FollowJointTrajectory_Goal__component_goal_tolerance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowJointTrajectory_Goal__component_goal_tolerance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowJointTrajectory_Goal__component_goal_tolerance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const control_msgs::msg::JointComponentTolerance *>(
    get_const_function__FollowJointTrajectory_Goal__component_goal_tolerance(untyped_member, index));
  auto & value = *reinterpret_cast<control_msgs::msg::JointComponentTolerance *>(untyped_value);
  value = item;
}

void assign_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<control_msgs::msg::JointComponentTolerance *>(
    get_function__FollowJointTrajectory_Goal__component_goal_tolerance(untyped_member, index));
  const auto & value = *reinterpret_cast<const control_msgs::msg::JointComponentTolerance *>(untyped_value);
  item = value;
}

void resize_function__FollowJointTrajectory_Goal__component_goal_tolerance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<control_msgs::msg::JointComponentTolerance> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_Goal_message_member_array[7] = {
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "multi_dof_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, multi_dof_trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::JointTolerance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, path_tolerance),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowJointTrajectory_Goal__path_tolerance,  // size() function pointer
    get_const_function__FollowJointTrajectory_Goal__path_tolerance,  // get_const(index) function pointer
    get_function__FollowJointTrajectory_Goal__path_tolerance,  // get(index) function pointer
    fetch_function__FollowJointTrajectory_Goal__path_tolerance,  // fetch(index, &value) function pointer
    assign_function__FollowJointTrajectory_Goal__path_tolerance,  // assign(index, value) function pointer
    resize_function__FollowJointTrajectory_Goal__path_tolerance  // resize(index) function pointer
  },
  {
    "component_path_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::JointComponentTolerance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, component_path_tolerance),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowJointTrajectory_Goal__component_path_tolerance,  // size() function pointer
    get_const_function__FollowJointTrajectory_Goal__component_path_tolerance,  // get_const(index) function pointer
    get_function__FollowJointTrajectory_Goal__component_path_tolerance,  // get(index) function pointer
    fetch_function__FollowJointTrajectory_Goal__component_path_tolerance,  // fetch(index, &value) function pointer
    assign_function__FollowJointTrajectory_Goal__component_path_tolerance,  // assign(index, value) function pointer
    resize_function__FollowJointTrajectory_Goal__component_path_tolerance  // resize(index) function pointer
  },
  {
    "goal_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::JointTolerance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, goal_tolerance),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowJointTrajectory_Goal__goal_tolerance,  // size() function pointer
    get_const_function__FollowJointTrajectory_Goal__goal_tolerance,  // get_const(index) function pointer
    get_function__FollowJointTrajectory_Goal__goal_tolerance,  // get(index) function pointer
    fetch_function__FollowJointTrajectory_Goal__goal_tolerance,  // fetch(index, &value) function pointer
    assign_function__FollowJointTrajectory_Goal__goal_tolerance,  // assign(index, value) function pointer
    resize_function__FollowJointTrajectory_Goal__goal_tolerance  // resize(index) function pointer
  },
  {
    "component_goal_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::msg::JointComponentTolerance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, component_goal_tolerance),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // size() function pointer
    get_const_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // get_const(index) function pointer
    get_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // get(index) function pointer
    fetch_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // fetch(index, &value) function pointer
    assign_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // assign(index, value) function pointer
    resize_function__FollowJointTrajectory_Goal__component_goal_tolerance  // resize(index) function pointer
  },
  {
    "goal_time_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Goal, goal_time_tolerance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_Goal_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_Goal",  // message name
  7,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_Goal),
  FollowJointTrajectory_Goal_message_member_array,  // message members
  FollowJointTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_Goal>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_Goal)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_Result(_init);
}

void FollowJointTrajectory_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_Result *>(message_memory);
  typed_message->~FollowJointTrajectory_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_Result_message_member_array[2] = {
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Result, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_string",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Result, error_string),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_Result_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_Result",  // message name
  2,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_Result),
  FollowJointTrajectory_Result_message_member_array,  // message members
  FollowJointTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_Result>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_Result)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_Feedback(_init);
}

void FollowJointTrajectory_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_Feedback *>(message_memory);
  typed_message->~FollowJointTrajectory_Feedback();
}

size_t size_function__FollowJointTrajectory_Feedback__joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowJointTrajectory_Feedback__joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowJointTrajectory_Feedback__joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowJointTrajectory_Feedback__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FollowJointTrajectory_Feedback__joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FollowJointTrajectory_Feedback__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FollowJointTrajectory_Feedback__joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FollowJointTrajectory_Feedback__joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_Feedback_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowJointTrajectory_Feedback__joint_names,  // size() function pointer
    get_const_function__FollowJointTrajectory_Feedback__joint_names,  // get_const(index) function pointer
    get_function__FollowJointTrajectory_Feedback__joint_names,  // get(index) function pointer
    fetch_function__FollowJointTrajectory_Feedback__joint_names,  // fetch(index, &value) function pointer
    assign_function__FollowJointTrajectory_Feedback__joint_names,  // assign(index, value) function pointer
    resize_function__FollowJointTrajectory_Feedback__joint_names  // resize(index) function pointer
  },
  {
    "desired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, desired),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "actual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, actual),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "multi_dof_joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, multi_dof_joint_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // size() function pointer
    get_const_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // get_const(index) function pointer
    get_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // get(index) function pointer
    fetch_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // fetch(index, &value) function pointer
    assign_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // assign(index, value) function pointer
    resize_function__FollowJointTrajectory_Feedback__multi_dof_joint_names  // resize(index) function pointer
  },
  {
    "multi_dof_desired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, multi_dof_desired),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "multi_dof_actual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, multi_dof_actual),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "multi_dof_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_Feedback, multi_dof_error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_Feedback_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_Feedback",  // message name
  9,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_Feedback),
  FollowJointTrajectory_Feedback_message_member_array,  // message members
  FollowJointTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_Feedback>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_Feedback)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_SendGoal_Request(_init);
}

void FollowJointTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_SendGoal_Request *>(message_memory);
  typed_message->~FollowJointTrajectory_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_SendGoal_Request_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_SendGoal_Request),
  FollowJointTrajectory_SendGoal_Request_message_member_array,  // message members
  FollowJointTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_SendGoal_Request>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_SendGoal_Request)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_SendGoal_Response(_init);
}

void FollowJointTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_SendGoal_Response *>(message_memory);
  typed_message->~FollowJointTrajectory_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_SendGoal_Response_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_SendGoal_Response),
  FollowJointTrajectory_SendGoal_Response_message_member_array,  // message members
  FollowJointTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_SendGoal_Response>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_SendGoal_Response)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FollowJointTrajectory_SendGoal_service_members = {
  "control_msgs::action",  // service namespace
  "FollowJointTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<control_msgs::action::FollowJointTrajectory_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FollowJointTrajectory_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<control_msgs::action::FollowJointTrajectory_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::control_msgs::action::FollowJointTrajectory_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::control_msgs::action::FollowJointTrajectory_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<control_msgs::action::FollowJointTrajectory_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_GetResult_Request(_init);
}

void FollowJointTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_GetResult_Request *>(message_memory);
  typed_message->~FollowJointTrajectory_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_GetResult_Request_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_GetResult_Request),
  FollowJointTrajectory_GetResult_Request_message_member_array,  // message members
  FollowJointTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_GetResult_Request>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_GetResult_Request)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_GetResult_Response(_init);
}

void FollowJointTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_GetResult_Response *>(message_memory);
  typed_message->~FollowJointTrajectory_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_GetResult_Response_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_GetResult_Response),
  FollowJointTrajectory_GetResult_Response_message_member_array,  // message members
  FollowJointTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_GetResult_Response>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_GetResult_Response)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FollowJointTrajectory_GetResult_service_members = {
  "control_msgs::action",  // service namespace
  "FollowJointTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<control_msgs::action::FollowJointTrajectory_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FollowJointTrajectory_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<control_msgs::action::FollowJointTrajectory_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::control_msgs::action::FollowJointTrajectory_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::control_msgs::action::FollowJointTrajectory_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<control_msgs::action::FollowJointTrajectory_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FollowJointTrajectory_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::action::FollowJointTrajectory_FeedbackMessage(_init);
}

void FollowJointTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::action::FollowJointTrajectory_FeedbackMessage *>(message_memory);
  typed_message->~FollowJointTrajectory_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FollowJointTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::action::FollowJointTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FollowJointTrajectory_FeedbackMessage_message_members = {
  "control_msgs::action",  // message namespace
  "FollowJointTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(control_msgs::action::FollowJointTrajectory_FeedbackMessage),
  FollowJointTrajectory_FeedbackMessage_message_member_array,  // message members
  FollowJointTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FollowJointTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FollowJointTrajectory_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FollowJointTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::action::FollowJointTrajectory_FeedbackMessage>()
{
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, action, FollowJointTrajectory_FeedbackMessage)() {
  return &::control_msgs::action::rosidl_typesupport_introspection_cpp::FollowJointTrajectory_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
