// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/mecanum_drive_controller_state__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/mecanum_drive_controller_state__functions.h"
#include "control_msgs/msg/detail/mecanum_drive_controller_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `reference_velocity`
#include "geometry_msgs/msg/twist.h"
// Member `reference_velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__MecanumDriveControllerState__init(message_memory);
}

void control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_fini_function(void * message_memory)
{
  control_msgs__msg__MecanumDriveControllerState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MecanumDriveControllerState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_left_wheel_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MecanumDriveControllerState, front_left_wheel_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_left_wheel_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MecanumDriveControllerState, back_left_wheel_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_right_wheel_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MecanumDriveControllerState, back_right_wheel_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_right_wheel_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MecanumDriveControllerState, front_right_wheel_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__MecanumDriveControllerState, reference_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_members = {
  "control_msgs__msg",  // message namespace
  "MecanumDriveControllerState",  // message name
  6,  // number of fields
  sizeof(control_msgs__msg__MecanumDriveControllerState),
  control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_member_array,  // message members
  control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_type_support_handle = {
  0,
  &control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, MecanumDriveControllerState)() {
  control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__MecanumDriveControllerState__rosidl_typesupport_introspection_c__MecanumDriveControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
