// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_trajectory_controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
// Member `multi_dof_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference`
// Member `feedback`
// Member `error`
// Member `output`
// Member `desired`
// Member `actual`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
// Member `multi_dof_reference`
// Member `multi_dof_feedback`
// Member `multi_dof_error`
// Member `multi_dof_output`
// Member `multi_dof_desired`
// Member `multi_dof_actual`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"

bool
control_msgs__msg__JointTrajectoryControllerState__init(control_msgs__msg__JointTrajectoryControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // reference
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->reference)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // feedback
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->feedback)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // error
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->error)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // output
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->output)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // desired
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->desired)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // actual
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->actual)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->multi_dof_joint_names, 0)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_reference
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_reference)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_feedback
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_feedback)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_error
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_error)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_output
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_output)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_desired
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_desired)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  // multi_dof_actual
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_actual)) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__JointTrajectoryControllerState__fini(control_msgs__msg__JointTrajectoryControllerState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // reference
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->reference);
  // feedback
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->feedback);
  // error
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->error);
  // output
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->output);
  // desired
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->desired);
  // actual
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->actual);
  // multi_dof_joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->multi_dof_joint_names);
  // multi_dof_reference
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_reference);
  // multi_dof_feedback
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_feedback);
  // multi_dof_error
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_error);
  // multi_dof_output
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_output);
  // multi_dof_desired
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_desired);
  // multi_dof_actual
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_actual);
}

bool
control_msgs__msg__JointTrajectoryControllerState__are_equal(const control_msgs__msg__JointTrajectoryControllerState * lhs, const control_msgs__msg__JointTrajectoryControllerState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // reference
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->reference), &(rhs->reference)))
  {
    return false;
  }
  // feedback
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  // error
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // output
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  // desired
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->desired), &(rhs->desired)))
  {
    return false;
  }
  // actual
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->actual), &(rhs->actual)))
  {
    return false;
  }
  // multi_dof_joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->multi_dof_joint_names), &(rhs->multi_dof_joint_names)))
  {
    return false;
  }
  // multi_dof_reference
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__are_equal(
      &(lhs->multi_dof_reference), &(rhs->multi_dof_reference)))
  {
    return false;
  }
  // multi_dof_feedback
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__are_equal(
      &(lhs->multi_dof_feedback), &(rhs->multi_dof_feedback)))
  {
    return false;
  }
  // multi_dof_error
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__are_equal(
      &(lhs->multi_dof_error), &(rhs->multi_dof_error)))
  {
    return false;
  }
  // multi_dof_output
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__are_equal(
      &(lhs->multi_dof_output), &(rhs->multi_dof_output)))
  {
    return false;
  }
  // multi_dof_desired
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__are_equal(
      &(lhs->multi_dof_desired), &(rhs->multi_dof_desired)))
  {
    return false;
  }
  // multi_dof_actual
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__are_equal(
      &(lhs->multi_dof_actual), &(rhs->multi_dof_actual)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__JointTrajectoryControllerState__copy(
  const control_msgs__msg__JointTrajectoryControllerState * input,
  control_msgs__msg__JointTrajectoryControllerState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // reference
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->reference), &(output->reference)))
  {
    return false;
  }
  // feedback
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  // error
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // output
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  // desired
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->desired), &(output->desired)))
  {
    return false;
  }
  // actual
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->actual), &(output->actual)))
  {
    return false;
  }
  // multi_dof_joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->multi_dof_joint_names), &(output->multi_dof_joint_names)))
  {
    return false;
  }
  // multi_dof_reference
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__copy(
      &(input->multi_dof_reference), &(output->multi_dof_reference)))
  {
    return false;
  }
  // multi_dof_feedback
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__copy(
      &(input->multi_dof_feedback), &(output->multi_dof_feedback)))
  {
    return false;
  }
  // multi_dof_error
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__copy(
      &(input->multi_dof_error), &(output->multi_dof_error)))
  {
    return false;
  }
  // multi_dof_output
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__copy(
      &(input->multi_dof_output), &(output->multi_dof_output)))
  {
    return false;
  }
  // multi_dof_desired
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__copy(
      &(input->multi_dof_desired), &(output->multi_dof_desired)))
  {
    return false;
  }
  // multi_dof_actual
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__copy(
      &(input->multi_dof_actual), &(output->multi_dof_actual)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__JointTrajectoryControllerState *
control_msgs__msg__JointTrajectoryControllerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointTrajectoryControllerState * msg = (control_msgs__msg__JointTrajectoryControllerState *)allocator.allocate(sizeof(control_msgs__msg__JointTrajectoryControllerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointTrajectoryControllerState));
  bool success = control_msgs__msg__JointTrajectoryControllerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointTrajectoryControllerState__destroy(control_msgs__msg__JointTrajectoryControllerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__JointTrajectoryControllerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__JointTrajectoryControllerState__Sequence__init(control_msgs__msg__JointTrajectoryControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointTrajectoryControllerState * data = NULL;

  if (size) {
    data = (control_msgs__msg__JointTrajectoryControllerState *)allocator.zero_allocate(size, sizeof(control_msgs__msg__JointTrajectoryControllerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointTrajectoryControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointTrajectoryControllerState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__msg__JointTrajectoryControllerState__Sequence__fini(control_msgs__msg__JointTrajectoryControllerState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__msg__JointTrajectoryControllerState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__msg__JointTrajectoryControllerState__Sequence *
control_msgs__msg__JointTrajectoryControllerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointTrajectoryControllerState__Sequence * array = (control_msgs__msg__JointTrajectoryControllerState__Sequence *)allocator.allocate(sizeof(control_msgs__msg__JointTrajectoryControllerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointTrajectoryControllerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointTrajectoryControllerState__Sequence__destroy(control_msgs__msg__JointTrajectoryControllerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__JointTrajectoryControllerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__JointTrajectoryControllerState__Sequence__are_equal(const control_msgs__msg__JointTrajectoryControllerState__Sequence * lhs, const control_msgs__msg__JointTrajectoryControllerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__JointTrajectoryControllerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__JointTrajectoryControllerState__Sequence__copy(
  const control_msgs__msg__JointTrajectoryControllerState__Sequence * input,
  control_msgs__msg__JointTrajectoryControllerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__JointTrajectoryControllerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__JointTrajectoryControllerState * data =
      (control_msgs__msg__JointTrajectoryControllerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__JointTrajectoryControllerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__JointTrajectoryControllerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__JointTrajectoryControllerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
