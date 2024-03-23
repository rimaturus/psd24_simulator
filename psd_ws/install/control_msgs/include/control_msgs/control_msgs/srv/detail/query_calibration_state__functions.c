// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice
#include "control_msgs/srv/detail/query_calibration_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
control_msgs__srv__QueryCalibrationState_Request__init(control_msgs__srv__QueryCalibrationState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
control_msgs__srv__QueryCalibrationState_Request__fini(control_msgs__srv__QueryCalibrationState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
control_msgs__srv__QueryCalibrationState_Request__are_equal(const control_msgs__srv__QueryCalibrationState_Request * lhs, const control_msgs__srv__QueryCalibrationState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
control_msgs__srv__QueryCalibrationState_Request__copy(
  const control_msgs__srv__QueryCalibrationState_Request * input,
  control_msgs__srv__QueryCalibrationState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

control_msgs__srv__QueryCalibrationState_Request *
control_msgs__srv__QueryCalibrationState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryCalibrationState_Request * msg = (control_msgs__srv__QueryCalibrationState_Request *)allocator.allocate(sizeof(control_msgs__srv__QueryCalibrationState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryCalibrationState_Request));
  bool success = control_msgs__srv__QueryCalibrationState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryCalibrationState_Request__destroy(control_msgs__srv__QueryCalibrationState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__srv__QueryCalibrationState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__srv__QueryCalibrationState_Request__Sequence__init(control_msgs__srv__QueryCalibrationState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryCalibrationState_Request * data = NULL;

  if (size) {
    data = (control_msgs__srv__QueryCalibrationState_Request *)allocator.zero_allocate(size, sizeof(control_msgs__srv__QueryCalibrationState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryCalibrationState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryCalibrationState_Request__fini(&data[i - 1]);
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
control_msgs__srv__QueryCalibrationState_Request__Sequence__fini(control_msgs__srv__QueryCalibrationState_Request__Sequence * array)
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
      control_msgs__srv__QueryCalibrationState_Request__fini(&array->data[i]);
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

control_msgs__srv__QueryCalibrationState_Request__Sequence *
control_msgs__srv__QueryCalibrationState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryCalibrationState_Request__Sequence * array = (control_msgs__srv__QueryCalibrationState_Request__Sequence *)allocator.allocate(sizeof(control_msgs__srv__QueryCalibrationState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryCalibrationState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryCalibrationState_Request__Sequence__destroy(control_msgs__srv__QueryCalibrationState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__srv__QueryCalibrationState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__srv__QueryCalibrationState_Request__Sequence__are_equal(const control_msgs__srv__QueryCalibrationState_Request__Sequence * lhs, const control_msgs__srv__QueryCalibrationState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__srv__QueryCalibrationState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__srv__QueryCalibrationState_Request__Sequence__copy(
  const control_msgs__srv__QueryCalibrationState_Request__Sequence * input,
  control_msgs__srv__QueryCalibrationState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__srv__QueryCalibrationState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__srv__QueryCalibrationState_Request * data =
      (control_msgs__srv__QueryCalibrationState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__srv__QueryCalibrationState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__srv__QueryCalibrationState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__srv__QueryCalibrationState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
control_msgs__srv__QueryCalibrationState_Response__init(control_msgs__srv__QueryCalibrationState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_calibrated
  return true;
}

void
control_msgs__srv__QueryCalibrationState_Response__fini(control_msgs__srv__QueryCalibrationState_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_calibrated
}

bool
control_msgs__srv__QueryCalibrationState_Response__are_equal(const control_msgs__srv__QueryCalibrationState_Response * lhs, const control_msgs__srv__QueryCalibrationState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_calibrated
  if (lhs->is_calibrated != rhs->is_calibrated) {
    return false;
  }
  return true;
}

bool
control_msgs__srv__QueryCalibrationState_Response__copy(
  const control_msgs__srv__QueryCalibrationState_Response * input,
  control_msgs__srv__QueryCalibrationState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_calibrated
  output->is_calibrated = input->is_calibrated;
  return true;
}

control_msgs__srv__QueryCalibrationState_Response *
control_msgs__srv__QueryCalibrationState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryCalibrationState_Response * msg = (control_msgs__srv__QueryCalibrationState_Response *)allocator.allocate(sizeof(control_msgs__srv__QueryCalibrationState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryCalibrationState_Response));
  bool success = control_msgs__srv__QueryCalibrationState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryCalibrationState_Response__destroy(control_msgs__srv__QueryCalibrationState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__srv__QueryCalibrationState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__srv__QueryCalibrationState_Response__Sequence__init(control_msgs__srv__QueryCalibrationState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryCalibrationState_Response * data = NULL;

  if (size) {
    data = (control_msgs__srv__QueryCalibrationState_Response *)allocator.zero_allocate(size, sizeof(control_msgs__srv__QueryCalibrationState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryCalibrationState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryCalibrationState_Response__fini(&data[i - 1]);
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
control_msgs__srv__QueryCalibrationState_Response__Sequence__fini(control_msgs__srv__QueryCalibrationState_Response__Sequence * array)
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
      control_msgs__srv__QueryCalibrationState_Response__fini(&array->data[i]);
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

control_msgs__srv__QueryCalibrationState_Response__Sequence *
control_msgs__srv__QueryCalibrationState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__srv__QueryCalibrationState_Response__Sequence * array = (control_msgs__srv__QueryCalibrationState_Response__Sequence *)allocator.allocate(sizeof(control_msgs__srv__QueryCalibrationState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryCalibrationState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryCalibrationState_Response__Sequence__destroy(control_msgs__srv__QueryCalibrationState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__srv__QueryCalibrationState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__srv__QueryCalibrationState_Response__Sequence__are_equal(const control_msgs__srv__QueryCalibrationState_Response__Sequence * lhs, const control_msgs__srv__QueryCalibrationState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__srv__QueryCalibrationState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__srv__QueryCalibrationState_Response__Sequence__copy(
  const control_msgs__srv__QueryCalibrationState_Response__Sequence * input,
  control_msgs__srv__QueryCalibrationState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__srv__QueryCalibrationState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__srv__QueryCalibrationState_Response * data =
      (control_msgs__srv__QueryCalibrationState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__srv__QueryCalibrationState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__srv__QueryCalibrationState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__srv__QueryCalibrationState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
