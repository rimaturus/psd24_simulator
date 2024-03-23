// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
control_msgs__msg__JointTolerance__init(control_msgs__msg__JointTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    control_msgs__msg__JointTolerance__fini(msg);
    return false;
  }
  // position
  // velocity
  // acceleration
  return true;
}

void
control_msgs__msg__JointTolerance__fini(control_msgs__msg__JointTolerance * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // position
  // velocity
  // acceleration
}

bool
control_msgs__msg__JointTolerance__are_equal(const control_msgs__msg__JointTolerance * lhs, const control_msgs__msg__JointTolerance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
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
control_msgs__msg__JointTolerance__copy(
  const control_msgs__msg__JointTolerance * input,
  control_msgs__msg__JointTolerance * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  return true;
}

control_msgs__msg__JointTolerance *
control_msgs__msg__JointTolerance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointTolerance * msg = (control_msgs__msg__JointTolerance *)allocator.allocate(sizeof(control_msgs__msg__JointTolerance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointTolerance));
  bool success = control_msgs__msg__JointTolerance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointTolerance__destroy(control_msgs__msg__JointTolerance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__JointTolerance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__JointTolerance__Sequence__init(control_msgs__msg__JointTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointTolerance * data = NULL;

  if (size) {
    data = (control_msgs__msg__JointTolerance *)allocator.zero_allocate(size, sizeof(control_msgs__msg__JointTolerance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointTolerance__fini(&data[i - 1]);
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
control_msgs__msg__JointTolerance__Sequence__fini(control_msgs__msg__JointTolerance__Sequence * array)
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
      control_msgs__msg__JointTolerance__fini(&array->data[i]);
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

control_msgs__msg__JointTolerance__Sequence *
control_msgs__msg__JointTolerance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointTolerance__Sequence * array = (control_msgs__msg__JointTolerance__Sequence *)allocator.allocate(sizeof(control_msgs__msg__JointTolerance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointTolerance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointTolerance__Sequence__destroy(control_msgs__msg__JointTolerance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__JointTolerance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__JointTolerance__Sequence__are_equal(const control_msgs__msg__JointTolerance__Sequence * lhs, const control_msgs__msg__JointTolerance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__JointTolerance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__JointTolerance__Sequence__copy(
  const control_msgs__msg__JointTolerance__Sequence * input,
  control_msgs__msg__JointTolerance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__JointTolerance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__JointTolerance * data =
      (control_msgs__msg__JointTolerance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__JointTolerance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__JointTolerance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__JointTolerance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
