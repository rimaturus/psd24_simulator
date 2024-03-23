// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
control_msgs__msg__JointControllerState__init(control_msgs__msg__JointControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__JointControllerState__fini(msg);
    return false;
  }
  // set_point
  // process_value
  // process_value_dot
  // error
  // time_step
  // command
  // p
  // i
  // d
  // i_clamp
  // antiwindup
  return true;
}

void
control_msgs__msg__JointControllerState__fini(control_msgs__msg__JointControllerState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // set_point
  // process_value
  // process_value_dot
  // error
  // time_step
  // command
  // p
  // i
  // d
  // i_clamp
  // antiwindup
}

bool
control_msgs__msg__JointControllerState__are_equal(const control_msgs__msg__JointControllerState * lhs, const control_msgs__msg__JointControllerState * rhs)
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
  // set_point
  if (lhs->set_point != rhs->set_point) {
    return false;
  }
  // process_value
  if (lhs->process_value != rhs->process_value) {
    return false;
  }
  // process_value_dot
  if (lhs->process_value_dot != rhs->process_value_dot) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // p
  if (lhs->p != rhs->p) {
    return false;
  }
  // i
  if (lhs->i != rhs->i) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  // i_clamp
  if (lhs->i_clamp != rhs->i_clamp) {
    return false;
  }
  // antiwindup
  if (lhs->antiwindup != rhs->antiwindup) {
    return false;
  }
  return true;
}

bool
control_msgs__msg__JointControllerState__copy(
  const control_msgs__msg__JointControllerState * input,
  control_msgs__msg__JointControllerState * output)
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
  // set_point
  output->set_point = input->set_point;
  // process_value
  output->process_value = input->process_value;
  // process_value_dot
  output->process_value_dot = input->process_value_dot;
  // error
  output->error = input->error;
  // time_step
  output->time_step = input->time_step;
  // command
  output->command = input->command;
  // p
  output->p = input->p;
  // i
  output->i = input->i;
  // d
  output->d = input->d;
  // i_clamp
  output->i_clamp = input->i_clamp;
  // antiwindup
  output->antiwindup = input->antiwindup;
  return true;
}

control_msgs__msg__JointControllerState *
control_msgs__msg__JointControllerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointControllerState * msg = (control_msgs__msg__JointControllerState *)allocator.allocate(sizeof(control_msgs__msg__JointControllerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointControllerState));
  bool success = control_msgs__msg__JointControllerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointControllerState__destroy(control_msgs__msg__JointControllerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__JointControllerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__JointControllerState__Sequence__init(control_msgs__msg__JointControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointControllerState * data = NULL;

  if (size) {
    data = (control_msgs__msg__JointControllerState *)allocator.zero_allocate(size, sizeof(control_msgs__msg__JointControllerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointControllerState__fini(&data[i - 1]);
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
control_msgs__msg__JointControllerState__Sequence__fini(control_msgs__msg__JointControllerState__Sequence * array)
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
      control_msgs__msg__JointControllerState__fini(&array->data[i]);
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

control_msgs__msg__JointControllerState__Sequence *
control_msgs__msg__JointControllerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointControllerState__Sequence * array = (control_msgs__msg__JointControllerState__Sequence *)allocator.allocate(sizeof(control_msgs__msg__JointControllerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointControllerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointControllerState__Sequence__destroy(control_msgs__msg__JointControllerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__JointControllerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__JointControllerState__Sequence__are_equal(const control_msgs__msg__JointControllerState__Sequence * lhs, const control_msgs__msg__JointControllerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__JointControllerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__JointControllerState__Sequence__copy(
  const control_msgs__msg__JointControllerState__Sequence * input,
  control_msgs__msg__JointControllerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__JointControllerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__JointControllerState * data =
      (control_msgs__msg__JointControllerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__JointControllerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__JointControllerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__JointControllerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
