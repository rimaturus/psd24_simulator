// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from psd_vehicle_interfaces:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef PSD_VEHICLE_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
#define PSD_VEHICLE_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_

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
// Member 'shape'
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/ObstacleInfo in the package psd_vehicle_interfaces.
typedef struct psd_vehicle_interfaces__msg__ObstacleInfo
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String shape;
  geometry_msgs__msg__Pose2D position;
  float area;
  rosidl_runtime_c__String frame_id;
} psd_vehicle_interfaces__msg__ObstacleInfo;

// Struct for a sequence of psd_vehicle_interfaces__msg__ObstacleInfo.
typedef struct psd_vehicle_interfaces__msg__ObstacleInfo__Sequence
{
  psd_vehicle_interfaces__msg__ObstacleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} psd_vehicle_interfaces__msg__ObstacleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PSD_VEHICLE_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__STRUCT_H_
