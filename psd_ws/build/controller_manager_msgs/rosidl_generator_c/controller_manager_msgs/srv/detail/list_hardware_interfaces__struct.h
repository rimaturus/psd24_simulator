// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListHardwareInterfaces in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareInterfaces_Request
{
  uint8_t structure_needs_at_least_one_member;
} controller_manager_msgs__srv__ListHardwareInterfaces_Request;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareInterfaces_Request.
typedef struct controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.h"

/// Struct defined in srv/ListHardwareInterfaces in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareInterfaces_Response
{
  controller_manager_msgs__msg__HardwareInterface__Sequence command_interfaces;
  controller_manager_msgs__msg__HardwareInterface__Sequence state_interfaces;
} controller_manager_msgs__srv__ListHardwareInterfaces_Response;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareInterfaces_Response.
typedef struct controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__STRUCT_H_
