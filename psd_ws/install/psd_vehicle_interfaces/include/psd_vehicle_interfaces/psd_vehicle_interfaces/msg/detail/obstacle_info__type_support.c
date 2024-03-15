// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from psd_vehicle_interfaces:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "psd_vehicle_interfaces/msg/detail/obstacle_info__rosidl_typesupport_introspection_c.h"
#include "psd_vehicle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "psd_vehicle_interfaces/msg/detail/obstacle_info__functions.h"
#include "psd_vehicle_interfaces/msg/detail/obstacle_info__struct.h"


// Include directives for member types
// Member `name`
// Member `shape`
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/pose2_d.h"
// Member `position`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  psd_vehicle_interfaces__msg__ObstacleInfo__init(message_memory);
}

void psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_fini_function(void * message_memory)
{
  psd_vehicle_interfaces__msg__ObstacleInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(psd_vehicle_interfaces__msg__ObstacleInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(psd_vehicle_interfaces__msg__ObstacleInfo, shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(psd_vehicle_interfaces__msg__ObstacleInfo, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(psd_vehicle_interfaces__msg__ObstacleInfo, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(psd_vehicle_interfaces__msg__ObstacleInfo, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_members = {
  "psd_vehicle_interfaces__msg",  // message namespace
  "ObstacleInfo",  // message name
  5,  // number of fields
  sizeof(psd_vehicle_interfaces__msg__ObstacleInfo),
  psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_member_array,  // message members
  psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_type_support_handle = {
  0,
  &psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_psd_vehicle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, psd_vehicle_interfaces, msg, ObstacleInfo)() {
  psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_type_support_handle.typesupport_identifier) {
    psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &psd_vehicle_interfaces__msg__ObstacleInfo__rosidl_typesupport_introspection_c__ObstacleInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
