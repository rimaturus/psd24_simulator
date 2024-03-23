// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice
#include "controller_manager_msgs/msg/detail/hardware_interface__rosidl_typesupport_fastrtps_cpp.hpp"
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace controller_manager_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
cdr_serialize(
  const controller_manager_msgs::msg::HardwareInterface & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: is_available
  cdr << (ros_message.is_available ? true : false);
  // Member: is_claimed
  cdr << (ros_message.is_claimed ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  controller_manager_msgs::msg::HardwareInterface & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: is_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_available = tmp ? true : false;
  }

  // Member: is_claimed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_claimed = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
get_serialized_size(
  const controller_manager_msgs::msg::HardwareInterface & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: is_available
  {
    size_t item_size = sizeof(ros_message.is_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_claimed
  {
    size_t item_size = sizeof(ros_message.is_claimed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_controller_manager_msgs
max_serialized_size_HardwareInterface(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: is_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_claimed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = controller_manager_msgs::msg::HardwareInterface;
    is_plain =
      (
      offsetof(DataType, is_claimed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HardwareInterface__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const controller_manager_msgs::msg::HardwareInterface *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HardwareInterface__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<controller_manager_msgs::msg::HardwareInterface *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HardwareInterface__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const controller_manager_msgs::msg::HardwareInterface *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HardwareInterface__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HardwareInterface(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HardwareInterface__callbacks = {
  "controller_manager_msgs::msg",
  "HardwareInterface",
  _HardwareInterface__cdr_serialize,
  _HardwareInterface__cdr_deserialize,
  _HardwareInterface__get_serialized_size,
  _HardwareInterface__max_serialized_size
};

static rosidl_message_type_support_t _HardwareInterface__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HardwareInterface__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace controller_manager_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<controller_manager_msgs::msg::HardwareInterface>()
{
  return &controller_manager_msgs::msg::typesupport_fastrtps_cpp::_HardwareInterface__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, controller_manager_msgs, msg, HardwareInterface)() {
  return &controller_manager_msgs::msg::typesupport_fastrtps_cpp::_HardwareInterface__handle;
}

#ifdef __cplusplus
}
#endif
