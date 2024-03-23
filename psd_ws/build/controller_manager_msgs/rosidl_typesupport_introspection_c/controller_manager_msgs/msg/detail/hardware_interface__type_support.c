// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/msg/detail/hardware_interface__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__msg__HardwareInterface__init(message_memory);
}

void controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_fini_function(void * message_memory)
{
  controller_manager_msgs__msg__HardwareInterface__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareInterface, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareInterface, is_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_claimed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__msg__HardwareInterface, is_claimed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_members = {
  "controller_manager_msgs__msg",  // message namespace
  "HardwareInterface",  // message name
  3,  // number of fields
  sizeof(controller_manager_msgs__msg__HardwareInterface),
  controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_member_array,  // message members
  controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_type_support_handle = {
  0,
  &controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)() {
  if (!controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__msg__HardwareInterface__rosidl_typesupport_introspection_c__HardwareInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
