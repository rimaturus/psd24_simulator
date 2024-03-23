// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__control_msgs__srv__QueryCalibrationState_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__srv__QueryCalibrationState_Request __declspec(deprecated)
#endif

namespace control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryCalibrationState_Request_
{
  using Type = QueryCalibrationState_Request_<ContainerAllocator>;

  explicit QueryCalibrationState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit QueryCalibrationState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__srv__QueryCalibrationState_Request
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__srv__QueryCalibrationState_Request
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryCalibrationState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryCalibrationState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryCalibrationState_Request_

// alias to use template instance with default allocator
using QueryCalibrationState_Request =
  control_msgs::srv::QueryCalibrationState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_msgs


#ifndef _WIN32
# define DEPRECATED__control_msgs__srv__QueryCalibrationState_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__srv__QueryCalibrationState_Response __declspec(deprecated)
#endif

namespace control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QueryCalibrationState_Response_
{
  using Type = QueryCalibrationState_Response_<ContainerAllocator>;

  explicit QueryCalibrationState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_calibrated = false;
    }
  }

  explicit QueryCalibrationState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_calibrated = false;
    }
  }

  // field types and members
  using _is_calibrated_type =
    bool;
  _is_calibrated_type is_calibrated;

  // setters for named parameter idiom
  Type & set__is_calibrated(
    const bool & _arg)
  {
    this->is_calibrated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__srv__QueryCalibrationState_Response
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__srv__QueryCalibrationState_Response
    std::shared_ptr<control_msgs::srv::QueryCalibrationState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QueryCalibrationState_Response_ & other) const
  {
    if (this->is_calibrated != other.is_calibrated) {
      return false;
    }
    return true;
  }
  bool operator!=(const QueryCalibrationState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QueryCalibrationState_Response_

// alias to use template instance with default allocator
using QueryCalibrationState_Response =
  control_msgs::srv::QueryCalibrationState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace control_msgs

namespace control_msgs
{

namespace srv
{

struct QueryCalibrationState
{
  using Request = control_msgs::srv::QueryCalibrationState_Request;
  using Response = control_msgs::srv::QueryCalibrationState_Response;
};

}  // namespace srv

}  // namespace control_msgs

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_CALIBRATION_STATE__STRUCT_HPP_
