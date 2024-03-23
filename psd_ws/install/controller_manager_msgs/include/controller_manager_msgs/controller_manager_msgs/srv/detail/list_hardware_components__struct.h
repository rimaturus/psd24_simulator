// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListHardwareComponents in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Request
{
  uint8_t structure_needs_at_least_one_member;
} controller_manager_msgs__srv__ListHardwareComponents_Request;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareComponents_Request.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence
{
  controller_manager_msgs__srv__ListHardwareComponents_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareComponents_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'component'
#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.h"

/// Struct defined in srv/ListHardwareComponents in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Response
{
  controller_manager_msgs__msg__HardwareComponentState__Sequence component;
} controller_manager_msgs__srv__ListHardwareComponents_Response;

// Struct for a sequence of controller_manager_msgs__srv__ListHardwareComponents_Response.
typedef struct controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence
{
  controller_manager_msgs__srv__ListHardwareComponents_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ListHardwareComponents_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_H_
