// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListHardwareInterfaces_Request_
{
  using Type = ListHardwareInterfaces_Request_<ContainerAllocator>;

  explicit ListHardwareInterfaces_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ListHardwareInterfaces_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Request
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Request
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListHardwareInterfaces_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListHardwareInterfaces_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListHardwareInterfaces_Request_

// alias to use template instance with default allocator
using ListHardwareInterfaces_Request =
  controller_manager_msgs::srv::ListHardwareInterfaces_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


// Include directives for member types
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListHardwareInterfaces_Response_
{
  using Type = ListHardwareInterfaces_Response_<ContainerAllocator>;

  explicit ListHardwareInterfaces_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListHardwareInterfaces_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _command_interfaces_type =
    std::vector<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>>;
  _command_interfaces_type command_interfaces;
  using _state_interfaces_type =
    std::vector<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareInterface_<ContainerAllocator>>>;
  _state_interfaces_type state_interfaces;

  // setters for named parameter idiom
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
    controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Response
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareInterfaces_Response
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareInterfaces_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListHardwareInterfaces_Response_ & other) const
  {
    if (this->command_interfaces != other.command_interfaces) {
      return false;
    }
    if (this->state_interfaces != other.state_interfaces) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListHardwareInterfaces_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListHardwareInterfaces_Response_

// alias to use template instance with default allocator
using ListHardwareInterfaces_Response =
  controller_manager_msgs::srv::ListHardwareInterfaces_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct ListHardwareInterfaces
{
  using Request = controller_manager_msgs::srv::ListHardwareInterfaces_Request;
  using Response = controller_manager_msgs::srv::ListHardwareInterfaces_Response;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__STRUCT_HPP_
