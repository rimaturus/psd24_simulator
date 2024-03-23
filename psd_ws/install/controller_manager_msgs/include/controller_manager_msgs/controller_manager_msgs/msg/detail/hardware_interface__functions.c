// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
controller_manager_msgs__msg__HardwareInterface__init(controller_manager_msgs__msg__HardwareInterface * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__msg__HardwareInterface__fini(msg);
    return false;
  }
  // is_available
  // is_claimed
  return true;
}

void
controller_manager_msgs__msg__HardwareInterface__fini(controller_manager_msgs__msg__HardwareInterface * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // is_available
  // is_claimed
}

bool
controller_manager_msgs__msg__HardwareInterface__are_equal(const controller_manager_msgs__msg__HardwareInterface * lhs, const controller_manager_msgs__msg__HardwareInterface * rhs)
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
  // is_available
  if (lhs->is_available != rhs->is_available) {
    return false;
  }
  // is_claimed
  if (lhs->is_claimed != rhs->is_claimed) {
    return false;
  }
  return true;
}

bool
controller_manager_msgs__msg__HardwareInterface__copy(
  const controller_manager_msgs__msg__HardwareInterface * input,
  controller_manager_msgs__msg__HardwareInterface * output)
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
  // is_available
  output->is_available = input->is_available;
  // is_claimed
  output->is_claimed = input->is_claimed;
  return true;
}

controller_manager_msgs__msg__HardwareInterface *
controller_manager_msgs__msg__HardwareInterface__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__HardwareInterface * msg = (controller_manager_msgs__msg__HardwareInterface *)allocator.allocate(sizeof(controller_manager_msgs__msg__HardwareInterface), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__msg__HardwareInterface));
  bool success = controller_manager_msgs__msg__HardwareInterface__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__msg__HardwareInterface__destroy(controller_manager_msgs__msg__HardwareInterface * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__msg__HardwareInterface__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__msg__HardwareInterface__Sequence__init(controller_manager_msgs__msg__HardwareInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__HardwareInterface * data = NULL;

  if (size) {
    data = (controller_manager_msgs__msg__HardwareInterface *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__msg__HardwareInterface), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__msg__HardwareInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__msg__HardwareInterface__fini(&data[i - 1]);
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
controller_manager_msgs__msg__HardwareInterface__Sequence__fini(controller_manager_msgs__msg__HardwareInterface__Sequence * array)
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
      controller_manager_msgs__msg__HardwareInterface__fini(&array->data[i]);
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

controller_manager_msgs__msg__HardwareInterface__Sequence *
controller_manager_msgs__msg__HardwareInterface__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__HardwareInterface__Sequence * array = (controller_manager_msgs__msg__HardwareInterface__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__msg__HardwareInterface__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__msg__HardwareInterface__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__msg__HardwareInterface__Sequence__destroy(controller_manager_msgs__msg__HardwareInterface__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__msg__HardwareInterface__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__msg__HardwareInterface__Sequence__are_equal(const controller_manager_msgs__msg__HardwareInterface__Sequence * lhs, const controller_manager_msgs__msg__HardwareInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__msg__HardwareInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__msg__HardwareInterface__Sequence__copy(
  const controller_manager_msgs__msg__HardwareInterface__Sequence * input,
  controller_manager_msgs__msg__HardwareInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__msg__HardwareInterface);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__msg__HardwareInterface * data =
      (controller_manager_msgs__msg__HardwareInterface *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__msg__HardwareInterface__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__msg__HardwareInterface__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__msg__HardwareInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
