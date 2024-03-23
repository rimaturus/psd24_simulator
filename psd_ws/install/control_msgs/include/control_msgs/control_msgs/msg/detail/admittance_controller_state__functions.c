// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/admittance_controller_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mass`
// Member `damping`
// Member `stiffness`
#include "std_msgs/msg/detail/float64_multi_array__functions.h"
// Member `rot_base_control`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `ref_trans_base_ft`
// Member `admittance_position`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `selected_axes`
#include "std_msgs/msg/detail/int8_multi_array__functions.h"
// Member `ft_sensor_frame`
#include "std_msgs/msg/detail/string__functions.h"
// Member `admittance_acceleration`
// Member `admittance_velocity`
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"
// Member `wrench_base`
#include "geometry_msgs/msg/detail/wrench_stamped__functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
control_msgs__msg__AdmittanceControllerState__init(control_msgs__msg__AdmittanceControllerState * msg)
{
  if (!msg) {
    return false;
  }
  // mass
  if (!std_msgs__msg__Float64MultiArray__init(&msg->mass)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // damping
  if (!std_msgs__msg__Float64MultiArray__init(&msg->damping)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // stiffness
  if (!std_msgs__msg__Float64MultiArray__init(&msg->stiffness)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // rot_base_control
  if (!geometry_msgs__msg__Quaternion__init(&msg->rot_base_control)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // ref_trans_base_ft
  if (!geometry_msgs__msg__TransformStamped__init(&msg->ref_trans_base_ft)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // selected_axes
  if (!std_msgs__msg__Int8MultiArray__init(&msg->selected_axes)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // ft_sensor_frame
  if (!std_msgs__msg__String__init(&msg->ft_sensor_frame)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // admittance_position
  if (!geometry_msgs__msg__TransformStamped__init(&msg->admittance_position)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // admittance_acceleration
  if (!geometry_msgs__msg__TwistStamped__init(&msg->admittance_acceleration)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // admittance_velocity
  if (!geometry_msgs__msg__TwistStamped__init(&msg->admittance_velocity)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // wrench_base
  if (!geometry_msgs__msg__WrenchStamped__init(&msg->wrench_base)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__msg__AdmittanceControllerState__fini(control_msgs__msg__AdmittanceControllerState * msg)
{
  if (!msg) {
    return;
  }
  // mass
  std_msgs__msg__Float64MultiArray__fini(&msg->mass);
  // damping
  std_msgs__msg__Float64MultiArray__fini(&msg->damping);
  // stiffness
  std_msgs__msg__Float64MultiArray__fini(&msg->stiffness);
  // rot_base_control
  geometry_msgs__msg__Quaternion__fini(&msg->rot_base_control);
  // ref_trans_base_ft
  geometry_msgs__msg__TransformStamped__fini(&msg->ref_trans_base_ft);
  // selected_axes
  std_msgs__msg__Int8MultiArray__fini(&msg->selected_axes);
  // ft_sensor_frame
  std_msgs__msg__String__fini(&msg->ft_sensor_frame);
  // admittance_position
  geometry_msgs__msg__TransformStamped__fini(&msg->admittance_position);
  // admittance_acceleration
  geometry_msgs__msg__TwistStamped__fini(&msg->admittance_acceleration);
  // admittance_velocity
  geometry_msgs__msg__TwistStamped__fini(&msg->admittance_velocity);
  // wrench_base
  geometry_msgs__msg__WrenchStamped__fini(&msg->wrench_base);
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
}

bool
control_msgs__msg__AdmittanceControllerState__are_equal(const control_msgs__msg__AdmittanceControllerState * lhs, const control_msgs__msg__AdmittanceControllerState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mass
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->mass), &(rhs->mass)))
  {
    return false;
  }
  // damping
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->damping), &(rhs->damping)))
  {
    return false;
  }
  // stiffness
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->stiffness), &(rhs->stiffness)))
  {
    return false;
  }
  // rot_base_control
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->rot_base_control), &(rhs->rot_base_control)))
  {
    return false;
  }
  // ref_trans_base_ft
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->ref_trans_base_ft), &(rhs->ref_trans_base_ft)))
  {
    return false;
  }
  // selected_axes
  if (!std_msgs__msg__Int8MultiArray__are_equal(
      &(lhs->selected_axes), &(rhs->selected_axes)))
  {
    return false;
  }
  // ft_sensor_frame
  if (!std_msgs__msg__String__are_equal(
      &(lhs->ft_sensor_frame), &(rhs->ft_sensor_frame)))
  {
    return false;
  }
  // admittance_position
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->admittance_position), &(rhs->admittance_position)))
  {
    return false;
  }
  // admittance_acceleration
  if (!geometry_msgs__msg__TwistStamped__are_equal(
      &(lhs->admittance_acceleration), &(rhs->admittance_acceleration)))
  {
    return false;
  }
  // admittance_velocity
  if (!geometry_msgs__msg__TwistStamped__are_equal(
      &(lhs->admittance_velocity), &(rhs->admittance_velocity)))
  {
    return false;
  }
  // wrench_base
  if (!geometry_msgs__msg__WrenchStamped__are_equal(
      &(lhs->wrench_base), &(rhs->wrench_base)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  return true;
}

bool
control_msgs__msg__AdmittanceControllerState__copy(
  const control_msgs__msg__AdmittanceControllerState * input,
  control_msgs__msg__AdmittanceControllerState * output)
{
  if (!input || !output) {
    return false;
  }
  // mass
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->mass), &(output->mass)))
  {
    return false;
  }
  // damping
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->damping), &(output->damping)))
  {
    return false;
  }
  // stiffness
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->stiffness), &(output->stiffness)))
  {
    return false;
  }
  // rot_base_control
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->rot_base_control), &(output->rot_base_control)))
  {
    return false;
  }
  // ref_trans_base_ft
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->ref_trans_base_ft), &(output->ref_trans_base_ft)))
  {
    return false;
  }
  // selected_axes
  if (!std_msgs__msg__Int8MultiArray__copy(
      &(input->selected_axes), &(output->selected_axes)))
  {
    return false;
  }
  // ft_sensor_frame
  if (!std_msgs__msg__String__copy(
      &(input->ft_sensor_frame), &(output->ft_sensor_frame)))
  {
    return false;
  }
  // admittance_position
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->admittance_position), &(output->admittance_position)))
  {
    return false;
  }
  // admittance_acceleration
  if (!geometry_msgs__msg__TwistStamped__copy(
      &(input->admittance_acceleration), &(output->admittance_acceleration)))
  {
    return false;
  }
  // admittance_velocity
  if (!geometry_msgs__msg__TwistStamped__copy(
      &(input->admittance_velocity), &(output->admittance_velocity)))
  {
    return false;
  }
  // wrench_base
  if (!geometry_msgs__msg__WrenchStamped__copy(
      &(input->wrench_base), &(output->wrench_base)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  return true;
}

control_msgs__msg__AdmittanceControllerState *
control_msgs__msg__AdmittanceControllerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__AdmittanceControllerState * msg = (control_msgs__msg__AdmittanceControllerState *)allocator.allocate(sizeof(control_msgs__msg__AdmittanceControllerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__msg__AdmittanceControllerState));
  bool success = control_msgs__msg__AdmittanceControllerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
control_msgs__msg__AdmittanceControllerState__destroy(control_msgs__msg__AdmittanceControllerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    control_msgs__msg__AdmittanceControllerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
control_msgs__msg__AdmittanceControllerState__Sequence__init(control_msgs__msg__AdmittanceControllerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__AdmittanceControllerState * data = NULL;

  if (size) {
    data = (control_msgs__msg__AdmittanceControllerState *)allocator.zero_allocate(size, sizeof(control_msgs__msg__AdmittanceControllerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__msg__AdmittanceControllerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__msg__AdmittanceControllerState__fini(&data[i - 1]);
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
control_msgs__msg__AdmittanceControllerState__Sequence__fini(control_msgs__msg__AdmittanceControllerState__Sequence * array)
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
      control_msgs__msg__AdmittanceControllerState__fini(&array->data[i]);
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

control_msgs__msg__AdmittanceControllerState__Sequence *
control_msgs__msg__AdmittanceControllerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  control_msgs__msg__AdmittanceControllerState__Sequence * array = (control_msgs__msg__AdmittanceControllerState__Sequence *)allocator.allocate(sizeof(control_msgs__msg__AdmittanceControllerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__msg__AdmittanceControllerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
control_msgs__msg__AdmittanceControllerState__Sequence__destroy(control_msgs__msg__AdmittanceControllerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    control_msgs__msg__AdmittanceControllerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
control_msgs__msg__AdmittanceControllerState__Sequence__are_equal(const control_msgs__msg__AdmittanceControllerState__Sequence * lhs, const control_msgs__msg__AdmittanceControllerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_msgs__msg__AdmittanceControllerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_msgs__msg__AdmittanceControllerState__Sequence__copy(
  const control_msgs__msg__AdmittanceControllerState__Sequence * input,
  control_msgs__msg__AdmittanceControllerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_msgs__msg__AdmittanceControllerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    control_msgs__msg__AdmittanceControllerState * data =
      (control_msgs__msg__AdmittanceControllerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_msgs__msg__AdmittanceControllerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          control_msgs__msg__AdmittanceControllerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!control_msgs__msg__AdmittanceControllerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
