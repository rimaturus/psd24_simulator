// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/AdmittanceControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mass'
// Member 'damping'
// Member 'stiffness'
#include "std_msgs/msg/detail/float64_multi_array__struct.hpp"
// Member 'rot_base_control'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'ref_trans_base_ft'
// Member 'admittance_position'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"
// Member 'selected_axes'
#include "std_msgs/msg/detail/int8_multi_array__struct.hpp"
// Member 'ft_sensor_frame'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'admittance_acceleration'
// Member 'admittance_velocity'
#include "geometry_msgs/msg/detail/twist_stamped__struct.hpp"
// Member 'wrench_base'
#include "geometry_msgs/msg/detail/wrench_stamped__struct.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__AdmittanceControllerState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__AdmittanceControllerState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdmittanceControllerState_
{
  using Type = AdmittanceControllerState_<ContainerAllocator>;

  explicit AdmittanceControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mass(_init),
    damping(_init),
    stiffness(_init),
    rot_base_control(_init),
    ref_trans_base_ft(_init),
    selected_axes(_init),
    ft_sensor_frame(_init),
    admittance_position(_init),
    admittance_acceleration(_init),
    admittance_velocity(_init),
    wrench_base(_init),
    joint_state(_init)
  {
    (void)_init;
  }

  explicit AdmittanceControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mass(_alloc, _init),
    damping(_alloc, _init),
    stiffness(_alloc, _init),
    rot_base_control(_alloc, _init),
    ref_trans_base_ft(_alloc, _init),
    selected_axes(_alloc, _init),
    ft_sensor_frame(_alloc, _init),
    admittance_position(_alloc, _init),
    admittance_acceleration(_alloc, _init),
    admittance_velocity(_alloc, _init),
    wrench_base(_alloc, _init),
    joint_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mass_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _mass_type mass;
  using _damping_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _damping_type damping;
  using _stiffness_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _stiffness_type stiffness;
  using _rot_base_control_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _rot_base_control_type rot_base_control;
  using _ref_trans_base_ft_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _ref_trans_base_ft_type ref_trans_base_ft;
  using _selected_axes_type =
    std_msgs::msg::Int8MultiArray_<ContainerAllocator>;
  _selected_axes_type selected_axes;
  using _ft_sensor_frame_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _ft_sensor_frame_type ft_sensor_frame;
  using _admittance_position_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _admittance_position_type admittance_position;
  using _admittance_acceleration_type =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator>;
  _admittance_acceleration_type admittance_acceleration;
  using _admittance_velocity_type =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator>;
  _admittance_velocity_type admittance_velocity;
  using _wrench_base_type =
    geometry_msgs::msg::WrenchStamped_<ContainerAllocator>;
  _wrench_base_type wrench_base;
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;

  // setters for named parameter idiom
  Type & set__mass(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__damping(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->damping = _arg;
    return *this;
  }
  Type & set__stiffness(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->stiffness = _arg;
    return *this;
  }
  Type & set__rot_base_control(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->rot_base_control = _arg;
    return *this;
  }
  Type & set__ref_trans_base_ft(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->ref_trans_base_ft = _arg;
    return *this;
  }
  Type & set__selected_axes(
    const std_msgs::msg::Int8MultiArray_<ContainerAllocator> & _arg)
  {
    this->selected_axes = _arg;
    return *this;
  }
  Type & set__ft_sensor_frame(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->ft_sensor_frame = _arg;
    return *this;
  }
  Type & set__admittance_position(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->admittance_position = _arg;
    return *this;
  }
  Type & set__admittance_acceleration(
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> & _arg)
  {
    this->admittance_acceleration = _arg;
    return *this;
  }
  Type & set__admittance_velocity(
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> & _arg)
  {
    this->admittance_velocity = _arg;
    return *this;
  }
  Type & set__wrench_base(
    const geometry_msgs::msg::WrenchStamped_<ContainerAllocator> & _arg)
  {
    this->wrench_base = _arg;
    return *this;
  }
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::AdmittanceControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::AdmittanceControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::AdmittanceControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::AdmittanceControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__AdmittanceControllerState
    std::shared_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__AdmittanceControllerState
    std::shared_ptr<control_msgs::msg::AdmittanceControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdmittanceControllerState_ & other) const
  {
    if (this->mass != other.mass) {
      return false;
    }
    if (this->damping != other.damping) {
      return false;
    }
    if (this->stiffness != other.stiffness) {
      return false;
    }
    if (this->rot_base_control != other.rot_base_control) {
      return false;
    }
    if (this->ref_trans_base_ft != other.ref_trans_base_ft) {
      return false;
    }
    if (this->selected_axes != other.selected_axes) {
      return false;
    }
    if (this->ft_sensor_frame != other.ft_sensor_frame) {
      return false;
    }
    if (this->admittance_position != other.admittance_position) {
      return false;
    }
    if (this->admittance_acceleration != other.admittance_acceleration) {
      return false;
    }
    if (this->admittance_velocity != other.admittance_velocity) {
      return false;
    }
    if (this->wrench_base != other.wrench_base) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdmittanceControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdmittanceControllerState_

// alias to use template instance with default allocator
using AdmittanceControllerState =
  control_msgs::msg::AdmittanceControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__ADMITTANCE_CONTROLLER_STATE__STRUCT_HPP_
