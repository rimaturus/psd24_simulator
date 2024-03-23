// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice
#include "control_msgs/srv/detail/query_trajectory_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_msgs__srv__QueryTrajectoryState_Request__init(control_msgs__srv__QueryTrajectoryState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    control_msgs__srv__QueryTrajectoryState_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__srv__QueryTrajectoryState_Request__fini(control_msgs__srv__QueryTrajectoryState_Request * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
}

bool
control_msgs__srv__QueryTrajectoryState_Request__are_equal(const control_msgs__srv__QueryTrajectoryState_Request * lhs, const control_msgs__srv__QueryTrajectoryState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__srv__QueryTrajectoryState_Request__copy(
  const control_msgs__srv__QueryTrajectoryState_Request * input,
  control_msgs__srv__QueryTrajectoryState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

control_msgs__srv__QueryTrajectoryState_Request *
control_msgs__srv__QueryTrajectoryState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryTrajectoryState_Request * msg = (control_msgs__srv__QueryTrajectoryState_Request *)allocator.allocate(sizeof(control_msgs__srv__QueryTrajectoryState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryTrajectoryState_Request));
  bool success = control_msgs__srv__QueryTrajectoryState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryTrajectoryState_Request__destroy(control_msgs__srv__QueryTrajectoryState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__srv__QueryTrajectoryState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__srv__QueryTrajectoryState_Request__Sequence__init(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryTrajectoryState_Request * data = NULL;

  if (size) {
    data = (control_msgs__srv__QueryTrajectoryState_Request *)allocator.zero_allocate(size, sizeof(control_msgs__srv__QueryTrajectoryState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryTrajectoryState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryTrajectoryState_Request__fini(&data[i - 1]);
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
control_msgs__srv__QueryTrajectoryState_Request__Sequence__fini(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array)
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
      control_msgs__srv__QueryTrajectoryState_Request__fini(&array->data[i]);
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

control_msgs__srv__QueryTrajectoryState_Request__Sequence *
control_msgs__srv__QueryTrajectoryState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryTrajectoryState_Request__Sequence * array = (control_msgs__srv__QueryTrajectoryState_Request__Sequence *)allocator.allocate(sizeof(control_msgs__srv__QueryTrajectoryState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryTrajectoryState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryTrajectoryState_Request__Sequence__destroy(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__srv__QueryTrajectoryState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__srv__QueryTrajectoryState_Request__Sequence__are_equal(const control_msgs__srv__QueryTrajectoryState_Request__Sequence * lhs, const control_msgs__srv__QueryTrajectoryState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__srv__QueryTrajectoryState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__srv__QueryTrajectoryState_Request__Sequence__copy(
  const control_msgs__srv__QueryTrajectoryState_Request__Sequence * input,
  control_msgs__srv__QueryTrajectoryState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__srv__QueryTrajectoryState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__srv__QueryTrajectoryState_Request * data =
      (control_msgs__srv__QueryTrajectoryState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__srv__QueryTrajectoryState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__srv__QueryTrajectoryState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__srv__QueryTrajectoryState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
control_msgs__srv__QueryTrajectoryState_Response__init(control_msgs__srv__QueryTrajectoryState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__srv__QueryTrajectoryState_Response__fini(control_msgs__srv__QueryTrajectoryState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration);
}

bool
control_msgs__srv__QueryTrajectoryState_Response__are_equal(const control_msgs__srv__QueryTrajectoryState_Response * lhs, const control_msgs__srv__QueryTrajectoryState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__srv__QueryTrajectoryState_Response__copy(
  const control_msgs__srv__QueryTrajectoryState_Response * input,
  control_msgs__srv__QueryTrajectoryState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

control_msgs__srv__QueryTrajectoryState_Response *
control_msgs__srv__QueryTrajectoryState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryTrajectoryState_Response * msg = (control_msgs__srv__QueryTrajectoryState_Response *)allocator.allocate(sizeof(control_msgs__srv__QueryTrajectoryState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryTrajectoryState_Response));
  bool success = control_msgs__srv__QueryTrajectoryState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryTrajectoryState_Response__destroy(control_msgs__srv__QueryTrajectoryState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__srv__QueryTrajectoryState_Response__Sequence__init(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryTrajectoryState_Response * data = NULL;

  if (size) {
    data = (control_msgs__srv__QueryTrajectoryState_Response *)allocator.zero_allocate(size, sizeof(control_msgs__srv__QueryTrajectoryState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryTrajectoryState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryTrajectoryState_Response__fini(&data[i - 1]);
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
control_msgs__srv__QueryTrajectoryState_Response__Sequence__fini(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array)
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
      control_msgs__srv__QueryTrajectoryState_Response__fini(&array->data[i]);
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

control_msgs__srv__QueryTrajectoryState_Response__Sequence *
control_msgs__srv__QueryTrajectoryState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryTrajectoryState_Response__Sequence * array = (control_msgs__srv__QueryTrajectoryState_Response__Sequence *)allocator.allocate(sizeof(control_msgs__srv__QueryTrajectoryState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryTrajectoryState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryTrajectoryState_Response__Sequence__destroy(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__srv__QueryTrajectoryState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__srv__QueryTrajectoryState_Response__Sequence__are_equal(const control_msgs__srv__QueryTrajectoryState_Response__Sequence * lhs, const control_msgs__srv__QueryTrajectoryState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__srv__QueryTrajectoryState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__srv__QueryTrajectoryState_Response__Sequence__copy(
  const control_msgs__srv__QueryTrajectoryState_Response__Sequence * input,
  control_msgs__srv__QueryTrajectoryState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__srv__QueryTrajectoryState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__srv__QueryTrajectoryState_Response * data =
      (control_msgs__srv__QueryTrajectoryState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__srv__QueryTrajectoryState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__srv__QueryTrajectoryState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__srv__QueryTrajectoryState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
