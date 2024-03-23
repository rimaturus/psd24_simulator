// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_

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
// Member 'state'
// Member 'type'
// Member 'claimed_interfaces'
// Member 'required_command_interfaces'
// Member 'required_state_interfaces'
// Member 'reference_interfaces'
#include "rosidl_runtime_c/string.h"
// Member 'chain_connections'
#include "controller_manager_msgs/msg/detail/chain_connection__struct.h"

/// Struct defined in msg/ControllerState in the package controller_manager_msgs.
typedef struct controller_manager_msgs__msg__ControllerState
{
  /// controller name
  rosidl_runtime_c__String name;
  /// controller state: unconfigured, inactive, active, or finalized
  rosidl_runtime_c__String state;
  /// the controller class name, e.g. joint_trajectory_controller/JointTrajectoryController
  rosidl_runtime_c__String type;
  /// command interfaces currently owned by controller
  rosidl_runtime_c__String__Sequence claimed_interfaces;
  /// command interfaces required by controller
  rosidl_runtime_c__String__Sequence required_command_interfaces;
  /// state interfaces required by controller
  rosidl_runtime_c__String__Sequence required_state_interfaces;
  /// specifies whether or not controller can export references for a controller chain
  bool is_chainable;
  /// specifies whether or not controller's exported references are claimed by another controller
  bool is_chained;
  /// references to be exported (only applicable if is_chainable is true)
  rosidl_runtime_c__String__Sequence reference_interfaces;
  /// specifies list of controllers and their exported references that the controller is chained to
  controller_manager_msgs__msg__ChainConnection__Sequence chain_connections;
} controller_manager_msgs__msg__ControllerState;

// Struct for a sequence of controller_manager_msgs__msg__ControllerState.
typedef struct controller_manager_msgs__msg__ControllerState__Sequence
{
  controller_manager_msgs__msg__ControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__msg__ControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_H_
