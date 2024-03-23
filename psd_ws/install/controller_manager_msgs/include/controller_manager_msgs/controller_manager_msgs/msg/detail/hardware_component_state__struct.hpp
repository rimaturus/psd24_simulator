// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:msg/HardwareComponentState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "lifecycle_msgs/msg/detail/state__struct.hpp"
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__msg__HardwareComponentState __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__msg__HardwareComponentState __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareComponentState_
{
  using Type = HardwareComponentState_<ContainerAllocator>;

  explicit HardwareComponentState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->class_type = "";
    }
  }

  explicit HardwareComponentState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc),
    class_type(_alloc),
    state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->class_type = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _class_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_type_type class_type;
  using _state_type =
    lifecycle_msgs::msg::State_<ContainerAllocator>;
  _state_type state;
  using _command_interfaces_type =
    std::vector<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>>;
  _command_interfaces_type command_interfaces;
  using _state_interfaces_type =
    std::vector<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>>;
  _state_interfaces_type state_interfaces;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__class_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_type = _arg;
    return *this;
  }
  Type & set__state(
    const lifecycle_msgs::msg::State_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__command_interfaces(
    const std::vector<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>> & _arg)
  {
    this->command_interfaces = _arg;
    return *this;
  }
  Type & set__state_interfaces(
    const std::vector<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>> & _arg)
  {
    this->state_interfaces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__msg__HardwareComponentState
    std::shared_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__msg__HardwareComponentState
    std::shared_ptr<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareComponentState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->class_type != other.class_type) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->command_interfaces != other.command_interfaces) {
      return false;
    }
    if (this->state_interfaces != other.state_interfaces) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareComponentState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareComponentState_

// alias to use template instance with default allocator
using HardwareComponentState =
  controller_manager_msgs::msg::HardwareComponentState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_COMPONENT_STATE__STRUCT_HPP_
