// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/hardware_component_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `type`
// Member `class_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
#include "lifecycle_msgs/msg/detail/state__functions.h"
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/detail/hardware_interface__functions.h"

bool
controller_manager_msgs__msg__HardwareComponentState__init(controller_manager_msgs__msg__HardwareComponentState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // class_type
  if (!rosidl_runtime_c__String__init(&msg->class_type)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // state
  if (!lifecycle_msgs__msg__State__init(&msg->state)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // command_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__init(&msg->command_interfaces, 0)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  // state_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__init(&msg->state_interfaces, 0)) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__msg__HardwareComponentState__fini(controller_manager_msgs__msg__HardwareComponentState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // class_type
  rosidl_runtime_c__String__fini(&msg->class_type);
  // state
  lifecycle_msgs__msg__State__fini(&msg->state);
  // command_interfaces
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(&msg->command_interfaces);
  // state_interfaces
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(&msg->state_interfaces);
}

bool
controller_manager_msgs__msg__HardwareComponentState__are_equal(const controller_manager_msgs__msg__HardwareComponentState * lhs, const controller_manager_msgs__msg__HardwareComponentState * rhs)
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
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // class_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_type), &(rhs->class_type)))
  {
    return false;
  }
  // state
  if (!lifecycle_msgs__msg__State__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // command_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__are_equal(
      &(lhs->command_interfaces), &(rhs->command_interfaces)))
  {
    return false;
  }
  // state_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__are_equal(
      &(lhs->state_interfaces), &(rhs->state_interfaces)))
  {
    return false;
  }
  return true;
}

bool
controller_manager_msgs__msg__HardwareComponentState__copy(
  const controller_manager_msgs__msg__HardwareComponentState * input,
  controller_manager_msgs__msg__HardwareComponentState * output)
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
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // class_type
  if (!rosidl_runtime_c__String__copy(
      &(input->class_type), &(output->class_type)))
  {
    return false;
  }
  // state
  if (!lifecycle_msgs__msg__State__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // command_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__copy(
      &(input->command_interfaces), &(output->command_interfaces)))
  {
    return false;
  }
  // state_interfaces
  if (!controller_manager_msgs__msg__HardwareInterface__Sequence__copy(
      &(input->state_interfaces), &(output->state_interfaces)))
  {
    return false;
  }
  return true;
}

controller_manager_msgs__msg__HardwareComponentState *
controller_manager_msgs__msg__HardwareComponentState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__HardwareComponentState * msg = (controller_manager_msgs__msg__HardwareComponentState *)allocator.allocate(sizeof(controller_manager_msgs__msg__HardwareComponentState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__msg__HardwareComponentState));
  bool success = controller_manager_msgs__msg__HardwareComponentState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__msg__HardwareComponentState__destroy(controller_manager_msgs__msg__HardwareComponentState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__msg__HardwareComponentState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__msg__HardwareComponentState__Sequence__init(controller_manager_msgs__msg__HardwareComponentState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__HardwareComponentState * data = NULL;

  if (size) {
    data = (controller_manager_msgs__msg__HardwareComponentState *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__msg__HardwareComponentState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__msg__HardwareComponentState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__msg__HardwareComponentState__fini(&data[i - 1]);
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
controller_manager_msgs__msg__HardwareComponentState__Sequence__fini(controller_manager_msgs__msg__HardwareComponentState__Sequence * array)
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
      controller_manager_msgs__msg__HardwareComponentState__fini(&array->data[i]);
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

controller_manager_msgs__msg__HardwareComponentState__Sequence *
controller_manager_msgs__msg__HardwareComponentState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__HardwareComponentState__Sequence * array = (controller_manager_msgs__msg__HardwareComponentState__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__msg__HardwareComponentState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__msg__HardwareComponentState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__msg__HardwareComponentState__Sequence__destroy(controller_manager_msgs__msg__HardwareComponentState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__msg__HardwareComponentState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__msg__HardwareComponentState__Sequence__are_equal(const controller_manager_msgs__msg__HardwareComponentState__Sequence * lhs, const controller_manager_msgs__msg__HardwareComponentState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__msg__HardwareComponentState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__msg__HardwareComponentState__Sequence__copy(
  const controller_manager_msgs__msg__HardwareComponentState__Sequence * input,
  controller_manager_msgs__msg__HardwareComponentState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__msg__HardwareComponentState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__msg__HardwareComponentState * data =
      (controller_manager_msgs__msg__HardwareComponentState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__msg__HardwareComponentState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__msg__HardwareComponentState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__msg__HardwareComponentState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
