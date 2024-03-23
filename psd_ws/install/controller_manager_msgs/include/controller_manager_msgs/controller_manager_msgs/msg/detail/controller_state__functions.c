// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `state`
// Member `type`
// Member `claimed_interfaces`
// Member `required_command_interfaces`
// Member `required_state_interfaces`
// Member `reference_interfaces`
#include "rosidl_runtime_c/string_functions.h"
// Member `chain_connections`
#include "controller_manager_msgs/msg/detail/chain_connection__functions.h"

bool
controller_manager_msgs__msg__ControllerState__init(controller_manager_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // claimed_interfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->claimed_interfaces, 0)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // required_command_interfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->required_command_interfaces, 0)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // required_state_interfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->required_state_interfaces, 0)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // is_chainable
  // is_chained
  // reference_interfaces
  if (!rosidl_runtime_c__String__Sequence__init(&msg->reference_interfaces, 0)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  // chain_connections
  if (!controller_manager_msgs__msg__ChainConnection__Sequence__init(&msg->chain_connections, 0)) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__msg__ControllerState__fini(controller_manager_msgs__msg__ControllerState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // claimed_interfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->claimed_interfaces);
  // required_command_interfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->required_command_interfaces);
  // required_state_interfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->required_state_interfaces);
  // is_chainable
  // is_chained
  // reference_interfaces
  rosidl_runtime_c__String__Sequence__fini(&msg->reference_interfaces);
  // chain_connections
  controller_manager_msgs__msg__ChainConnection__Sequence__fini(&msg->chain_connections);
}

bool
controller_manager_msgs__msg__ControllerState__are_equal(const controller_manager_msgs__msg__ControllerState * lhs, const controller_manager_msgs__msg__ControllerState * rhs)
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
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // claimed_interfaces
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->claimed_interfaces), &(rhs->claimed_interfaces)))
  {
    return false;
  }
  // required_command_interfaces
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->required_command_interfaces), &(rhs->required_command_interfaces)))
  {
    return false;
  }
  // required_state_interfaces
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->required_state_interfaces), &(rhs->required_state_interfaces)))
  {
    return false;
  }
  // is_chainable
  if (lhs->is_chainable != rhs->is_chainable) {
    return false;
  }
  // is_chained
  if (lhs->is_chained != rhs->is_chained) {
    return false;
  }
  // reference_interfaces
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->reference_interfaces), &(rhs->reference_interfaces)))
  {
    return false;
  }
  // chain_connections
  if (!controller_manager_msgs__msg__ChainConnection__Sequence__are_equal(
      &(lhs->chain_connections), &(rhs->chain_connections)))
  {
    return false;
  }
  return true;
}

bool
controller_manager_msgs__msg__ControllerState__copy(
  const controller_manager_msgs__msg__ControllerState * input,
  controller_manager_msgs__msg__ControllerState * output)
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
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // claimed_interfaces
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->claimed_interfaces), &(output->claimed_interfaces)))
  {
    return false;
  }
  // required_command_interfaces
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->required_command_interfaces), &(output->required_command_interfaces)))
  {
    return false;
  }
  // required_state_interfaces
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->required_state_interfaces), &(output->required_state_interfaces)))
  {
    return false;
  }
  // is_chainable
  output->is_chainable = input->is_chainable;
  // is_chained
  output->is_chained = input->is_chained;
  // reference_interfaces
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->reference_interfaces), &(output->reference_interfaces)))
  {
    return false;
  }
  // chain_connections
  if (!controller_manager_msgs__msg__ChainConnection__Sequence__copy(
      &(input->chain_connections), &(output->chain_connections)))
  {
    return false;
  }
  return true;
}

controller_manager_msgs__msg__ControllerState *
controller_manager_msgs__msg__ControllerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__ControllerState * msg = (controller_manager_msgs__msg__ControllerState *)allocator.allocate(sizeof(controller_manager_msgs__msg__ControllerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__msg__ControllerState));
  bool success = controller_manager_msgs__msg__ControllerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__msg__ControllerState__destroy(controller_manager_msgs__msg__ControllerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__msg__ControllerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__msg__ControllerState__Sequence__init(controller_manager_msgs__msg__ControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__ControllerState * data = NULL;

  if (size) {
    data = (controller_manager_msgs__msg__ControllerState *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__msg__ControllerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__msg__ControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__msg__ControllerState__fini(&data[i - 1]);
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
controller_manager_msgs__msg__ControllerState__Sequence__fini(controller_manager_msgs__msg__ControllerState__Sequence * array)
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
      controller_manager_msgs__msg__ControllerState__fini(&array->data[i]);
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

controller_manager_msgs__msg__ControllerState__Sequence *
controller_manager_msgs__msg__ControllerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__msg__ControllerState__Sequence * array = (controller_manager_msgs__msg__ControllerState__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__msg__ControllerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__msg__ControllerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__msg__ControllerState__Sequence__destroy(controller_manager_msgs__msg__ControllerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__msg__ControllerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__msg__ControllerState__Sequence__are_equal(const controller_manager_msgs__msg__ControllerState__Sequence * lhs, const controller_manager_msgs__msg__ControllerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__msg__ControllerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__msg__ControllerState__Sequence__copy(
  const controller_manager_msgs__msg__ControllerState__Sequence * input,
  controller_manager_msgs__msg__ControllerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__msg__ControllerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__msg__ControllerState * data =
      (controller_manager_msgs__msg__ControllerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__msg__ControllerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__msg__ControllerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__msg__ControllerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
