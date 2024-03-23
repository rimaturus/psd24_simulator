// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/pid_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `timestep`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
control_msgs__msg__PidState__init(control_msgs__msg__PidState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__PidState__fini(msg);
    return false;
  }
  // timestep
  if (!builtin_interfaces__msg__Duration__init(&msg->timestep)) {
    control_msgs__msg__PidState__fini(msg);
    return false;
  }
  // error
  // error_dot
  // p_error
  // i_error
  // d_error
  // p_term
  // i_term
  // d_term
  // i_max
  // i_min
  // output
  return true;
}

void
control_msgs__msg__PidState__fini(control_msgs__msg__PidState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // timestep
  builtin_interfaces__msg__Duration__fini(&msg->timestep);
  // error
  // error_dot
  // p_error
  // i_error
  // d_error
  // p_term
  // i_term
  // d_term
  // i_max
  // i_min
  // output
}

bool
control_msgs__msg__PidState__are_equal(const control_msgs__msg__PidState * lhs, const control_msgs__msg__PidState * rhs)
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
  // timestep
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->timestep), &(rhs->timestep)))
  {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // error_dot
  if (lhs->error_dot != rhs->error_dot) {
    return false;
  }
  // p_error
  if (lhs->p_error != rhs->p_error) {
    return false;
  }
  // i_error
  if (lhs->i_error != rhs->i_error) {
    return false;
  }
  // d_error
  if (lhs->d_error != rhs->d_error) {
    return false;
  }
  // p_term
  if (lhs->p_term != rhs->p_term) {
    return false;
  }
  // i_term
  if (lhs->i_term != rhs->i_term) {
    return false;
  }
  // d_term
  if (lhs->d_term != rhs->d_term) {
    return false;
  }
  // i_max
  if (lhs->i_max != rhs->i_max) {
    return false;
  }
  // i_min
  if (lhs->i_min != rhs->i_min) {
    return false;
  }
  // output
  if (lhs->output != rhs->output) {
    return false;
  }
  return true;
}

bool
control_msgs__msg__PidState__copy(
  const control_msgs__msg__PidState * input,
  control_msgs__msg__PidState * output)
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
  // timestep
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->timestep), &(output->timestep)))
  {
    return false;
  }
  // error
  output->error = input->error;
  // error_dot
  output->error_dot = input->error_dot;
  // p_error
  output->p_error = input->p_error;
  // i_error
  output->i_error = input->i_error;
  // d_error
  output->d_error = input->d_error;
  // p_term
  output->p_term = input->p_term;
  // i_term
  output->i_term = input->i_term;
  // d_term
  output->d_term = input->d_term;
  // i_max
  output->i_max = input->i_max;
  // i_min
  output->i_min = input->i_min;
  // output
  output->output = input->output;
  return true;
}

control_msgs__msg__PidState *
control_msgs__msg__PidState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__PidState * msg = (control_msgs__msg__PidState *)allocator.allocate(sizeof(control_msgs__msg__PidState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__PidState));
  bool success = control_msgs__msg__PidState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__PidState__destroy(control_msgs__msg__PidState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__PidState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__PidState__Sequence__init(control_msgs__msg__PidState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__PidState * data = NULL;

  if (size) {
    data = (control_msgs__msg__PidState *)allocator.zero_allocate(size, sizeof(control_msgs__msg__PidState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__PidState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__PidState__fini(&data[i - 1]);
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
control_msgs__msg__PidState__Sequence__fini(control_msgs__msg__PidState__Sequence * array)
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
      control_msgs__msg__PidState__fini(&array->data[i]);
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

control_msgs__msg__PidState__Sequence *
control_msgs__msg__PidState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__PidState__Sequence * array = (control_msgs__msg__PidState__Sequence *)allocator.allocate(sizeof(control_msgs__msg__PidState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__PidState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__PidState__Sequence__destroy(control_msgs__msg__PidState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__PidState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__PidState__Sequence__are_equal(const control_msgs__msg__PidState__Sequence * lhs, const control_msgs__msg__PidState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__PidState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__PidState__Sequence__copy(
  const control_msgs__msg__PidState__Sequence * input,
  control_msgs__msg__PidState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__PidState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__PidState * data =
      (control_msgs__msg__PidState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__PidState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__PidState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__PidState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
