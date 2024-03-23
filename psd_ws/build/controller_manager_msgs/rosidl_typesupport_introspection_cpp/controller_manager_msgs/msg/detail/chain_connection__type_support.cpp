// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_manager_msgs/msg/detail/chain_connection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace controller_manager_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChainConnection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) controller_manager_msgs::msg::ChainConnection(_init);
}

void ChainConnection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<controller_manager_msgs::msg::ChainConnection *>(message_memory);
  typed_message->~ChainConnection();
}

size_t size_function__ChainConnection__reference_interfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChainConnection__reference_interfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ChainConnection__reference_interfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChainConnection__reference_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ChainConnection__reference_interfaces(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ChainConnection__reference_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ChainConnection__reference_interfaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ChainConnection__reference_interfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChainConnection_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::ChainConnection, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_interfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs::msg::ChainConnection, reference_interfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChainConnection__reference_interfaces,  // size() function pointer
    get_const_function__ChainConnection__reference_interfaces,  // get_const(index) function pointer
    get_function__ChainConnection__reference_interfaces,  // get(index) function pointer
    fetch_function__ChainConnection__reference_interfaces,  // fetch(index, &value) function pointer
    assign_function__ChainConnection__reference_interfaces,  // assign(index, value) function pointer
    resize_function__ChainConnection__reference_interfaces  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChainConnection_message_members = {
  "controller_manager_msgs::msg",  // message namespace
  "ChainConnection",  // message name
  2,  // number of fields
  sizeof(controller_manager_msgs::msg::ChainConnection),
  ChainConnection_message_member_array,  // message members
  ChainConnection_init_function,  // function to initialize message memory (memory has to be allocated)
  ChainConnection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChainConnection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChainConnection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace controller_manager_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::msg::ChainConnection>()
{
  return &::controller_manager_msgs::msg::rosidl_typesupport_introspection_cpp::ChainConnection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, msg, ChainConnection)() {
  return &::controller_manager_msgs::msg::rosidl_typesupport_introspection_cpp::ChainConnection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
