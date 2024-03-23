// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReloadControllerLibraries_Request_
{
  using Type = ReloadControllerLibraries_Request_<ContainerAllocator>;

  explicit ReloadControllerLibraries_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_kill = false;
    }
  }

  explicit ReloadControllerLibraries_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_kill = false;
    }
  }

  // field types and members
  using _force_kill_type =
    bool;
  _force_kill_type force_kill;

  // setters for named parameter idiom
  Type & set__force_kill(
    const bool & _arg)
  {
    this->force_kill = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Request
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Request
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReloadControllerLibraries_Request_ & other) const
  {
    if (this->force_kill != other.force_kill) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReloadControllerLibraries_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReloadControllerLibraries_Request_

// alias to use template instance with default allocator
using ReloadControllerLibraries_Request =
  controller_manager_msgs::srv::ReloadControllerLibraries_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReloadControllerLibraries_Response_
{
  using Type = ReloadControllerLibraries_Response_<ContainerAllocator>;

  explicit ReloadControllerLibraries_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit ReloadControllerLibraries_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Response
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ReloadControllerLibraries_Response
    std::shared_ptr<controller_manager_msgs::srv::ReloadControllerLibraries_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReloadControllerLibraries_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReloadControllerLibraries_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReloadControllerLibraries_Response_

// alias to use template instance with default allocator
using ReloadControllerLibraries_Response =
  controller_manager_msgs::srv::ReloadControllerLibraries_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct ReloadControllerLibraries
{
  using Request = controller_manager_msgs::srv::ReloadControllerLibraries_Request;
  using Response = controller_manager_msgs::srv::ReloadControllerLibraries_Response;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__STRUCT_HPP_
