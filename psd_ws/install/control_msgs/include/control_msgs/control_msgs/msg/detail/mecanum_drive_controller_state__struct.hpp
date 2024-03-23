// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/MecanumDriveControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__STRUCT_HPP_

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
// Member 'reference_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__MecanumDriveControllerState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__MecanumDriveControllerState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MecanumDriveControllerState_
{
  using Type = MecanumDriveControllerState_<ContainerAllocator>;

  explicit MecanumDriveControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    reference_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left_wheel_velocity = 0.0;
      this->back_left_wheel_velocity = 0.0;
      this->back_right_wheel_velocity = 0.0;
      this->front_right_wheel_velocity = 0.0;
    }
  }

  explicit MecanumDriveControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reference_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left_wheel_velocity = 0.0;
      this->back_left_wheel_velocity = 0.0;
      this->back_right_wheel_velocity = 0.0;
      this->front_right_wheel_velocity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _front_left_wheel_velocity_type =
    double;
  _front_left_wheel_velocity_type front_left_wheel_velocity;
  using _back_left_wheel_velocity_type =
    double;
  _back_left_wheel_velocity_type back_left_wheel_velocity;
  using _back_right_wheel_velocity_type =
    double;
  _back_right_wheel_velocity_type back_right_wheel_velocity;
  using _front_right_wheel_velocity_type =
    double;
  _front_right_wheel_velocity_type front_right_wheel_velocity;
  using _reference_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _reference_velocity_type reference_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__front_left_wheel_velocity(
    const double & _arg)
  {
    this->front_left_wheel_velocity = _arg;
    return *this;
  }
  Type & set__back_left_wheel_velocity(
    const double & _arg)
  {
    this->back_left_wheel_velocity = _arg;
    return *this;
  }
  Type & set__back_right_wheel_velocity(
    const double & _arg)
  {
    this->back_right_wheel_velocity = _arg;
    return *this;
  }
  Type & set__front_right_wheel_velocity(
    const double & _arg)
  {
    this->front_right_wheel_velocity = _arg;
    return *this;
  }
  Type & set__reference_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->reference_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__MecanumDriveControllerState
    std::shared_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__MecanumDriveControllerState
    std::shared_ptr<control_msgs::msg::MecanumDriveControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MecanumDriveControllerState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->front_left_wheel_velocity != other.front_left_wheel_velocity) {
      return false;
    }
    if (this->back_left_wheel_velocity != other.back_left_wheel_velocity) {
      return false;
    }
    if (this->back_right_wheel_velocity != other.back_right_wheel_velocity) {
      return false;
    }
    if (this->front_right_wheel_velocity != other.front_right_wheel_velocity) {
      return false;
    }
    if (this->reference_velocity != other.reference_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const MecanumDriveControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MecanumDriveControllerState_

// alias to use template instance with default allocator
using MecanumDriveControllerState =
  control_msgs::msg::MecanumDriveControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__MECANUM_DRIVE_CONTROLLER_STATE__STRUCT_HPP_
