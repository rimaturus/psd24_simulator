// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/UnloadController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__UnloadController_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__UnloadController_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnloadController_Request_
{
  using Type = UnloadController_Request_<ContainerAllocator>;

  explicit UnloadController_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit UnloadController_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__UnloadController_Request
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__UnloadController_Request
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnloadController_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnloadController_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnloadController_Request_

// alias to use template instance with default allocator
using UnloadController_Request =
  controller_manager_msgs::srv::UnloadController_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__UnloadController_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__UnloadController_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UnloadController_Response_
{
  using Type = UnloadController_Response_<ContainerAllocator>;

  explicit UnloadController_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit UnloadController_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__UnloadController_Response
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__UnloadController_Response
    std::shared_ptr<controller_manager_msgs::srv::UnloadController_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnloadController_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnloadController_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnloadController_Response_

// alias to use template instance with default allocator
using UnloadController_Response =
  controller_manager_msgs::srv::UnloadController_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct UnloadController
{
  using Request = controller_manager_msgs::srv::UnloadController_Request;
  using Response = controller_manager_msgs::srv::UnloadController_Response;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__STRUCT_HPP_
