// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__JointComponentTolerance __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__JointComponentTolerance __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointComponentTolerance_
{
  using Type = JointComponentTolerance_<ContainerAllocator>;

  explicit JointComponentTolerance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->component = 0;
      this->position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
    }
  }

  explicit JointComponentTolerance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
      this->component = 0;
      this->position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _component_type =
    uint16_t;
  _component_type component;
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__component(
    const uint16_t & _arg)
  {
    this->component = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t X_AXIS =
    1u;
  static constexpr uint16_t Y_AXIS =
    2u;
  static constexpr uint16_t Z_AXIS =
    3u;
  static constexpr uint16_t TRANSLATION =
    4u;
  static constexpr uint16_t ROTATION =
    5u;

  // pointer types
  using RawPtr =
    control_msgs::msg::JointComponentTolerance_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::JointComponentTolerance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointComponentTolerance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointComponentTolerance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__JointComponentTolerance
    std::shared_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__JointComponentTolerance
    std::shared_ptr<control_msgs::msg::JointComponentTolerance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointComponentTolerance_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->component != other.component) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointComponentTolerance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointComponentTolerance_

// alias to use template instance with default allocator
using JointComponentTolerance =
  control_msgs::msg::JointComponentTolerance_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t JointComponentTolerance_<ContainerAllocator>::X_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t JointComponentTolerance_<ContainerAllocator>::Y_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t JointComponentTolerance_<ContainerAllocator>::Z_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t JointComponentTolerance_<ContainerAllocator>::TRANSLATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t JointComponentTolerance_<ContainerAllocator>::ROTATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__STRUCT_HPP_
