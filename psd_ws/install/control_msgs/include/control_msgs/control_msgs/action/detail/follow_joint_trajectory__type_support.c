// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
#include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `multi_dof_trajectory`
#include "trajectory_msgs/msg/multi_dof_joint_trajectory.h"
// Member `multi_dof_trajectory`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "control_msgs/msg/joint_tolerance.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "control_msgs/msg/detail/joint_tolerance__rosidl_typesupport_introspection_c.h"
// Member `component_path_tolerance`
// Member `component_goal_tolerance`
#include "control_msgs/msg/joint_component_tolerance.h"
// Member `component_path_tolerance`
// Member `component_goal_tolerance`
#include "control_msgs/msg/detail/joint_component_tolerance__rosidl_typesupport_introspection_c.h"
// Member `goal_time_tolerance`
#include "builtin_interfaces/msg/duration.h"
// Member `goal_time_tolerance`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_Goal__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_Goal__fini(message_memory);
}

size_t control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__path_tolerance(
  const void * untyped_member)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__path_tolerance(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__path_tolerance(
  void * untyped_member, size_t index)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__path_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__JointTolerance * item =
    ((const control_msgs__msg__JointTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__path_tolerance(untyped_member, index));
  control_msgs__msg__JointTolerance * value =
    (control_msgs__msg__JointTolerance *)(untyped_value);
  *value = *item;
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__path_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__JointTolerance * item =
    ((control_msgs__msg__JointTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__path_tolerance(untyped_member, index));
  const control_msgs__msg__JointTolerance * value =
    (const control_msgs__msg__JointTolerance *)(untyped_value);
  *item = *value;
}

bool control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__path_tolerance(
  void * untyped_member, size_t size)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  control_msgs__msg__JointTolerance__Sequence__fini(member);
  return control_msgs__msg__JointTolerance__Sequence__init(member, size);
}

size_t control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__component_path_tolerance(
  const void * untyped_member)
{
  const control_msgs__msg__JointComponentTolerance__Sequence * member =
    (const control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__component_path_tolerance(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__JointComponentTolerance__Sequence * member =
    (const control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__component_path_tolerance(
  void * untyped_member, size_t index)
{
  control_msgs__msg__JointComponentTolerance__Sequence * member =
    (control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__component_path_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__JointComponentTolerance * item =
    ((const control_msgs__msg__JointComponentTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__component_path_tolerance(untyped_member, index));
  control_msgs__msg__JointComponentTolerance * value =
    (control_msgs__msg__JointComponentTolerance *)(untyped_value);
  *value = *item;
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__component_path_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__JointComponentTolerance * item =
    ((control_msgs__msg__JointComponentTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__component_path_tolerance(untyped_member, index));
  const control_msgs__msg__JointComponentTolerance * value =
    (const control_msgs__msg__JointComponentTolerance *)(untyped_value);
  *item = *value;
}

bool control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__component_path_tolerance(
  void * untyped_member, size_t size)
{
  control_msgs__msg__JointComponentTolerance__Sequence * member =
    (control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  control_msgs__msg__JointComponentTolerance__Sequence__fini(member);
  return control_msgs__msg__JointComponentTolerance__Sequence__init(member, size);
}

size_t control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__goal_tolerance(
  const void * untyped_member)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__goal_tolerance(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__JointTolerance__Sequence * member =
    (const control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__goal_tolerance(
  void * untyped_member, size_t index)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__goal_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__JointTolerance * item =
    ((const control_msgs__msg__JointTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__goal_tolerance(untyped_member, index));
  control_msgs__msg__JointTolerance * value =
    (control_msgs__msg__JointTolerance *)(untyped_value);
  *value = *item;
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__goal_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__JointTolerance * item =
    ((control_msgs__msg__JointTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__goal_tolerance(untyped_member, index));
  const control_msgs__msg__JointTolerance * value =
    (const control_msgs__msg__JointTolerance *)(untyped_value);
  *item = *value;
}

bool control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__goal_tolerance(
  void * untyped_member, size_t size)
{
  control_msgs__msg__JointTolerance__Sequence * member =
    (control_msgs__msg__JointTolerance__Sequence *)(untyped_member);
  control_msgs__msg__JointTolerance__Sequence__fini(member);
  return control_msgs__msg__JointTolerance__Sequence__init(member, size);
}

size_t control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  const void * untyped_member)
{
  const control_msgs__msg__JointComponentTolerance__Sequence * member =
    (const control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  const void * untyped_member, size_t index)
{
  const control_msgs__msg__JointComponentTolerance__Sequence * member =
    (const control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  void * untyped_member, size_t index)
{
  control_msgs__msg__JointComponentTolerance__Sequence * member =
    (control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const control_msgs__msg__JointComponentTolerance * item =
    ((const control_msgs__msg__JointComponentTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__component_goal_tolerance(untyped_member, index));
  control_msgs__msg__JointComponentTolerance * value =
    (control_msgs__msg__JointComponentTolerance *)(untyped_value);
  *value = *item;
}

void control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  control_msgs__msg__JointComponentTolerance * item =
    ((control_msgs__msg__JointComponentTolerance *)
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__component_goal_tolerance(untyped_member, index));
  const control_msgs__msg__JointComponentTolerance * value =
    (const control_msgs__msg__JointComponentTolerance *)(untyped_value);
  *item = *value;
}

bool control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__component_goal_tolerance(
  void * untyped_member, size_t size)
{
  control_msgs__msg__JointComponentTolerance__Sequence * member =
    (control_msgs__msg__JointComponentTolerance__Sequence *)(untyped_member);
  control_msgs__msg__JointComponentTolerance__Sequence__fini(member);
  return control_msgs__msg__JointComponentTolerance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[7] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_dof_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, multi_dof_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, path_tolerance),  // bytes offset in struct
    NULL,  // default value
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__path_tolerance,  // size() function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__path_tolerance,  // get_const(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__path_tolerance,  // get(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__path_tolerance,  // fetch(index, &value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__path_tolerance,  // assign(index, value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__path_tolerance  // resize(index) function pointer
  },
  {
    "component_path_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, component_path_tolerance),  // bytes offset in struct
    NULL,  // default value
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__component_path_tolerance,  // size() function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__component_path_tolerance,  // get_const(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__component_path_tolerance,  // get(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__component_path_tolerance,  // fetch(index, &value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__component_path_tolerance,  // assign(index, value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__component_path_tolerance  // resize(index) function pointer
  },
  {
    "goal_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, goal_tolerance),  // bytes offset in struct
    NULL,  // default value
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__goal_tolerance,  // size() function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__goal_tolerance,  // get_const(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__goal_tolerance,  // get(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__goal_tolerance,  // fetch(index, &value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__goal_tolerance,  // assign(index, value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__goal_tolerance  // resize(index) function pointer
  },
  {
    "component_goal_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, component_goal_tolerance),  // bytes offset in struct
    NULL,  // default value
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // size() function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // get_const(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // get(index) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // fetch(index, &value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Goal__component_goal_tolerance,  // assign(index, value) function pointer
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Goal__component_goal_tolerance  // resize(index) function pointer
  },
  {
    "goal_time_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Goal, goal_time_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_Goal",  // message name
  7,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_Goal),
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_Goal)() {
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectory)();
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointTolerance)();
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointComponentTolerance)();
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointTolerance)();
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, JointComponentTolerance)();
  control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_Goal__rosidl_typesupport_introspection_c__FollowJointTrajectory_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_Result__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_member_array[2] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Result, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_Result",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_Result),
  control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_Result)() {
  if (!control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_Result__rosidl_typesupport_introspection_c__FollowJointTrajectory_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `joint_names`
// Member `multi_dof_joint_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/joint_trajectory_point.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `multi_dof_desired`
// Member `multi_dof_actual`
// Member `multi_dof_error`
#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point.h"
// Member `multi_dof_desired`
// Member `multi_dof_actual`
// Member `multi_dof_error`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_Feedback__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_Feedback__fini(message_memory);
}

size_t control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Feedback__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Feedback__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Feedback__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Feedback__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Feedback__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Feedback__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Feedback__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Feedback__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Feedback__multi_dof_joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, header),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, joint_names),  // bytes offset in struct
    NULL,  // default value
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Feedback__joint_names,  // size() function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Feedback__joint_names,  // get_const(index) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Feedback__joint_names,  // get(index) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Feedback__joint_names,  // fetch(index, &value) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Feedback__joint_names,  // assign(index, value) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Feedback__joint_names  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, desired),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, actual),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, error),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, multi_dof_joint_names),  // bytes offset in struct
    NULL,  // default value
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__size_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // size() function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_const_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // get_const(index) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__get_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // get(index) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__fetch_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // fetch(index, &value) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__assign_function__FollowJointTrajectory_Feedback__multi_dof_joint_names,  // assign(index, value) function pointer
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__resize_function__FollowJointTrajectory_Feedback__multi_dof_joint_names  // resize(index) function pointer
  },
  {
    "multi_dof_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, multi_dof_desired),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, multi_dof_actual),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_Feedback, multi_dof_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_Feedback",  // message name
  9,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_Feedback),
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_Feedback)() {
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectoryPoint)();
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)();
  if (!control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_Feedback__rosidl_typesupport_introspection_c__FollowJointTrajectory_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "control_msgs/action/follow_joint_trajectory.h"
// Member `goal`
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Request),
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal_Request)() {
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_Goal)();
  if (!control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Response),
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal_Response)() {
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_members = {
  "control_msgs__action",  // service namespace
  "FollowJointTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle = {
  0,
  &control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal)() {
  if (!control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle.typesupport_identifier) {
    control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_SendGoal_Response)()->data;
  }

  return &control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_GetResult_Request__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Request),
  control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult_Request)() {
  control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "control_msgs/action/follow_joint_trajectory.h"
// Member `result`
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_GetResult_Response__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Response),
  control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult_Response)() {
  control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_Result)();
  if (!control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_members = {
  "control_msgs__action",  // service namespace
  "FollowJointTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle = {
  0,
  &control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult)() {
  if (!control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle.typesupport_identifier) {
    control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_GetResult_Response)()->data;
  }

  return &control_msgs__action__detail__follow_joint_trajectory__rosidl_typesupport_introspection_c__FollowJointTrajectory_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/follow_joint_trajectory.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__init(message_memory);
}

void control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__FollowJointTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(control_msgs__action__FollowJointTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_members = {
  "control_msgs__action",  // message namespace
  "FollowJointTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__FollowJointTrajectory_FeedbackMessage),
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array,  // message members
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle = {
  0,
  &control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_FeedbackMessage)() {
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, FollowJointTrajectory_Feedback)();
  if (!control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__action__FollowJointTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__FollowJointTrajectory_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
