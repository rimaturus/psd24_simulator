// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from psd_vehicle_interfaces:msg/ObstacleInfo.idl
// generated code does not contain a copyright notice

#ifndef PSD_VEHICLE_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
#define PSD_VEHICLE_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__psd_vehicle_interfaces__msg__ObstacleInfo __attribute__((deprecated))
#else
# define DEPRECATED__psd_vehicle_interfaces__msg__ObstacleInfo __declspec(deprecated)
#endif

namespace psd_vehicle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleInfo_
{
  using Type = ObstacleInfo_<ContainerAllocator>;

  explicit ObstacleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->shape = "";
      this->area = 0.0f;
      this->frame_id = "";
    }
  }

  explicit ObstacleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    shape(_alloc),
    position(_alloc, _init),
    frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->shape = "";
      this->area = 0.0f;
      this->frame_id = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _shape_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shape_type shape;
  using _position_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _position_type position;
  using _area_type =
    float;
  _area_type area;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__shape(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__area(
    const float & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__psd_vehicle_interfaces__msg__ObstacleInfo
    std::shared_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__psd_vehicle_interfaces__msg__ObstacleInfo
    std::shared_ptr<psd_vehicle_interfaces::msg::ObstacleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->area != other.area) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleInfo_

// alias to use template instance with default allocator
using ObstacleInfo =
  psd_vehicle_interfaces::msg::ObstacleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace psd_vehicle_interfaces

#endif  // PSD_VEHICLE_INTERFACES__MSG__DETAIL__OBSTACLE_INFO__STRUCT_HPP_
