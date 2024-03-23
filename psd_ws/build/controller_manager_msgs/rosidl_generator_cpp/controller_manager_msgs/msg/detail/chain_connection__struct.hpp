// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:msg/ChainConnection.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__msg__ChainConnection __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__msg__ChainConnection __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChainConnection_
{
  using Type = ChainConnection_<ContainerAllocator>;

  explicit ChainConnection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit ChainConnection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _reference_interfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _reference_interfaces_type reference_interfaces;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__reference_interfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->reference_interfaces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::msg::ChainConnection_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::msg::ChainConnection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__msg__ChainConnection
    std::shared_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__msg__ChainConnection
    std::shared_ptr<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChainConnection_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->reference_interfaces != other.reference_interfaces) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChainConnection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChainConnection_

// alias to use template instance with default allocator
using ChainConnection =
  controller_manager_msgs::msg::ChainConnection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CHAIN_CONNECTION__STRUCT_HPP_
