// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/SteeringControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__SteeringControllerStatus __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__SteeringControllerStatus __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringControllerStatus_
{
  using Type = SteeringControllerStatus_<ContainerAllocator>;

  explicit SteeringControllerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit SteeringControllerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _traction_wheels_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _traction_wheels_position_type traction_wheels_position;
  using _traction_wheels_velocity_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _traction_wheels_velocity_type traction_wheels_velocity;
  using _steer_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_positions_type steer_positions;
  using _linear_velocity_command_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _linear_velocity_command_type linear_velocity_command;
  using _steering_angle_command_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steering_angle_command_type steering_angle_command;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__traction_wheels_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->traction_wheels_position = _arg;
    return *this;
  }
  Type & set__traction_wheels_velocity(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->traction_wheels_velocity = _arg;
    return *this;
  }
  Type & set__steer_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_positions = _arg;
    return *this;
  }
  Type & set__linear_velocity_command(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->linear_velocity_command = _arg;
    return *this;
  }
  Type & set__steering_angle_command(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steering_angle_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::SteeringControllerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::SteeringControllerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::SteeringControllerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::SteeringControllerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__SteeringControllerStatus
    std::shared_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__SteeringControllerStatus
    std::shared_ptr<control_msgs::msg::SteeringControllerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringControllerStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->traction_wheels_position != other.traction_wheels_position) {
      return false;
    }
    if (this->traction_wheels_velocity != other.traction_wheels_velocity) {
      return false;
    }
    if (this->steer_positions != other.steer_positions) {
      return false;
    }
    if (this->linear_velocity_command != other.linear_velocity_command) {
      return false;
    }
    if (this->steering_angle_command != other.steering_angle_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringControllerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringControllerStatus_

// alias to use template instance with default allocator
using SteeringControllerStatus =
  control_msgs::msg::SteeringControllerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__STEERING_CONTROLLER_STATUS__STRUCT_HPP_
