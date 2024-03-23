// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReloadControllerLibraries in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Request
{
  /// Reloading libraries only works if there are no controllers loaded. If there
  /// are still some controllers loaded, the reloading will fail.
  /// If this bool is set to true, all loaded controllers will get
  /// killed automatically, and the reloading can succeed.
  bool force_kill;
} controller_manager_msgs__srv__ReloadControllerLibraries_Request;

// Struct for a sequence of controller_manager_msgs__srv__ReloadControllerLibraries_Request.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Request__Sequence
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ReloadControllerLibraries_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ReloadControllerLibraries in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Response
{
  bool ok;
} controller_manager_msgs__srv__ReloadControllerLibraries_Response;

// Struct for a sequence of controller_manager_msgs__srv__ReloadControllerLibraries_Response.
typedef struct controller_manager_msgs__srv__ReloadControllerLibraries_Response__Sequence
{
  controller_manager_msgs__srv__ReloadControllerLibraries_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__ReloadControllerLibraries_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_H_
