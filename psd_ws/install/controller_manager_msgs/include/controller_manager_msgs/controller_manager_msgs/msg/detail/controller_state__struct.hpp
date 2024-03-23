// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'chain_connections'
#include "controller_manager_msgs/msg/detail/chain_connection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__msg__ControllerState __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__msg__ControllerState __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerState_
{
  using Type = ControllerState_<ContainerAllocator>;

  explicit ControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->state = "";
      this->type = "";
      this->is_chainable = false;
      this->is_chained = false;
    }
  }

  explicit ControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    state(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->state = "";
      this->type = "";
      this->is_chainable = false;
      this->is_chained = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _claimed_interfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _claimed_interfaces_type claimed_interfaces;
  using _required_command_interfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _required_command_interfaces_type required_command_interfaces;
  using _required_state_interfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _required_state_interfaces_type required_state_interfaces;
  using _is_chainable_type =
    bool;
  _is_chainable_type is_chainable;
  using _is_chained_type =
    bool;
  _is_chained_type is_chained;
  using _reference_interfaces_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _reference_interfaces_type reference_interfaces;
  using _chain_connections_type =
    std::vector<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>>;
  _chain_connections_type chain_connections;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__claimed_interfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->claimed_interfaces = _arg;
    return *this;
  }
  Type & set__required_command_interfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->required_command_interfaces = _arg;
    return *this;
  }
  Type & set__required_state_interfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->required_state_interfaces = _arg;
    return *this;
  }
  Type & set__is_chainable(
    const bool & _arg)
  {
    this->is_chainable = _arg;
    return *this;
  }
  Type & set__is_chained(
    const bool & _arg)
  {
    this->is_chained = _arg;
    return *this;
  }
  Type & set__reference_interfaces(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->reference_interfaces = _arg;
    return *this;
  }
  Type & set__chain_connections(
    const std::vector<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::ChainConnection_<ContainerAllocator>>> & _arg)
  {
    this->chain_connections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::msg::ControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::msg::ControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__msg__ControllerState
    std::shared_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__msg__ControllerState
    std::shared_ptr<controller_manager_msgs::msg::ControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->claimed_interfaces != other.claimed_interfaces) {
      return false;
    }
    if (this->required_command_interfaces != other.required_command_interfaces) {
      return false;
    }
    if (this->required_state_interfaces != other.required_state_interfaces) {
      return false;
    }
    if (this->is_chainable != other.is_chainable) {
      return false;
    }
    if (this->is_chained != other.is_chained) {
      return false;
    }
    if (this->reference_interfaces != other.reference_interfaces) {
      return false;
    }
    if (this->chain_connections != other.chain_connections) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerState_

// alias to use template instance with default allocator
using ControllerState =
  controller_manager_msgs::msg::ControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_
