// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/steering_controller_status__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/steering_controller_status__functions.h"
#include "control_msgs/msg/detail/steering_controller_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `traction_wheels_position`
// Member `traction_wheels_velocity`
// Member `steer_positions`
// Member `linear_velocity_command`
// Member `steering_angle_command`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__SteeringControllerStatus__init(message_memory);
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_fini_function(void * message_memory)
{
  control_msgs__msg__SteeringControllerStatus__fini(message_memory);
}

size_t control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__traction_wheels_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__traction_wheels_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__traction_wheels_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__traction_wheels_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__traction_wheels_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__traction_wheels_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__traction_wheels_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__traction_wheels_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__traction_wheels_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__traction_wheels_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__traction_wheels_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__traction_wheels_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__traction_wheels_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__traction_wheels_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__traction_wheels_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__traction_wheels_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__steer_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__steer_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__steer_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__steer_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__steer_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__steer_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__steer_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__steer_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__linear_velocity_command(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__linear_velocity_command(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__linear_velocity_command(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__linear_velocity_command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__linear_velocity_command(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__linear_velocity_command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__linear_velocity_command(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__linear_velocity_command(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__steering_angle_command(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__steering_angle_command(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__steering_angle_command(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__steering_angle_command(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__steering_angle_command(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__steering_angle_command(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__steering_angle_command(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__steering_angle_command(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__SteeringControllerStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traction_wheels_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__SteeringControllerStatus, traction_wheels_position),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__traction_wheels_position,  // size() function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__traction_wheels_position,  // get_const(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__traction_wheels_position,  // get(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__traction_wheels_position,  // fetch(index, &value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__traction_wheels_position,  // assign(index, value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__traction_wheels_position  // resize(index) function pointer
  },
  {
    "traction_wheels_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__SteeringControllerStatus, traction_wheels_velocity),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__traction_wheels_velocity,  // size() function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__traction_wheels_velocity,  // get_const(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__traction_wheels_velocity,  // get(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__traction_wheels_velocity,  // fetch(index, &value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__traction_wheels_velocity,  // assign(index, value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__traction_wheels_velocity  // resize(index) function pointer
  },
  {
    "steer_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__SteeringControllerStatus, steer_positions),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__steer_positions,  // size() function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__steer_positions,  // get_const(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__steer_positions,  // get(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__steer_positions,  // fetch(index, &value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__steer_positions,  // assign(index, value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__steer_positions  // resize(index) function pointer
  },
  {
    "linear_velocity_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__SteeringControllerStatus, linear_velocity_command),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__linear_velocity_command,  // size() function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__linear_velocity_command,  // get_const(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__linear_velocity_command,  // get(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__linear_velocity_command,  // fetch(index, &value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__linear_velocity_command,  // assign(index, value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__linear_velocity_command  // resize(index) function pointer
  },
  {
    "steering_angle_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__SteeringControllerStatus, steering_angle_command),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__size_function__SteeringControllerStatus__steering_angle_command,  // size() function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_const_function__SteeringControllerStatus__steering_angle_command,  // get_const(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__get_function__SteeringControllerStatus__steering_angle_command,  // get(index) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__fetch_function__SteeringControllerStatus__steering_angle_command,  // fetch(index, &value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__assign_function__SteeringControllerStatus__steering_angle_command,  // assign(index, value) function pointer
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__resize_function__SteeringControllerStatus__steering_angle_command  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_members = {
  "control_msgs__msg",  // message namespace
  "SteeringControllerStatus",  // message name
  6,  // number of fields
  sizeof(control_msgs__msg__SteeringControllerStatus),
  control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_member_array,  // message members
  control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_type_support_handle = {
  0,
  &control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, SteeringControllerStatus)() {
  control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__SteeringControllerStatus__rosidl_typesupport_introspection_c__SteeringControllerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
