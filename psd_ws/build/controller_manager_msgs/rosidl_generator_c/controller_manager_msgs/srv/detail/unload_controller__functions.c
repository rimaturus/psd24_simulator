// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from controller_manager_msgs:srv/UnloadController.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/srv/detail/unload_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
controller_manager_msgs__srv__UnloadController_Request__init(controller_manager_msgs__srv__UnloadController_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    controller_manager_msgs__srv__UnloadController_Request__fini(msg);
    return false;
  }
  return true;
}

void
controller_manager_msgs__srv__UnloadController_Request__fini(controller_manager_msgs__srv__UnloadController_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
controller_manager_msgs__srv__UnloadController_Request__are_equal(const controller_manager_msgs__srv__UnloadController_Request * lhs, const controller_manager_msgs__srv__UnloadController_Request * rhs)
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
  return true;
}

bool
controller_manager_msgs__srv__UnloadController_Request__copy(
  const controller_manager_msgs__srv__UnloadController_Request * input,
  controller_manager_msgs__srv__UnloadController_Request * output)
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
  return true;
}

controller_manager_msgs__srv__UnloadController_Request *
controller_manager_msgs__srv__UnloadController_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__UnloadController_Request * msg = (controller_manager_msgs__srv__UnloadController_Request *)allocator.allocate(sizeof(controller_manager_msgs__srv__UnloadController_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__srv__UnloadController_Request));
  bool success = controller_manager_msgs__srv__UnloadController_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__srv__UnloadController_Request__destroy(controller_manager_msgs__srv__UnloadController_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__srv__UnloadController_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__srv__UnloadController_Request__Sequence__init(controller_manager_msgs__srv__UnloadController_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__UnloadController_Request * data = NULL;

  if (size) {
    data = (controller_manager_msgs__srv__UnloadController_Request *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__srv__UnloadController_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__srv__UnloadController_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__srv__UnloadController_Request__fini(&data[i - 1]);
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
controller_manager_msgs__srv__UnloadController_Request__Sequence__fini(controller_manager_msgs__srv__UnloadController_Request__Sequence * array)
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
      controller_manager_msgs__srv__UnloadController_Request__fini(&array->data[i]);
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

controller_manager_msgs__srv__UnloadController_Request__Sequence *
controller_manager_msgs__srv__UnloadController_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__UnloadController_Request__Sequence * array = (controller_manager_msgs__srv__UnloadController_Request__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__srv__UnloadController_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__srv__UnloadController_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__srv__UnloadController_Request__Sequence__destroy(controller_manager_msgs__srv__UnloadController_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__srv__UnloadController_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__srv__UnloadController_Request__Sequence__are_equal(const controller_manager_msgs__srv__UnloadController_Request__Sequence * lhs, const controller_manager_msgs__srv__UnloadController_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__srv__UnloadController_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__srv__UnloadController_Request__Sequence__copy(
  const controller_manager_msgs__srv__UnloadController_Request__Sequence * input,
  controller_manager_msgs__srv__UnloadController_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__srv__UnloadController_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__srv__UnloadController_Request * data =
      (controller_manager_msgs__srv__UnloadController_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__srv__UnloadController_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__srv__UnloadController_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__srv__UnloadController_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
controller_manager_msgs__srv__UnloadController_Response__init(controller_manager_msgs__srv__UnloadController_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  return true;
}

void
controller_manager_msgs__srv__UnloadController_Response__fini(controller_manager_msgs__srv__UnloadController_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
}

bool
controller_manager_msgs__srv__UnloadController_Response__are_equal(const controller_manager_msgs__srv__UnloadController_Response * lhs, const controller_manager_msgs__srv__UnloadController_Response * rhs)
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
controller_manager_msgs__srv__UnloadController_Response__copy(
  const controller_manager_msgs__srv__UnloadController_Response * input,
  controller_manager_msgs__srv__UnloadController_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ok
  output->ok = input->ok;
  return true;
}

controller_manager_msgs__srv__UnloadController_Response *
controller_manager_msgs__srv__UnloadController_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__UnloadController_Response * msg = (controller_manager_msgs__srv__UnloadController_Response *)allocator.allocate(sizeof(controller_manager_msgs__srv__UnloadController_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(controller_manager_msgs__srv__UnloadController_Response));
  bool success = controller_manager_msgs__srv__UnloadController_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
controller_manager_msgs__srv__UnloadController_Response__destroy(controller_manager_msgs__srv__UnloadController_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    controller_manager_msgs__srv__UnloadController_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
controller_manager_msgs__srv__UnloadController_Response__Sequence__init(controller_manager_msgs__srv__UnloadController_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__UnloadController_Response * data = NULL;

  if (size) {
    data = (controller_manager_msgs__srv__UnloadController_Response *)allocator.zero_allocate(size, sizeof(controller_manager_msgs__srv__UnloadController_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = controller_manager_msgs__srv__UnloadController_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        controller_manager_msgs__srv__UnloadController_Response__fini(&data[i - 1]);
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
controller_manager_msgs__srv__UnloadController_Response__Sequence__fini(controller_manager_msgs__srv__UnloadController_Response__Sequence * array)
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
      controller_manager_msgs__srv__UnloadController_Response__fini(&array->data[i]);
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

controller_manager_msgs__srv__UnloadController_Response__Sequence *
controller_manager_msgs__srv__UnloadController_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  controller_manager_msgs__srv__UnloadController_Response__Sequence * array = (controller_manager_msgs__srv__UnloadController_Response__Sequence *)allocator.allocate(sizeof(controller_manager_msgs__srv__UnloadController_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = controller_manager_msgs__srv__UnloadController_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
controller_manager_msgs__srv__UnloadController_Response__Sequence__destroy(controller_manager_msgs__srv__UnloadController_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    controller_manager_msgs__srv__UnloadController_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
controller_manager_msgs__srv__UnloadController_Response__Sequence__are_equal(const controller_manager_msgs__srv__UnloadController_Response__Sequence * lhs, const controller_manager_msgs__srv__UnloadController_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!controller_manager_msgs__srv__UnloadController_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
controller_manager_msgs__srv__UnloadController_Response__Sequence__copy(
  const controller_manager_msgs__srv__UnloadController_Response__Sequence * input,
  controller_manager_msgs__srv__UnloadController_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(controller_manager_msgs__srv__UnloadController_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    controller_manager_msgs__srv__UnloadController_Response * data =
      (controller_manager_msgs__srv__UnloadController_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!controller_manager_msgs__srv__UnloadController_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          controller_manager_msgs__srv__UnloadController_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!controller_manager_msgs__srv__UnloadController_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
