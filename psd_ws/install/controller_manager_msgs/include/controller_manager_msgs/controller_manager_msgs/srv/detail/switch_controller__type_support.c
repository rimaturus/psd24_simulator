// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/srv/detail/switch_controller__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/srv/detail/switch_controller__functions.h"
#include "controller_manager_msgs/srv/detail/switch_controller__struct.h"


// Include directives for member types
// Member `activate_controllers`
// Member `deactivate_controllers`
// Member `start_controllers`
// Member `stop_controllers`
#include "rosidl_runtime_c/string_functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/duration.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__SwitchController_Request__init(message_memory);
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__SwitchController_Request__fini(message_memory);
}

size_t controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__activate_controllers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__activate_controllers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__activate_controllers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__activate_controllers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__activate_controllers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__activate_controllers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__activate_controllers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__activate_controllers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__deactivate_controllers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__deactivate_controllers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__deactivate_controllers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__deactivate_controllers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__deactivate_controllers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__deactivate_controllers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__deactivate_controllers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__deactivate_controllers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__start_controllers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__start_controllers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__start_controllers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__start_controllers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__start_controllers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__start_controllers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__start_controllers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__start_controllers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__stop_controllers(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__stop_controllers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__stop_controllers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__stop_controllers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__stop_controllers(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__stop_controllers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__stop_controllers(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__stop_controllers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_member_array[8] = {
  {
    "activate_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, activate_controllers),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__activate_controllers,  // size() function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__activate_controllers,  // get_const(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__activate_controllers,  // get(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__activate_controllers,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__activate_controllers,  // assign(index, value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__activate_controllers  // resize(index) function pointer
  },
  {
    "deactivate_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, deactivate_controllers),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__deactivate_controllers,  // size() function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__deactivate_controllers,  // get_const(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__deactivate_controllers,  // get(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__deactivate_controllers,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__deactivate_controllers,  // assign(index, value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__deactivate_controllers  // resize(index) function pointer
  },
  {
    "start_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, start_controllers),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__start_controllers,  // size() function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__start_controllers,  // get_const(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__start_controllers,  // get(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__start_controllers,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__start_controllers,  // assign(index, value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__start_controllers  // resize(index) function pointer
  },
  {
    "stop_controllers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, stop_controllers),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__size_function__SwitchController_Request__stop_controllers,  // size() function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_const_function__SwitchController_Request__stop_controllers,  // get_const(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__get_function__SwitchController_Request__stop_controllers,  // get(index) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__fetch_function__SwitchController_Request__stop_controllers,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__assign_function__SwitchController_Request__stop_controllers,  // assign(index, value) function pointer
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__resize_function__SwitchController_Request__stop_controllers  // resize(index) function pointer
  },
  {
    "strictness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, strictness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_asap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, start_asap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activate_asap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, activate_asap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Request, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "SwitchController_Request",  // message name
  8,  // number of fields
  sizeof(controller_manager_msgs__srv__SwitchController_Request),
  controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_member_array,  // message members
  controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Request)() {
  controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__SwitchController_Request__rosidl_typesupport_introspection_c__SwitchController_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__SwitchController_Response__init(message_memory);
}

void controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__SwitchController_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__SwitchController_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "SwitchController_Response",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs__srv__SwitchController_Response),
  controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_member_array,  // message members
  controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Response)() {
  if (!controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__SwitchController_Response__rosidl_typesupport_introspection_c__SwitchController_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/switch_controller__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_members = {
  "controller_manager_msgs__srv",  // service namespace
  "SwitchController",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_Request_message_type_support_handle,
  NULL  // response message
  // controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_Response_message_type_support_handle
};

static rosidl_service_type_support_t controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_type_support_handle = {
  0,
  &controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController)() {
  if (!controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, SwitchController_Response)()->data;
  }

  return &controller_manager_msgs__srv__detail__switch_controller__rosidl_typesupport_introspection_c__SwitchController_service_type_support_handle;
}
