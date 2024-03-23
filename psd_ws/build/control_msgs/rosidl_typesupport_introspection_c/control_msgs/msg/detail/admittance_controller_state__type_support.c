// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/msg/detail/admittance_controller_state__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/msg/detail/admittance_controller_state__functions.h"
#include "control_msgs/msg/detail/admittance_controller_state__struct.h"


// Include directives for member types
// Member `mass`
// Member `damping`
// Member `stiffness`
#include "std_msgs/msg/float64_multi_array.h"
// Member `mass`
// Member `damping`
// Member `stiffness`
#include "std_msgs/msg/detail/float64_multi_array__rosidl_typesupport_introspection_c.h"
// Member `rot_base_control`
#include "geometry_msgs/msg/quaternion.h"
// Member `rot_base_control`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `ref_trans_base_ft`
// Member `admittance_position`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `ref_trans_base_ft`
// Member `admittance_position`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"
// Member `selected_axes`
#include "std_msgs/msg/int8_multi_array.h"
// Member `selected_axes`
#include "std_msgs/msg/detail/int8_multi_array__rosidl_typesupport_introspection_c.h"
// Member `ft_sensor_frame`
#include "std_msgs/msg/string.h"
// Member `ft_sensor_frame`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `admittance_acceleration`
// Member `admittance_velocity`
#include "geometry_msgs/msg/twist_stamped.h"
// Member `admittance_acceleration`
// Member `admittance_velocity`
#include "geometry_msgs/msg/detail/twist_stamped__rosidl_typesupport_introspection_c.h"
// Member `wrench_base`
#include "geometry_msgs/msg/wrench_stamped.h"
// Member `wrench_base`
#include "geometry_msgs/msg/detail/wrench_stamped__rosidl_typesupport_introspection_c.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__msg__AdmittanceControllerState__init(message_memory);
}

void control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_fini_function(void * message_memory)
{
  control_msgs__msg__AdmittanceControllerState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[12] = {
  {
    "mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stiffness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, stiffness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_base_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, rot_base_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_trans_base_ft",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, ref_trans_base_ft),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selected_axes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, selected_axes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ft_sensor_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, ft_sensor_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "admittance_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, admittance_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "admittance_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, admittance_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "admittance_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, admittance_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench_base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, wrench_base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__msg__AdmittanceControllerState, joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_members = {
  "control_msgs__msg",  // message namespace
  "AdmittanceControllerState",  // message name
  12,  // number of fields
  sizeof(control_msgs__msg__AdmittanceControllerState),
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array,  // message members
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_type_support_handle = {
  0,
  &control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, AdmittanceControllerState)() {
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8MultiArray)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistStamped)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistStamped)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, WrenchStamped)();
  control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_type_support_handle.typesupport_identifier) {
    control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__msg__AdmittanceControllerState__rosidl_typesupport_introspection_c__AdmittanceControllerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
