// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/msg/detail/chain_connection__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/msg/detail/chain_connection__functions.h"
#include "controller_manager_msgs/msg/detail/chain_connection__struct.h"


// Include directives for member types
// Member `name`
// Member `reference_interfaces`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__msg__ChainConnection__init(message_memory);
}

void controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_fini_function(void * message_memory)
{
  controller_manager_msgs__msg__ChainConnection__fini(message_memory);
}

size_t controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__size_function__ChainConnection__reference_interfaces(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__get_const_function__ChainConnection__reference_interfaces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__get_function__ChainConnection__reference_interfaces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__fetch_function__ChainConnection__reference_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__get_const_function__ChainConnection__reference_interfaces(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__assign_function__ChainConnection__reference_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__get_function__ChainConnection__reference_interfaces(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__resize_function__ChainConnection__reference_interfaces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__ChainConnection, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__ChainConnection, reference_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__size_function__ChainConnection__reference_interfaces,  // size() function pointer
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__get_const_function__ChainConnection__reference_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__get_function__ChainConnection__reference_interfaces,  // get(index) function pointer
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__fetch_function__ChainConnection__reference_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__assign_function__ChainConnection__reference_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__resize_function__ChainConnection__reference_interfaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_members = {
  "controller_manager_msgs__msg",  // message namespace
  "ChainConnection",  // message name
  2,  // number of fields
  sizeof(controller_manager_msgs__msg__ChainConnection),
  controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_member_array,  // message members
  controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_type_support_handle = {
  0,
  &controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, ChainConnection)() {
  if (!controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__msg__ChainConnection__rosidl_typesupport_introspection_c__ChainConnection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
