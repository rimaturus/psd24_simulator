// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BEST_EFFORT'.
enum
{
  controller_manager_msgs__srv__SwitchController_Request__BEST_EFFORT = 1l
};

/// Constant 'STRICT'.
enum
{
  controller_manager_msgs__srv__SwitchController_Request__STRICT = 2l
};

// Include directives for member types
// Member 'activate_controllers'
// Member 'deactivate_controllers'
// Member 'start_controllers'
// Member 'stop_controllers'
#include "rosidl_runtime_c/string.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Request
{
  /// To switch controllers, specify
  ///  * the list of controller names to activate,
  ///  * the list of controller names to deactivate, and
  ///  * the strictness (BEST_EFFORT or STRICT)
  ///    * STRICT means that switching will fail if anything goes wrong (an invalid
  ///      controller name, a controller that failed to activate, etc. )
  ///    * BEST_EFFORT means that even when something goes wrong with on controller,
  ///      the service will still try to activate/stop the remaining controllers
  ///  * activate the controllers as soon as their hardware dependencies are ready, will
  ///    wait for all interfaces to be ready otherwise
  ///  * the timeout before aborting pending controllers. Zero for infinite
  /// The return value "ok" indicates if the controllers were switched
  /// successfully or not.  The meaning of success depends on the
  /// specified strictness.
  rosidl_runtime_c__String__Sequence activate_controllers;
  rosidl_runtime_c__String__Sequence deactivate_controllers;
  /// DEPRECATED: Use activate_controllers filed instead
  rosidl_runtime_c__String__Sequence start_controllers;
  /// DEPRECATED: Use deactivate_controllers filed instead
  rosidl_runtime_c__String__Sequence stop_controllers;
  int32_t strictness;
  /// DEPRECATED: Use activate_asap filed instead
  bool start_asap;
  bool activate_asap;
  builtin_interfaces__msg__Duration timeout;
} controller_manager_msgs__srv__SwitchController_Request;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Request.
typedef struct controller_manager_msgs__srv__SwitchController_Request__Sequence
{
  controller_manager_msgs__srv__SwitchController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Response
{
  bool ok;
} controller_manager_msgs__srv__SwitchController_Response;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Response.
typedef struct controller_manager_msgs__srv__SwitchController_Response__Sequence
{
  controller_manager_msgs__srv__SwitchController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_
