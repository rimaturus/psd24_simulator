// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__STRUCT_H_

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
// Member 'reference_interfaces'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChainConnection in the package controller_manager_msgs.
typedef struct controller_manager_msgs__msg__ChainConnection
{
  /// name of controller exporting reference_interfaces
  rosidl_runtime_c__String name;
  /// list of reference exported by controller
  rosidl_runtime_c__String__Sequence reference_interfaces;
} controller_manager_msgs__msg__ChainConnection;

// Struct for a sequence of controller_manager_msgs__msg__ChainConnection.
typedef struct controller_manager_msgs__msg__ChainConnection__Sequence
{
  controller_manager_msgs__msg__ChainConnection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__msg__ChainConnection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__STRUCT_H_
