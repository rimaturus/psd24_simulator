// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/JointJog.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/joint_jog__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `displacements`
// Member `velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
control_msgs__msg__JointJog__init(control_msgs__msg__JointJog * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__JointJog__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    control_msgs__msg__JointJog__fini(msg);
    return false;
  }
  // displacements
  if (!rosidl_runtime_c__double__Sequence__init(&msg->displacements, 0)) {
    control_msgs__msg__JointJog__fini(msg);
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocities, 0)) {
    control_msgs__msg__JointJog__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
control_msgs__msg__JointJog__fini(control_msgs__msg__JointJog * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // displacements
  rosidl_runtime_c__double__Sequence__fini(&msg->displacements);
  // velocities
  rosidl_runtime_c__double__Sequence__fini(&msg->velocities);
  // duration
}

bool
control_msgs__msg__JointJog__are_equal(const control_msgs__msg__JointJog * lhs, const control_msgs__msg__JointJog * rhs)
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
  // displacements
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->displacements), &(rhs->displacements)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocities), &(rhs->velocities)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
control_msgs__msg__JointJog__copy(
  const control_msgs__msg__JointJog * input,
  control_msgs__msg__JointJog * output)
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
  // displacements
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->displacements), &(output->displacements)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocities), &(output->velocities)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

control_msgs__msg__JointJog *
control_msgs__msg__JointJog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointJog * msg = (control_msgs__msg__JointJog *)allocator.allocate(sizeof(control_msgs__msg__JointJog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__JointJog));
  bool success = control_msgs__msg__JointJog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__JointJog__destroy(control_msgs__msg__JointJog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__JointJog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__JointJog__Sequence__init(control_msgs__msg__JointJog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointJog * data = NULL;

  if (size) {
    data = (control_msgs__msg__JointJog *)allocator.zero_allocate(size, sizeof(control_msgs__msg__JointJog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__JointJog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__JointJog__fini(&data[i - 1]);
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
control_msgs__msg__JointJog__Sequence__fini(control_msgs__msg__JointJog__Sequence * array)
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
      control_msgs__msg__JointJog__fini(&array->data[i]);
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

control_msgs__msg__JointJog__Sequence *
control_msgs__msg__JointJog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__JointJog__Sequence * array = (control_msgs__msg__JointJog__Sequence *)allocator.allocate(sizeof(control_msgs__msg__JointJog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__JointJog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__JointJog__Sequence__destroy(control_msgs__msg__JointJog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__JointJog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__JointJog__Sequence__are_equal(const control_msgs__msg__JointJog__Sequence * lhs, const control_msgs__msg__JointJog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__JointJog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__JointJog__Sequence__copy(
  const control_msgs__msg__JointJog__Sequence * input,
  control_msgs__msg__JointJog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__JointJog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__JointJog * data =
      (control_msgs__msg__JointJog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__JointJog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__JointJog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__JointJog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
