// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_component_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

bool
control_msgs__msg__JointComponentTolerance__init(control_msgs__msg__JointComponentTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    control_msgs__msg__JointComponentTolerance__fini(msg);
    return false;
  }
  // component
  // position
  // velocity
  // acceleration
  return true;
}

void
control_msgs__msg__JointComponentTolerance__fini(control_msgs__msg__JointComponentTolerance * msg)
{
  if (!msg) {
    return;
  }
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
  // component
  // position
  // velocity
  // acceleration
}

bool
control_msgs__msg__JointComponentTolerance__are_equal(const control_msgs__msg__JointComponentTolerance * lhs, const control_msgs__msg__JointComponentTolerance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint_name), &(rhs->joint_name)))
  {
    return false;
  }
  // component
  if (lhs->component != rhs->component) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  return true;
}

bool
control_msgs__msg__JointComponentTolerance__copy(
  const control_msgs__msg__JointComponentTolerance * input,
  control_msgs__msg__JointComponentTolerance * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->joint_name), &(output->joint_name)))
  {
    return false;
  }
  // component
  output->component = input->component;
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  return true;
}

control_msgs__msg__JointComponentTolerance *
control_msgs__msg__JointComponentTolerance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointComponentTolerance * msg = (control_msgs__msg__JointComponentTolerance *)allocator.allocate(sizeof(control_msgs__msg__JointComponentTolerance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointComponentTolerance));
  bool success = control_msgs__msg__JointComponentTolerance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointComponentTolerance__destroy(control_msgs__msg__JointComponentTolerance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__JointComponentTolerance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__JointComponentTolerance__Sequence__init(control_msgs__msg__JointComponentTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointComponentTolerance * data = NULL;

  if (size) {
    data = (control_msgs__msg__JointComponentTolerance *)allocator.zero_allocate(size, sizeof(control_msgs__msg__JointComponentTolerance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointComponentTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointComponentTolerance__fini(&data[i - 1]);
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
control_msgs__msg__JointComponentTolerance__Sequence__fini(control_msgs__msg__JointComponentTolerance__Sequence * array)
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
      control_msgs__msg__JointComponentTolerance__fini(&array->data[i]);
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

control_msgs__msg__JointComponentTolerance__Sequence *
control_msgs__msg__JointComponentTolerance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointComponentTolerance__Sequence * array = (control_msgs__msg__JointComponentTolerance__Sequence *)allocator.allocate(sizeof(control_msgs__msg__JointComponentTolerance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointComponentTolerance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointComponentTolerance__Sequence__destroy(control_msgs__msg__JointComponentTolerance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__JointComponentTolerance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__JointComponentTolerance__Sequence__are_equal(const control_msgs__msg__JointComponentTolerance__Sequence * lhs, const control_msgs__msg__JointComponentTolerance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__JointComponentTolerance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__JointComponentTolerance__Sequence__copy(
  const control_msgs__msg__JointComponentTolerance__Sequence * input,
  control_msgs__msg__JointComponentTolerance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__JointComponentTolerance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__JointComponentTolerance * data =
      (control_msgs__msg__JointComponentTolerance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__JointComponentTolerance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__JointComponentTolerance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__JointComponentTolerance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
