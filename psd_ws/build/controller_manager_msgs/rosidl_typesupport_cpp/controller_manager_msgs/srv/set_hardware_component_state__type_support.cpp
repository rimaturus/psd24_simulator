// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:srv/SetHardwareComponentState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetHardwareComponentState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetHardwareComponentState_Request_type_support_ids_t;

static const _SetHardwareComponentState_Request_type_support_ids_t _SetHardwareComponentState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetHardwareComponentState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetHardwareComponentState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetHardwareComponentState_Request_type_support_symbol_names_t _SetHardwareComponentState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, SetHardwareComponentState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, SetHardwareComponentState_Request)),
  }
};

typedef struct _SetHardwareComponentState_Request_type_support_data_t
{
  void * data[2];
} _SetHardwareComponentState_Request_type_support_data_t;

static _SetHardwareComponentState_Request_type_support_data_t _SetHardwareComponentState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetHardwareComponentState_Request_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SetHardwareComponentState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetHardwareComponentState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetHardwareComponentState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetHardwareComponentState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetHardwareComponentState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::SetHardwareComponentState_Request>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::SetHardwareComponentState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_manager_msgs, srv, SetHardwareComponentState_Request)() {
  return get_message_type_support_handle<controller_manager_msgs::srv::SetHardwareComponentState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetHardwareComponentState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetHardwareComponentState_Response_type_support_ids_t;

static const _SetHardwareComponentState_Response_type_support_ids_t _SetHardwareComponentState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetHardwareComponentState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetHardwareComponentState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetHardwareComponentState_Response_type_support_symbol_names_t _SetHardwareComponentState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, SetHardwareComponentState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, SetHardwareComponentState_Response)),
  }
};

typedef struct _SetHardwareComponentState_Response_type_support_data_t
{
  void * data[2];
} _SetHardwareComponentState_Response_type_support_data_t;

static _SetHardwareComponentState_Response_type_support_data_t _SetHardwareComponentState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetHardwareComponentState_Response_message_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SetHardwareComponentState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetHardwareComponentState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetHardwareComponentState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetHardwareComponentState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetHardwareComponentState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::srv::SetHardwareComponentState_Response>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::SetHardwareComponentState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, controller_manager_msgs, srv, SetHardwareComponentState_Response)() {
  return get_message_type_support_handle<controller_manager_msgs::srv::SetHardwareComponentState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/srv/detail/set_hardware_component_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace controller_manager_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetHardwareComponentState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetHardwareComponentState_type_support_ids_t;

static const _SetHardwareComponentState_type_support_ids_t _SetHardwareComponentState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetHardwareComponentState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetHardwareComponentState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetHardwareComponentState_type_support_symbol_names_t _SetHardwareComponentState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, srv, SetHardwareComponentState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, controller_manager_msgs, srv, SetHardwareComponentState)),
  }
};

typedef struct _SetHardwareComponentState_type_support_data_t
{
  void * data[2];
} _SetHardwareComponentState_type_support_data_t;

static _SetHardwareComponentState_type_support_data_t _SetHardwareComponentState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetHardwareComponentState_service_typesupport_map = {
  2,
  "controller_manager_msgs",
  &_SetHardwareComponentState_service_typesupport_ids.typesupport_identifier[0],
  &_SetHardwareComponentState_service_typesupport_symbol_names.symbol_name[0],
  &_SetHardwareComponentState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetHardwareComponentState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetHardwareComponentState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<controller_manager_msgs::srv::SetHardwareComponentState>()
{
  return &::controller_manager_msgs::srv::rosidl_typesupport_cpp::SetHardwareComponentState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
