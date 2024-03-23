// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/msg/detail/steering_controller_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SteeringControllerStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::msg::SteeringControllerStatus(_init);
}

void SteeringControllerStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::msg::SteeringControllerStatus *>(message_memory);
  typed_message->~SteeringControllerStatus();
}

size_t size_function__SteeringControllerStatus__traction_wheels_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SteeringControllerStatus__traction_wheels_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SteeringControllerStatus__traction_wheels_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SteeringControllerStatus__traction_wheels_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SteeringControllerStatus__traction_wheels_position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SteeringControllerStatus__traction_wheels_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SteeringControllerStatus__traction_wheels_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SteeringControllerStatus__traction_wheels_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SteeringControllerStatus__traction_wheels_velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SteeringControllerStatus__traction_wheels_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SteeringControllerStatus__traction_wheels_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SteeringControllerStatus__traction_wheels_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SteeringControllerStatus__traction_wheels_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SteeringControllerStatus__traction_wheels_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SteeringControllerStatus__traction_wheels_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SteeringControllerStatus__traction_wheels_velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SteeringControllerStatus__steer_positions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SteeringControllerStatus__steer_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SteeringControllerStatus__steer_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SteeringControllerStatus__steer_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SteeringControllerStatus__steer_positions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SteeringControllerStatus__steer_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SteeringControllerStatus__steer_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SteeringControllerStatus__steer_positions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SteeringControllerStatus__linear_velocity_command(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SteeringControllerStatus__linear_velocity_command(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SteeringControllerStatus__linear_velocity_command(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SteeringControllerStatus__linear_velocity_command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SteeringControllerStatus__linear_velocity_command(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SteeringControllerStatus__linear_velocity_command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SteeringControllerStatus__linear_velocity_command(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SteeringControllerStatus__linear_velocity_command(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SteeringControllerStatus__steering_angle_command(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SteeringControllerStatus__steering_angle_command(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SteeringControllerStatus__steering_angle_command(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SteeringControllerStatus__steering_angle_command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SteeringControllerStatus__steering_angle_command(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SteeringControllerStatus__steering_angle_command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SteeringControllerStatus__steering_angle_command(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SteeringControllerStatus__steering_angle_command(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SteeringControllerStatus_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::SteeringControllerStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traction_wheels_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::SteeringControllerStatus, traction_wheels_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__SteeringControllerStatus__traction_wheels_position,  // size() function pointer
    get_const_function__SteeringControllerStatus__traction_wheels_position,  // get_const(index) function pointer
    get_function__SteeringControllerStatus__traction_wheels_position,  // get(index) function pointer
    fetch_function__SteeringControllerStatus__traction_wheels_position,  // fetch(index, &value) function pointer
    assign_function__SteeringControllerStatus__traction_wheels_position,  // assign(index, value) function pointer
    resize_function__SteeringControllerStatus__traction_wheels_position  // resize(index) function pointer
  },
  {
    "traction_wheels_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::SteeringControllerStatus, traction_wheels_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__SteeringControllerStatus__traction_wheels_velocity,  // size() function pointer
    get_const_function__SteeringControllerStatus__traction_wheels_velocity,  // get_const(index) function pointer
    get_function__SteeringControllerStatus__traction_wheels_velocity,  // get(index) function pointer
    fetch_function__SteeringControllerStatus__traction_wheels_velocity,  // fetch(index, &value) function pointer
    assign_function__SteeringControllerStatus__traction_wheels_velocity,  // assign(index, value) function pointer
    resize_function__SteeringControllerStatus__traction_wheels_velocity  // resize(index) function pointer
  },
  {
    "steer_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::SteeringControllerStatus, steer_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__SteeringControllerStatus__steer_positions,  // size() function pointer
    get_const_function__SteeringControllerStatus__steer_positions,  // get_const(index) function pointer
    get_function__SteeringControllerStatus__steer_positions,  // get(index) function pointer
    fetch_function__SteeringControllerStatus__steer_positions,  // fetch(index, &value) function pointer
    assign_function__SteeringControllerStatus__steer_positions,  // assign(index, value) function pointer
    resize_function__SteeringControllerStatus__steer_positions  // resize(index) function pointer
  },
  {
    "linear_velocity_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::SteeringControllerStatus, linear_velocity_command),  // bytes offset in struct
    nullptr,  // default value
    size_function__SteeringControllerStatus__linear_velocity_command,  // size() function pointer
    get_const_function__SteeringControllerStatus__linear_velocity_command,  // get_const(index) function pointer
    get_function__SteeringControllerStatus__linear_velocity_command,  // get(index) function pointer
    fetch_function__SteeringControllerStatus__linear_velocity_command,  // fetch(index, &value) function pointer
    assign_function__SteeringControllerStatus__linear_velocity_command,  // assign(index, value) function pointer
    resize_function__SteeringControllerStatus__linear_velocity_command  // resize(index) function pointer
  },
  {
    "steering_angle_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::msg::SteeringControllerStatus, steering_angle_command),  // bytes offset in struct
    nullptr,  // default value
    size_function__SteeringControllerStatus__steering_angle_command,  // size() function pointer
    get_const_function__SteeringControllerStatus__steering_angle_command,  // get_const(index) function pointer
    get_function__SteeringControllerStatus__steering_angle_command,  // get(index) function pointer
    fetch_function__SteeringControllerStatus__steering_angle_command,  // fetch(index, &value) function pointer
    assign_function__SteeringControllerStatus__steering_angle_command,  // assign(index, value) function pointer
    resize_function__SteeringControllerStatus__steering_angle_command  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SteeringControllerStatus_message_members = {
  "control_msgs::msg",  // message namespace
  "SteeringControllerStatus",  // message name
  6,  // number of fields
  sizeof(control_msgs::msg::SteeringControllerStatus),
  SteeringControllerStatus_message_member_array,  // message members
  SteeringControllerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SteeringControllerStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SteeringControllerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SteeringControllerStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::SteeringControllerStatus>()
{
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::SteeringControllerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, msg, SteeringControllerStatus)() {
  return &::control_msgs::msg::rosidl_typesupport_introspection_cpp::SteeringControllerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
