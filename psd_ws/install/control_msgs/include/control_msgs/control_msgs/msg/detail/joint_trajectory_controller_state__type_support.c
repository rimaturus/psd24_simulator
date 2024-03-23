// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/joint_trajectory_controller_state__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__functions.h"
#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
// Member `multi_dof_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference`
// Member `feedback`
// Member `error`
// Member `output`
// Member `desired`
// Member `actual`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `reference`
// Member `feedback`
// Member `error`
// Member `output`
// Member `desired`
// Member `actual`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `multi_dof_reference`
// Member `multi_dof_feedback`
// Member `multi_dof_error`
// Member `multi_dof_output`
// Member `multi_dof_desired`
// Member `multi_dof_actual`
#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point.h"
// Member `multi_dof_reference`
// Member `multi_dof_feedback`
// Member `multi_dof_error`
// Member `multi_dof_output`
// Member `multi_dof_desired`
// Member `multi_dof_actual`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__JointTrajectoryControllerState__init(message_memory);
}

void control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_fini_function(void * message_memory)
{
  control_msgs__msg__JointTrajectoryControllerState__fini(message_memory);
}

size_t control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__size_function__JointTrajectoryControllerState__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryControllerState__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_function__JointTrajectoryControllerState__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__fetch_function__JointTrajectoryControllerState__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryControllerState__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__assign_function__JointTrajectoryControllerState__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_function__JointTrajectoryControllerState__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__resize_function__JointTrajectoryControllerState__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__size_function__JointTrajectoryControllerState__multi_dof_joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryControllerState__multi_dof_joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_function__JointTrajectoryControllerState__multi_dof_joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__fetch_function__JointTrajectoryControllerState__multi_dof_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryControllerState__multi_dof_joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__assign_function__JointTrajectoryControllerState__multi_dof_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_function__JointTrajectoryControllerState__multi_dof_joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__resize_function__JointTrajectoryControllerState__multi_dof_joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, joint_names),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__size_function__JointTrajectoryControllerState__joint_names,  // size() function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryControllerState__joint_names,  // get_const(index) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_function__JointTrajectoryControllerState__joint_names,  // get(index) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__fetch_function__JointTrajectoryControllerState__joint_names,  // fetch(index, &value) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__assign_function__JointTrajectoryControllerState__joint_names,  // assign(index, value) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__resize_function__JointTrajectoryControllerState__joint_names  // resize(index) function pointer
  },
  {
    "reference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, reference),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, actual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_joint_names),  // bytes offset in struct
    NULL,  // default value
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__size_function__JointTrajectoryControllerState__multi_dof_joint_names,  // size() function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_const_function__JointTrajectoryControllerState__multi_dof_joint_names,  // get_const(index) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__get_function__JointTrajectoryControllerState__multi_dof_joint_names,  // get(index) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__fetch_function__JointTrajectoryControllerState__multi_dof_joint_names,  // fetch(index, &value) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__assign_function__JointTrajectoryControllerState__multi_dof_joint_names,  // assign(index, value) function pointer
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__resize_function__JointTrajectoryControllerState__multi_dof_joint_names  // resize(index) function pointer
  },
  {
    "multi_dof_reference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_reference),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__JointTrajectoryControllerState, multi_dof_actual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_members = {
  "control_msgs__msg",  // message namespace
  "JointTrajectoryControllerState",  // message name
  15,  // number of fields
  sizeof(control_msgs__msg__JointTrajectoryControllerState),
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array,  // message members
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_type_support_handle = {
  0,
  &control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointTrajectoryControllerState)() {
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  if (!control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__JointTrajectoryControllerState__rosidl_typesupport_introspection_c__JointTrajectoryControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
