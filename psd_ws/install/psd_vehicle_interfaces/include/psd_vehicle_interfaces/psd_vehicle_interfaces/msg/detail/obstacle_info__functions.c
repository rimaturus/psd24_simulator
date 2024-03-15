// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from psd_vehicle_interfaces:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice
#include "psd_vehicle_interfaces/msg/detail/obstacle_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `shape`
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
psd_vehicle_interfaces__msg__ObstacleInfo__init(psd_vehicle_interfaces__msg__ObstacleInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    psd_vehicle_interfaces__msg__ObstacleInfo__fini(msg);
    return false;
  }
  // shape
  if (!rosidl_runtime_c__String__init(&msg->shape)) {
    psd_vehicle_interfaces__msg__ObstacleInfo__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Pose2D__init(&msg->position)) {
    psd_vehicle_interfaces__msg__ObstacleInfo__fini(msg);
    return false;
  }
  // area
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    psd_vehicle_interfaces__msg__ObstacleInfo__fini(msg);
    return false;
  }
  return true;
}

void
psd_vehicle_interfaces__msg__ObstacleInfo__fini(psd_vehicle_interfaces__msg__ObstacleInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // shape
  rosidl_runtime_c__String__fini(&msg->shape);
  // position
  geometry_msgs__msg__Pose2D__fini(&msg->position);
  // area
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
}

bool
psd_vehicle_interfaces__msg__ObstacleInfo__are_equal(const psd_vehicle_interfaces__msg__ObstacleInfo * lhs, const psd_vehicle_interfaces__msg__ObstacleInfo * rhs)
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
  // shape
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // area
  if (lhs->area != rhs->area) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  return true;
}

bool
psd_vehicle_interfaces__msg__ObstacleInfo__copy(
  const psd_vehicle_interfaces__msg__ObstacleInfo * input,
  psd_vehicle_interfaces__msg__ObstacleInfo * output)
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
  // shape
  if (!rosidl_runtime_c__String__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // area
  output->area = input->area;
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  return true;
}

psd_vehicle_interfaces__msg__ObstacleInfo *
psd_vehicle_interfaces__msg__ObstacleInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  psd_vehicle_interfaces__msg__ObstacleInfo * msg = (psd_vehicle_interfaces__msg__ObstacleInfo *)allocator.allocate(sizeof(psd_vehicle_interfaces__msg__ObstacleInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(psd_vehicle_interfaces__msg__ObstacleInfo));
  bool success = psd_vehicle_interfaces__msg__ObstacleInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
psd_vehicle_interfaces__msg__ObstacleInfo__destroy(psd_vehicle_interfaces__msg__ObstacleInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    psd_vehicle_interfaces__msg__ObstacleInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__init(psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  psd_vehicle_interfaces__msg__ObstacleInfo * data = NULL;

  if (size) {
    data = (psd_vehicle_interfaces__msg__ObstacleInfo *)allocator.zero_allocate(size, sizeof(psd_vehicle_interfaces__msg__ObstacleInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = psd_vehicle_interfaces__msg__ObstacleInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        psd_vehicle_interfaces__msg__ObstacleInfo__fini(&data[i - 1]);
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
psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__fini(psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * array)
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
      psd_vehicle_interfaces__msg__ObstacleInfo__fini(&array->data[i]);
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

psd_vehicle_interfaces__msg__ObstacleInfo__Sequence *
psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * array = (psd_vehicle_interfaces__msg__ObstacleInfo__Sequence *)allocator.allocate(sizeof(psd_vehicle_interfaces__msg__ObstacleInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__destroy(psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__are_equal(const psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * lhs, const psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!psd_vehicle_interfaces__msg__ObstacleInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
psd_vehicle_interfaces__msg__ObstacleInfo__Sequence__copy(
  const psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * input,
  psd_vehicle_interfaces__msg__ObstacleInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(psd_vehicle_interfaces__msg__ObstacleInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    psd_vehicle_interfaces__msg__ObstacleInfo * data =
      (psd_vehicle_interfaces__msg__ObstacleInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!psd_vehicle_interfaces__msg__ObstacleInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          psd_vehicle_interfaces__msg__ObstacleInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!psd_vehicle_interfaces__msg__ObstacleInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
