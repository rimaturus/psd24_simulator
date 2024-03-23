// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/ListControllers.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ListControllers_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ListControllers_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListControllers_Request_
{
  using Type = ListControllers_Request_<ContainerAllocator>;

  explicit ListControllers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ListControllers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ListControllers_Request
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ListControllers_Request
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListControllers_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListControllers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListControllers_Request_

// alias to use template instance with default allocator
using ListControllers_Request =
  controller_manager_msgs::srv::ListControllers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


// Include directives for member types
// Member 'controller'
#include "controller_manager_msgs/msg/detail/controller_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ListControllers_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ListControllers_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListControllers_Response_
{
  using Type = ListControllers_Response_<ContainerAllocator>;

  explicit ListControllers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListControllers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _controller_type =
    std::vector<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>>;
  _controller_type controller;

  // setters for named parameter idiom
  Type & set__controller(
    const std::vector<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::ControllerState_<ContainerAllocator>>> & _arg)
  {
    this->controller = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ListControllers_Response
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ListControllers_Response
    std::shared_ptr<controller_manager_msgs::srv::ListControllers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListControllers_Response_ & other) const
  {
    if (this->controller != other.controller) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListControllers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListControllers_Response_

// alias to use template instance with default allocator
using ListControllers_Response =
  controller_manager_msgs::srv::ListControllers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct ListControllers
{
  using Request = controller_manager_msgs::srv::ListControllers_Request;
  using Response = controller_manager_msgs::srv::ListControllers_Response;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLERS__STRUCT_HPP_
