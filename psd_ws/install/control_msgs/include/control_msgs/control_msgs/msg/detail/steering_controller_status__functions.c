// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/steering_controller_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `traction_wheels_position`
// Member `traction_wheels_velocity`
// Member `steer_positions`
// Member `linear_velocity_command`
// Member `steering_angle_command`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
control_msgs__msg__SteeringControllerStatus__init(control_msgs__msg__SteeringControllerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
    return false;
  }
  // traction_wheels_position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->traction_wheels_position, 0)) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
    return false;
  }
  // traction_wheels_velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->traction_wheels_velocity, 0)) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
    return false;
  }
  // steer_positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steer_positions, 0)) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
    return false;
  }
  // linear_velocity_command
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_velocity_command, 0)) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
    return false;
  }
  // steering_angle_command
  if (!rosidl_runtime_c__double__Sequence__init(&msg->steering_angle_command, 0)) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__SteeringControllerStatus__fini(control_msgs__msg__SteeringControllerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // traction_wheels_position
  rosidl_runtime_c__double__Sequence__fini(&msg->traction_wheels_position);
  // traction_wheels_velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->traction_wheels_velocity);
  // steer_positions
  rosidl_runtime_c__double__Sequence__fini(&msg->steer_positions);
  // linear_velocity_command
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_velocity_command);
  // steering_angle_command
  rosidl_runtime_c__double__Sequence__fini(&msg->steering_angle_command);
}

bool
control_msgs__msg__SteeringControllerStatus__are_equal(const control_msgs__msg__SteeringControllerStatus * lhs, const control_msgs__msg__SteeringControllerStatus * rhs)
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
  // traction_wheels_position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->traction_wheels_position), &(rhs->traction_wheels_position)))
  {
    return false;
  }
  // traction_wheels_velocity
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->traction_wheels_velocity), &(rhs->traction_wheels_velocity)))
  {
    return false;
  }
  // steer_positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steer_positions), &(rhs->steer_positions)))
  {
    return false;
  }
  // linear_velocity_command
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->linear_velocity_command), &(rhs->linear_velocity_command)))
  {
    return false;
  }
  // steering_angle_command
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->steering_angle_command), &(rhs->steering_angle_command)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__SteeringControllerStatus__copy(
  const control_msgs__msg__SteeringControllerStatus * input,
  control_msgs__msg__SteeringControllerStatus * output)
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
  // traction_wheels_position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->traction_wheels_position), &(output->traction_wheels_position)))
  {
    return false;
  }
  // traction_wheels_velocity
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->traction_wheels_velocity), &(output->traction_wheels_velocity)))
  {
    return false;
  }
  // steer_positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steer_positions), &(output->steer_positions)))
  {
    return false;
  }
  // linear_velocity_command
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->linear_velocity_command), &(output->linear_velocity_command)))
  {
    return false;
  }
  // steering_angle_command
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->steering_angle_command), &(output->steering_angle_command)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__SteeringControllerStatus *
control_msgs__msg__SteeringControllerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__SteeringControllerStatus * msg = (control_msgs__msg__SteeringControllerStatus *)allocator.allocate(sizeof(control_msgs__msg__SteeringControllerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__SteeringControllerStatus));
  bool success = control_msgs__msg__SteeringControllerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__SteeringControllerStatus__destroy(control_msgs__msg__SteeringControllerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__SteeringControllerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__SteeringControllerStatus__Sequence__init(control_msgs__msg__SteeringControllerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__SteeringControllerStatus * data = NULL;

  if (size) {
    data = (control_msgs__msg__SteeringControllerStatus *)allocator.zero_allocate(size, sizeof(control_msgs__msg__SteeringControllerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__SteeringControllerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__SteeringControllerStatus__fini(&data[i - 1]);
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
control_msgs__msg__SteeringControllerStatus__Sequence__fini(control_msgs__msg__SteeringControllerStatus__Sequence * array)
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
      control_msgs__msg__SteeringControllerStatus__fini(&array->data[i]);
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

control_msgs__msg__SteeringControllerStatus__Sequence *
control_msgs__msg__SteeringControllerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__SteeringControllerStatus__Sequence * array = (control_msgs__msg__SteeringControllerStatus__Sequence *)allocator.allocate(sizeof(control_msgs__msg__SteeringControllerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__SteeringControllerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__SteeringControllerStatus__Sequence__destroy(control_msgs__msg__SteeringControllerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__SteeringControllerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__SteeringControllerStatus__Sequence__are_equal(const control_msgs__msg__SteeringControllerStatus__Sequence * lhs, const control_msgs__msg__SteeringControllerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__SteeringControllerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__SteeringControllerStatus__Sequence__copy(
  const control_msgs__msg__SteeringControllerStatus__Sequence * input,
  control_msgs__msg__SteeringControllerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__SteeringControllerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__SteeringControllerStatus * data =
      (control_msgs__msg__SteeringControllerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__SteeringControllerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__SteeringControllerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__SteeringControllerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
