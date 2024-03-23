// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HardwareInterface in the package controller_manager_msgs.
typedef struct controller_manager_msgs__msg__HardwareInterface
{
  rosidl_runtime_c__String name;
  bool is_available;
  bool is_claimed;
} controller_manager_msgs__msg__HardwareInterface;

// Struct for a sequence of controller_manager_msgs__msg__HardwareInterface.
typedef struct controller_manager_msgs__msg__HardwareInterface__Sequence
{
  controller_manager_msgs__msg__HardwareInterface * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__msg__HardwareInterface__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__STRUCT_H_
