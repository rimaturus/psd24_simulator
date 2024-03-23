// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/LoadController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LOAD_CONTROLLER__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LOAD_CONTROLLER__STRUCT_H_

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

/// Struct defined in srv/LoadController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__LoadController_Request
{
  /// To load a controller, specify the "name" of the controller.
  /// The return value "ok" indicates if the controller was successfully
  /// constructed and initialized or not.
  rosidl_runtime_c__String name;
} controller_manager_msgs__srv__LoadController_Request;

// Struct for a sequence of controller_manager_msgs__srv__LoadController_Request.
typedef struct controller_manager_msgs__srv__LoadController_Request__Sequence
{
  controller_manager_msgs__srv__LoadController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__LoadController_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LoadController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__LoadController_Response
{
  bool ok;
} controller_manager_msgs__srv__LoadController_Response;

// Struct for a sequence of controller_manager_msgs__srv__LoadController_Response.
typedef struct controller_manager_msgs__srv__LoadController_Response__Sequence
{
  controller_manager_msgs__srv__LoadController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__LoadController_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LOAD_CONTROLLER__STRUCT_H_
