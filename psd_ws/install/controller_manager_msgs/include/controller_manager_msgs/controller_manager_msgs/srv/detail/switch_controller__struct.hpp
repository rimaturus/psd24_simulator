// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__SwitchController_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__SwitchController_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchController_Request_
{
  using Type = SwitchController_Request_<ContainerAllocator>;

  explicit SwitchController_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strictness = 0l;
      this->start_asap = false;
      this->activate_asap = false;
    }
  }

  explicit SwitchController_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strictness = 0l;
      this->start_asap = false;
      this->activate_asap = false;
    }
  }

  // field types and members
  using _activate_controllers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _activate_controllers_type activate_controllers;
  using _deactivate_controllers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _deactivate_controllers_type deactivate_controllers;
  using _start_controllers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _start_controllers_type start_controllers;
  using _stop_controllers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _stop_controllers_type stop_controllers;
  using _strictness_type =
    int32_t;
  _strictness_type strictness;
  using _start_asap_type =
    bool;
  _start_asap_type start_asap;
  using _activate_asap_type =
    bool;
  _activate_asap_type activate_asap;
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;

  // setters for named parameter idiom
  Type & set__activate_controllers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->activate_controllers = _arg;
    return *this;
  }
  Type & set__deactivate_controllers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->deactivate_controllers = _arg;
    return *this;
  }
  Type & set__start_controllers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->start_controllers = _arg;
    return *this;
  }
  Type & set__stop_controllers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->stop_controllers = _arg;
    return *this;
  }
  Type & set__strictness(
    const int32_t & _arg)
  {
    this->strictness = _arg;
    return *this;
  }
  Type & set__start_asap(
    const bool & _arg)
  {
    this->start_asap = _arg;
    return *this;
  }
  Type & set__activate_asap(
    const bool & _arg)
  {
    this->activate_asap = _arg;
    return *this;
  }
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t BEST_EFFORT =
    1;
  static constexpr int32_t STRICT =
    2;

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__SwitchController_Request
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__SwitchController_Request
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchController_Request_ & other) const
  {
    if (this->activate_controllers != other.activate_controllers) {
      return false;
    }
    if (this->deactivate_controllers != other.deactivate_controllers) {
      return false;
    }
    if (this->start_controllers != other.start_controllers) {
      return false;
    }
    if (this->stop_controllers != other.stop_controllers) {
      return false;
    }
    if (this->strictness != other.strictness) {
      return false;
    }
    if (this->start_asap != other.start_asap) {
      return false;
    }
    if (this->activate_asap != other.activate_asap) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchController_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchController_Request_

// alias to use template instance with default allocator
using SwitchController_Request =
  controller_manager_msgs::srv::SwitchController_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SwitchController_Request_<ContainerAllocator>::BEST_EFFORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SwitchController_Request_<ContainerAllocator>::STRICT;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace controller_manager_msgs


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__SwitchController_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__SwitchController_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchController_Response_
{
  using Type = SwitchController_Response_<ContainerAllocator>;

  explicit SwitchController_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit SwitchController_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__SwitchController_Response
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__SwitchController_Response
    std::shared_ptr<controller_manager_msgs::srv::SwitchController_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchController_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchController_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchController_Response_

// alias to use template instance with default allocator
using SwitchController_Response =
  controller_manager_msgs::srv::SwitchController_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct SwitchController
{
  using Request = controller_manager_msgs::srv::SwitchController_Request;
  using Response = controller_manager_msgs::srv::SwitchController_Response;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_HPP_
