// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/msg/detail/hardware_component_state__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/msg/detail/hardware_component_state__functions.h"
#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.h"


// Include directives for member types
// Member `name`
// Member `type`
// Member `class_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "lifecycle_msgs/msg/state.h"
// Member `state`
#include "lifecycle_msgs/msg/detail/state__rosidl_typesupport_introspection_c.h"
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/hardware_interface.h"
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/detail/hardware_interface__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__msg__HardwareComponentState__init(message_memory);
}

void controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_fini_function(void * message_memory)
{
  controller_manager_msgs__msg__HardwareComponentState__fini(message_memory);
}

size_t controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__size_function__HardwareComponentState__command_interfaces(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_const_function__HardwareComponentState__command_interfaces(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_function__HardwareComponentState__command_interfaces(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__fetch_function__HardwareComponentState__command_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__HardwareInterface * item =
    ((const controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_const_function__HardwareComponentState__command_interfaces(untyped_member, index));
  controller_manager_msgs__msg__HardwareInterface * value =
    (controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__assign_function__HardwareComponentState__command_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__HardwareInterface * item =
    ((controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_function__HardwareComponentState__command_interfaces(untyped_member, index));
  const controller_manager_msgs__msg__HardwareInterface * value =
    (const controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__resize_function__HardwareComponentState__command_interfaces(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(member);
  return controller_manager_msgs__msg__HardwareInterface__Sequence__init(member, size);
}

size_t controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__size_function__HardwareComponentState__state_interfaces(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_const_function__HardwareComponentState__state_interfaces(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_function__HardwareComponentState__state_interfaces(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__fetch_function__HardwareComponentState__state_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__HardwareInterface * item =
    ((const controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_const_function__HardwareComponentState__state_interfaces(untyped_member, index));
  controller_manager_msgs__msg__HardwareInterface * value =
    (controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__assign_function__HardwareComponentState__state_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__HardwareInterface * item =
    ((controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_function__HardwareComponentState__state_interfaces(untyped_member, index));
  const controller_manager_msgs__msg__HardwareInterface * value =
    (const controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__resize_function__HardwareComponentState__state_interfaces(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(member);
  return controller_manager_msgs__msg__HardwareInterface__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_member_array[6] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareComponentState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareComponentState, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareComponentState, class_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareComponentState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareComponentState, command_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__size_function__HardwareComponentState__command_interfaces,  // size() function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_const_function__HardwareComponentState__command_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_function__HardwareComponentState__command_interfaces,  // get(index) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__fetch_function__HardwareComponentState__command_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__assign_function__HardwareComponentState__command_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__resize_function__HardwareComponentState__command_interfaces  // resize(index) function pointer
  },
  {
    "state_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareComponentState, state_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__size_function__HardwareComponentState__state_interfaces,  // size() function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_const_function__HardwareComponentState__state_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__get_function__HardwareComponentState__state_interfaces,  // get(index) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__fetch_function__HardwareComponentState__state_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__assign_function__HardwareComponentState__state_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__resize_function__HardwareComponentState__state_interfaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_members = {
  "controller_manager_msgs__msg",  // message namespace
  "HardwareComponentState",  // message name
  6,  // number of fields
  sizeof(controller_manager_msgs__msg__HardwareComponentState),
  controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_member_array,  // message members
  controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_type_support_handle = {
  0,
  &controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareComponentState)() {
  controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, msg, State)();
  controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)();
  controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)();
  if (!controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__msg__HardwareComponentState__rosidl_typesupport_introspection_c__HardwareComponentState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
