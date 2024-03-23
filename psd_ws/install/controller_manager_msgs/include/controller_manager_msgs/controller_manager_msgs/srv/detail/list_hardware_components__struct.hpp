// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareComponents.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Request __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Request __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListHardwareComponents_Request_
{
  using Type = ListHardwareComponents_Request_<ContainerAllocator>;

  explicit ListHardwareComponents_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ListHardwareComponents_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Request
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Request
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListHardwareComponents_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListHardwareComponents_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListHardwareComponents_Request_

// alias to use template instance with default allocator
using ListHardwareComponents_Request =
  controller_manager_msgs::srv::ListHardwareComponents_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs


// Include directives for member types
// Member 'component'
#include "controller_manager_msgs/msg/detail/hardware_component_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Response __attribute__((deprecated))
#else
# define DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Response __declspec(deprecated)
#endif

namespace controller_manager_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListHardwareComponents_Response_
{
  using Type = ListHardwareComponents_Response_<ContainerAllocator>;

  explicit ListHardwareComponents_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListHardwareComponents_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _component_type =
    std::vector<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>>;
  _component_type component;

  // setters for named parameter idiom
  Type & set__component(
    const std::vector<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<controller_manager_msgs::msg::HardwareComponentState_<ContainerAllocator>>> & _arg)
  {
    this->component = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Response
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__controller_manager_msgs__srv__ListHardwareComponents_Response
    std::shared_ptr<controller_manager_msgs::srv::ListHardwareComponents_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListHardwareComponents_Response_ & other) const
  {
    if (this->component != other.component) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListHardwareComponents_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListHardwareComponents_Response_

// alias to use template instance with default allocator
using ListHardwareComponents_Response =
  controller_manager_msgs::srv::ListHardwareComponents_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace controller_manager_msgs

namespace controller_manager_msgs
{

namespace srv
{

struct ListHardwareComponents
{
  using Request = controller_manager_msgs::srv::ListHardwareComponents_Request;
  using Response = controller_manager_msgs::srv::ListHardwareComponents_Response;
};

}  // namespace srv

}  // namespace controller_manager_msgs

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_COMPONENTS__STRUCT_HPP_
