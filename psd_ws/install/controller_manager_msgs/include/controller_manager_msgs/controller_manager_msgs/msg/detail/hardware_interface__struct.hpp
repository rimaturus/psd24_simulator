// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__msg__HardwareInterface __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__msg__HardwareInterface __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareInterface_
{
  using Type = HardwareInterface_<ContainerAllocator>;

  explicit HardwareInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->is_available = false;
      this->is_claimed = false;
    }
  }

  explicit HardwareInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->is_available = false;
      this->is_claimed = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _is_available_type =
    bool;
  _is_available_type is_available;
  using _is_claimed_type =
    bool;
  _is_claimed_type is_claimed;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__is_available(
    const bool & _arg)
  {
    this->is_available = _arg;
    return *this;
  }
  Type & set__is_claimed(
    const bool & _arg)
  {
    this->is_claimed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__msg__HardwareInterface
    std::shared_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__msg__HardwareInterface
    std::shared_ptr<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareInterface_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->is_available != other.is_available) {
      return false;
    }
    if (this->is_claimed != other.is_claimed) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareInterface_

// alias to use template instance with default allocator
using HardwareInterface =
  controller_manager_msgs::msg::HardwareInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__STRUCT_HPP_
