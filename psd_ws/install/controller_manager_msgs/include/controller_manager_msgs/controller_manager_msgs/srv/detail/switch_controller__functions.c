// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/srv/detail/switch_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `activate_controllers`
// Member `deactivate_controllers`
// Member `start_controllers`
// Member `stop_controllers`
#include "rosidl_runtime_c/string_functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
controller_manager_msgs__srv__SwitchController_Request__init(controller_manager_msgs__srv__SwitchController_Request * msg)
{
  if (!msg) {
    return false;
  }
  // activate_controllers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->activate_controllers, 0)) {
    controller_manager_msgs__srv__SwitchController_Request__fini(msg);
    return false;
  }
  // deactivate_controllers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->deactivate_controllers, 0)) {
    controller_manager_msgs__srv__SwitchController_Request__fini(msg);
    return false;
  }
  // start_controllers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->start_controllers, 0)) {
    controller_manager_msgs__srv__SwitchController_Request__fini(msg);
    return false;
  }
  // stop_controllers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->stop_controllers, 0)) {
    controller_manager_msgs__srv__SwitchController_Request__fini(msg);
    return false;
  }
  // strictness
  // start_asap
  // activate_asap
  // timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->timeout)) {
    controller_manager_msgs__srv__SwitchController_Request__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__srv__SwitchController_Request__fini(controller_manager_msgs__srv__SwitchController_Request * msg)
{
  if (!msg) {
    return;
  }
  // activate_controllers
  rosidl_runtime_c__String__Sequence__fini(&msg->activate_controllers);
  // deactivate_controllers
  rosidl_runtime_c__String__Sequence__fini(&msg->deactivate_controllers);
  // start_controllers
  rosidl_runtime_c__String__Sequence__fini(&msg->start_controllers);
  // stop_controllers
  rosidl_runtime_c__String__Sequence__fini(&msg->stop_controllers);
  // strictness
  // start_asap
  // activate_asap
  // timeout
  builtin_interfaces__msg__Duration__fini(&msg->timeout);
}

bool
controller_manager_msgs__srv__SwitchController_Request__are_equal(const controller_manager_msgs__srv__SwitchController_Request * lhs, const controller_manager_msgs__srv__SwitchController_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // activate_controllers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->activate_controllers), &(rhs->activate_controllers)))
  {
    return false;
  }
  // deactivate_controllers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->deactivate_controllers), &(rhs->deactivate_controllers)))
  {
    return false;
  }
  // start_controllers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->start_controllers), &(rhs->start_controllers)))
  {
    return false;
  }
  // stop_controllers
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->stop_controllers), &(rhs->stop_controllers)))
  {
    return false;
  }
  // strictness
  if (lhs->strictness != rhs->strictness) {
    return false;
  }
  // start_asap
  if (lhs->start_asap != rhs->start_asap) {
    return false;
  }
  // activate_asap
  if (lhs->activate_asap != rhs->activate_asap) {
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->timeout), &(rhs->timeout)))
  {
    return false;
  }
  return true;
}

bool
controller_manager_msgs__srv__SwitchController_Request__copy(
  const controller_manager_msgs__srv__SwitchController_Request * input,
  controller_manager_msgs__srv__SwitchController_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // activate_controllers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->activate_controllers), &(output->activate_controllers)))
  {
    return false;
  }
  // deactivate_controllers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->deactivate_controllers), &(output->deactivate_controllers)))
  {
    return false;
  }
  // start_controllers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->start_controllers), &(output->start_controllers)))
  {
    return false;
  }
  // stop_controllers
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->stop_controllers), &(output->stop_controllers)))
  {
    return false;
  }
  // strictness
  output->strictness = input->strictness;
  // start_asap
  output->start_asap = input->start_asap;
  // activate_asap
  output->activate_asap = input->activate_asap;
  // timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->timeout), &(output->timeout)))
  {
    return false;
  }
  return true;
}

controller_manager_msgs__srv__SwitchController_Request *
controller_manager_msgs__srv__SwitchController_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__SwitchController_Request * msg = (controller_manager_msgs__srv__SwitchController_Request *)allocator.allocate(sizeof(controller_manager_msgs__srv__SwitchController_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__srv__SwitchController_Request));
  bool success = controller_manager_msgs__srv__SwitchController_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__srv__SwitchController_Request__destroy(controller_manager_msgs__srv__SwitchController_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__srv__SwitchController_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__srv__SwitchController_Request__Sequence__init(controller_manager_msgs__srv__SwitchController_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__SwitchController_Request * data = NULL;

  if (size) {
    data = (controller_manager_msgs__srv__SwitchController_Request *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__srv__SwitchController_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__srv__SwitchController_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__srv__SwitchController_Request__fini(&data[i - 1]);
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
controller_manager_msgs__srv__SwitchController_Request__Sequence__fini(controller_manager_msgs__srv__SwitchController_Request__Sequence * array)
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
      controller_manager_msgs__srv__SwitchController_Request__fini(&array->data[i]);
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

controller_manager_msgs__srv__SwitchController_Request__Sequence *
controller_manager_msgs__srv__SwitchController_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__SwitchController_Request__Sequence * array = (controller_manager_msgs__srv__SwitchController_Request__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__srv__SwitchController_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__srv__SwitchController_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__srv__SwitchController_Request__Sequence__destroy(controller_manager_msgs__srv__SwitchController_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__srv__SwitchController_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__srv__SwitchController_Request__Sequence__are_equal(const controller_manager_msgs__srv__SwitchController_Request__Sequence * lhs, const controller_manager_msgs__srv__SwitchController_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__srv__SwitchController_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__srv__SwitchController_Request__Sequence__copy(
  const controller_manager_msgs__srv__SwitchController_Request__Sequence * input,
  controller_manager_msgs__srv__SwitchController_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__srv__SwitchController_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__srv__SwitchController_Request * data =
      (controller_manager_msgs__srv__SwitchController_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__srv__SwitchController_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__srv__SwitchController_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__srv__SwitchController_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
controller_manager_msgs__srv__SwitchController_Response__init(controller_manager_msgs__srv__SwitchController_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  return true;
}

void
controller_manager_msgs__srv__SwitchController_Response__fini(controller_manager_msgs__srv__SwitchController_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
}

bool
controller_manager_msgs__srv__SwitchController_Response__are_equal(const controller_manager_msgs__srv__SwitchController_Response * lhs, const controller_manager_msgs__srv__SwitchController_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ok
  if (lhs->ok != rhs->ok) {
    return false;
  }
  return true;
}

bool
controller_manager_msgs__srv__SwitchController_Response__copy(
  const controller_manager_msgs__srv__SwitchController_Response * input,
  controller_manager_msgs__srv__SwitchController_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ok
  output->ok = input->ok;
  return true;
}

controller_manager_msgs__srv__SwitchController_Response *
controller_manager_msgs__srv__SwitchController_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__SwitchController_Response * msg = (controller_manager_msgs__srv__SwitchController_Response *)allocator.allocate(sizeof(controller_manager_msgs__srv__SwitchController_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__srv__SwitchController_Response));
  bool success = controller_manager_msgs__srv__SwitchController_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__srv__SwitchController_Response__destroy(controller_manager_msgs__srv__SwitchController_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__srv__SwitchController_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__srv__SwitchController_Response__Sequence__init(controller_manager_msgs__srv__SwitchController_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__SwitchController_Response * data = NULL;

  if (size) {
    data = (controller_manager_msgs__srv__SwitchController_Response *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__srv__SwitchController_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__srv__SwitchController_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__srv__SwitchController_Response__fini(&data[i - 1]);
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
controller_manager_msgs__srv__SwitchController_Response__Sequence__fini(controller_manager_msgs__srv__SwitchController_Response__Sequence * array)
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
      controller_manager_msgs__srv__SwitchController_Response__fini(&array->data[i]);
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

controller_manager_msgs__srv__SwitchController_Response__Sequence *
controller_manager_msgs__srv__SwitchController_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__SwitchController_Response__Sequence * array = (controller_manager_msgs__srv__SwitchController_Response__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__srv__SwitchController_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__srv__SwitchController_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__srv__SwitchController_Response__Sequence__destroy(controller_manager_msgs__srv__SwitchController_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__srv__SwitchController_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__srv__SwitchController_Response__Sequence__are_equal(const controller_manager_msgs__srv__SwitchController_Response__Sequence * lhs, const controller_manager_msgs__srv__SwitchController_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__srv__SwitchController_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__srv__SwitchController_Response__Sequence__copy(
  const controller_manager_msgs__srv__SwitchController_Response__Sequence * input,
  controller_manager_msgs__srv__SwitchController_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__srv__SwitchController_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__srv__SwitchController_Response * data =
      (controller_manager_msgs__srv__SwitchController_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__srv__SwitchController_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__srv__SwitchController_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__srv__SwitchController_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
