// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/srv/detail/query_trajectory_state__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/srv/detail/query_trajectory_state__functions.h"
#include "control_msgs/srv/detail/query_trajectory_state__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__srv__QueryTrajectoryState_Request__init(message_memory);
}

void control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_fini_function(void * message_memory)
{
  control_msgs__srv__QueryTrajectoryState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_member_array[1] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Request, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_members = {
  "control_msgs__srv",  // message namespace
  "QueryTrajectoryState_Request",  // message name
  1,  // number of fields
  sizeof(control_msgs__srv__QueryTrajectoryState_Request),
  control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_member_array,  // message members
  control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_type_support_handle = {
  0,
  &control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState_Request)() {
  control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_type_support_handle.typesupport_identifier) {
    control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__srv__QueryTrajectoryState_Request__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__functions.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__struct.h"


// Include directives for member types
// Member `message`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__srv__QueryTrajectoryState_Response__init(message_memory);
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_fini_function(void * message_memory)
{
  control_msgs__srv__QueryTrajectoryState_Response__fini(message_memory);
}

size_t control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_member_array[6] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Response, name),  // bytes offset in struct
    NULL,  // default value
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__name,  // size() function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__name,  // get_const(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__name,  // get(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__name,  // fetch(index, &value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__name,  // assign(index, value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__name  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Response, position),  // bytes offset in struct
    NULL,  // default value
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__position,  // size() function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__position,  // get_const(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__position,  // get(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__position,  // fetch(index, &value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__position,  // assign(index, value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Response, velocity),  // bytes offset in struct
    NULL,  // default value
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__velocity,  // size() function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__velocity,  // get_const(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__velocity,  // get(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__velocity,  // fetch(index, &value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__velocity,  // assign(index, value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__srv__QueryTrajectoryState_Response, acceleration),  // bytes offset in struct
    NULL,  // default value
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__size_function__QueryTrajectoryState_Response__acceleration,  // size() function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_const_function__QueryTrajectoryState_Response__acceleration,  // get_const(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__get_function__QueryTrajectoryState_Response__acceleration,  // get(index) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__fetch_function__QueryTrajectoryState_Response__acceleration,  // fetch(index, &value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__assign_function__QueryTrajectoryState_Response__acceleration,  // assign(index, value) function pointer
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__resize_function__QueryTrajectoryState_Response__acceleration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_members = {
  "control_msgs__srv",  // message namespace
  "QueryTrajectoryState_Response",  // message name
  6,  // number of fields
  sizeof(control_msgs__srv__QueryTrajectoryState_Response),
  control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_member_array,  // message members
  control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_type_support_handle = {
  0,
  &control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState_Response)() {
  if (!control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_type_support_handle.typesupport_identifier) {
    control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_msgs__srv__QueryTrajectoryState_Response__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_members = {
  "control_msgs__srv",  // service namespace
  "QueryTrajectoryState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_Request_message_type_support_handle,
  NULL  // response message
  // control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_Response_message_type_support_handle
};

static rosidl_service_type_support_t control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_type_support_handle = {
  0,
  &control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState)() {
  if (!control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_type_support_handle.typesupport_identifier) {
    control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, srv, QueryTrajectoryState_Response)()->data;
  }

  return &control_msgs__srv__detail__query_trajectory_state__rosidl_typesupport_introspection_c__QueryTrajectoryState_service_type_support_handle;
}
