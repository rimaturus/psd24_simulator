// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:action/PointHead.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"
// Member 'pointing_axis'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_Goal __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_Goal __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_Goal_
{
  using Type = PointHead_Goal_<ContainerAllocator>;

  explicit PointHead_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_init),
    pointing_axis(_init),
    min_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pointing_frame = "";
      this->max_velocity = 0.0;
    }
  }

  explicit PointHead_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc, _init),
    pointing_axis(_alloc, _init),
    pointing_frame(_alloc),
    min_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pointing_frame = "";
      this->max_velocity = 0.0;
    }
  }

  // field types and members
  using _target_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _target_type target;
  using _pointing_axis_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _pointing_axis_type pointing_axis;
  using _pointing_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pointing_frame_type pointing_frame;
  using _min_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _min_duration_type min_duration;
  using _max_velocity_type =
    double;
  _max_velocity_type max_velocity;

  // setters for named parameter idiom
  Type & set__target(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__pointing_axis(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pointing_axis = _arg;
    return *this;
  }
  Type & set__pointing_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pointing_frame = _arg;
    return *this;
  }
  Type & set__min_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->min_duration = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const double & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_Goal
    std::shared_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_Goal
    std::shared_ptr<control_msgs::action::PointHead_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_Goal_ & other) const
  {
    if (this->target != other.target) {
      return false;
    }
    if (this->pointing_axis != other.pointing_axis) {
      return false;
    }
    if (this->pointing_frame != other.pointing_frame) {
      return false;
    }
    if (this->min_duration != other.min_duration) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_Goal_

// alias to use template instance with default allocator
using PointHead_Goal =
  control_msgs::action::PointHead_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_Result __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_Result __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_Result_
{
  using Type = PointHead_Result_<ContainerAllocator>;

  explicit PointHead_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PointHead_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    control_msgs::action::PointHead_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_Result
    std::shared_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_Result
    std::shared_ptr<control_msgs::action::PointHead_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_Result_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_Result_

// alias to use template instance with default allocator
using PointHead_Result =
  control_msgs::action::PointHead_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_Feedback __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_Feedback_
{
  using Type = PointHead_Feedback_<ContainerAllocator>;

  explicit PointHead_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pointing_angle_error = 0.0;
    }
  }

  explicit PointHead_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pointing_angle_error = 0.0;
    }
  }

  // field types and members
  using _pointing_angle_error_type =
    double;
  _pointing_angle_error_type pointing_angle_error;

  // setters for named parameter idiom
  Type & set__pointing_angle_error(
    const double & _arg)
  {
    this->pointing_angle_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_Feedback
    std::shared_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_Feedback
    std::shared_ptr<control_msgs::action::PointHead_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_Feedback_ & other) const
  {
    if (this->pointing_angle_error != other.pointing_angle_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_Feedback_

// alias to use template instance with default allocator
using PointHead_Feedback =
  control_msgs::action::PointHead_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "control_msgs/action/detail/point_head__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_SendGoal_Request __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_SendGoal_Request_
{
  using Type = PointHead_SendGoal_Request_<ContainerAllocator>;

  explicit PointHead_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PointHead_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    control_msgs::action::PointHead_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const control_msgs::action::PointHead_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_SendGoal_Request
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_SendGoal_Request
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_SendGoal_Request_

// alias to use template instance with default allocator
using PointHead_SendGoal_Request =
  control_msgs::action::PointHead_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_SendGoal_Response __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_SendGoal_Response_
{
  using Type = PointHead_SendGoal_Response_<ContainerAllocator>;

  explicit PointHead_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PointHead_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_SendGoal_Response
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_SendGoal_Response
    std::shared_ptr<control_msgs::action::PointHead_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_SendGoal_Response_

// alias to use template instance with default allocator
using PointHead_SendGoal_Response =
  control_msgs::action::PointHead_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs

namespace control_msgs
{

namespace action
{

struct PointHead_SendGoal
{
  using Request = control_msgs::action::PointHead_SendGoal_Request;
  using Response = control_msgs::action::PointHead_SendGoal_Response;
};

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_GetResult_Request __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_GetResult_Request_
{
  using Type = PointHead_GetResult_Request_<ContainerAllocator>;

  explicit PointHead_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PointHead_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_GetResult_Request
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_GetResult_Request
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_GetResult_Request_

// alias to use template instance with default allocator
using PointHead_GetResult_Request =
  control_msgs::action::PointHead_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/point_head__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_GetResult_Response __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_GetResult_Response_
{
  using Type = PointHead_GetResult_Response_<ContainerAllocator>;

  explicit PointHead_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PointHead_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    control_msgs::action::PointHead_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const control_msgs::action::PointHead_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_GetResult_Response
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_GetResult_Response
    std::shared_ptr<control_msgs::action::PointHead_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_GetResult_Response_

// alias to use template instance with default allocator
using PointHead_GetResult_Response =
  control_msgs::action::PointHead_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs

namespace control_msgs
{

namespace action
{

struct PointHead_GetResult
{
  using Request = control_msgs::action::PointHead_GetResult_Request;
  using Response = control_msgs::action::PointHead_GetResult_Response;
};

}  // namespace action

}  // namespace control_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/point_head__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__action__PointHead_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__action__PointHead_FeedbackMessage __declspec(deprecated)
#endif

namespace control_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PointHead_FeedbackMessage_
{
  using Type = PointHead_FeedbackMessage_<ContainerAllocator>;

  explicit PointHead_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PointHead_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    control_msgs::action::PointHead_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const control_msgs::action::PointHead_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__action__PointHead_FeedbackMessage
    std::shared_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__action__PointHead_FeedbackMessage
    std::shared_ptr<control_msgs::action::PointHead_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointHead_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointHead_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointHead_FeedbackMessage_

// alias to use template instance with default allocator
using PointHead_FeedbackMessage =
  control_msgs::action::PointHead_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace control_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace control_msgs
{

namespace action
{

struct PointHead
{
  /// The goal message defined in the action definition.
  using Goal = control_msgs::action::PointHead_Goal;
  /// The result message defined in the action definition.
  using Result = control_msgs::action::PointHead_Result;
  /// The feedback message defined in the action definition.
  using Feedback = control_msgs::action::PointHead_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = control_msgs::action::PointHead_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = control_msgs::action::PointHead_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = control_msgs::action::PointHead_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PointHead PointHead;

}  // namespace action

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_HPP_
