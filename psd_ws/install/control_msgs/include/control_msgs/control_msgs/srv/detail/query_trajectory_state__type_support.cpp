// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void QueryTrajectoryState_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::srv::QueryTrajectoryState_Request(_init);
}

void QueryTrajectoryState_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::srv::QueryTrajectoryState_Request *>(message_memory);
  typed_message->~QueryTrajectoryState_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QueryTrajectoryState_Request_message_member_array[1] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Request, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QueryTrajectoryState_Request_message_members = {
  "control_msgs::srv",  // message namespace
  "QueryTrajectoryState_Request",  // message name
  1,  // number of fields
  sizeof(control_msgs::srv::QueryTrajectoryState_Request),
  QueryTrajectoryState_Request_message_member_array,  // message members
  QueryTrajectoryState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryTrajectoryState_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QueryTrajectoryState_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QueryTrajectoryState_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Request>()
{
  return &::control_msgs::srv::rosidl_typesupport_introspection_cpp::QueryTrajectoryState_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState_Request)() {
  return &::control_msgs::srv::rosidl_typesupport_introspection_cpp::QueryTrajectoryState_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void QueryTrajectoryState_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) control_msgs::srv::QueryTrajectoryState_Response(_init);
}

void QueryTrajectoryState_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<control_msgs::srv::QueryTrajectoryState_Response *>(message_memory);
  typed_message->~QueryTrajectoryState_Response();
}

size_t size_function__QueryTrajectoryState_Response__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QueryTrajectoryState_Response__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__QueryTrajectoryState_Response__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__QueryTrajectoryState_Response__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__QueryTrajectoryState_Response__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__QueryTrajectoryState_Response__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__QueryTrajectoryState_Response__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__QueryTrajectoryState_Response__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QueryTrajectoryState_Response__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QueryTrajectoryState_Response__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__QueryTrajectoryState_Response__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__QueryTrajectoryState_Response__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__QueryTrajectoryState_Response__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__QueryTrajectoryState_Response__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__QueryTrajectoryState_Response__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__QueryTrajectoryState_Response__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QueryTrajectoryState_Response__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QueryTrajectoryState_Response__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__QueryTrajectoryState_Response__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__QueryTrajectoryState_Response__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__QueryTrajectoryState_Response__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__QueryTrajectoryState_Response__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__QueryTrajectoryState_Response__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__QueryTrajectoryState_Response__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__QueryTrajectoryState_Response__acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__QueryTrajectoryState_Response__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__QueryTrajectoryState_Response__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__QueryTrajectoryState_Response__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__QueryTrajectoryState_Response__acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__QueryTrajectoryState_Response__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__QueryTrajectoryState_Response__acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__QueryTrajectoryState_Response__acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QueryTrajectoryState_Response_message_member_array[6] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Response, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__QueryTrajectoryState_Response__name,  // size() function pointer
    get_const_function__QueryTrajectoryState_Response__name,  // get_const(index) function pointer
    get_function__QueryTrajectoryState_Response__name,  // get(index) function pointer
    fetch_function__QueryTrajectoryState_Response__name,  // fetch(index, &value) function pointer
    assign_function__QueryTrajectoryState_Response__name,  // assign(index, value) function pointer
    resize_function__QueryTrajectoryState_Response__name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Response, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__QueryTrajectoryState_Response__position,  // size() function pointer
    get_const_function__QueryTrajectoryState_Response__position,  // get_const(index) function pointer
    get_function__QueryTrajectoryState_Response__position,  // get(index) function pointer
    fetch_function__QueryTrajectoryState_Response__position,  // fetch(index, &value) function pointer
    assign_function__QueryTrajectoryState_Response__position,  // assign(index, value) function pointer
    resize_function__QueryTrajectoryState_Response__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Response, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__QueryTrajectoryState_Response__velocity,  // size() function pointer
    get_const_function__QueryTrajectoryState_Response__velocity,  // get_const(index) function pointer
    get_function__QueryTrajectoryState_Response__velocity,  // get(index) function pointer
    fetch_function__QueryTrajectoryState_Response__velocity,  // fetch(index, &value) function pointer
    assign_function__QueryTrajectoryState_Response__velocity,  // assign(index, value) function pointer
    resize_function__QueryTrajectoryState_Response__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs::srv::QueryTrajectoryState_Response, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__QueryTrajectoryState_Response__acceleration,  // size() function pointer
    get_const_function__QueryTrajectoryState_Response__acceleration,  // get_const(index) function pointer
    get_function__QueryTrajectoryState_Response__acceleration,  // get(index) function pointer
    fetch_function__QueryTrajectoryState_Response__acceleration,  // fetch(index, &value) function pointer
    assign_function__QueryTrajectoryState_Response__acceleration,  // assign(index, value) function pointer
    resize_function__QueryTrajectoryState_Response__acceleration  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QueryTrajectoryState_Response_message_members = {
  "control_msgs::srv",  // message namespace
  "QueryTrajectoryState_Response",  // message name
  6,  // number of fields
  sizeof(control_msgs::srv::QueryTrajectoryState_Response),
  QueryTrajectoryState_Response_message_member_array,  // message members
  QueryTrajectoryState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  QueryTrajectoryState_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QueryTrajectoryState_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QueryTrajectoryState_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::srv::QueryTrajectoryState_Response>()
{
  return &::control_msgs::srv::rosidl_typesupport_introspection_cpp::QueryTrajectoryState_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState_Response)() {
  return &::control_msgs::srv::rosidl_typesupport_introspection_cpp::QueryTrajectoryState_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers QueryTrajectoryState_service_members = {
  "control_msgs::srv",  // service namespace
  "QueryTrajectoryState",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<control_msgs::srv::QueryTrajectoryState>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t QueryTrajectoryState_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QueryTrajectoryState_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<control_msgs::srv::QueryTrajectoryState>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::control_msgs::srv::rosidl_typesupport_introspection_cpp::QueryTrajectoryState_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::control_msgs::srv::QueryTrajectoryState_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::control_msgs::srv::QueryTrajectoryState_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_msgs, srv, QueryTrajectoryState)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<control_msgs::srv::QueryTrajectoryState>();
}

#ifdef __cplusplus
}
#endif
