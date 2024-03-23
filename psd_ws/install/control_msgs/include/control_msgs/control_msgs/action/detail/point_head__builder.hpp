// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:action/PointHead.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__BUILDER_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/action/detail/point_head__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_Goal_max_velocity
{
public:
  explicit Init_PointHead_Goal_max_velocity(::control_msgs::action::PointHead_Goal & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::PointHead_Goal max_velocity(::control_msgs::action::PointHead_Goal::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_Goal msg_;
};

class Init_PointHead_Goal_min_duration
{
public:
  explicit Init_PointHead_Goal_min_duration(::control_msgs::action::PointHead_Goal & msg)
  : msg_(msg)
  {}
  Init_PointHead_Goal_max_velocity min_duration(::control_msgs::action::PointHead_Goal::_min_duration_type arg)
  {
    msg_.min_duration = std::move(arg);
    return Init_PointHead_Goal_max_velocity(msg_);
  }

private:
  ::control_msgs::action::PointHead_Goal msg_;
};

class Init_PointHead_Goal_pointing_frame
{
public:
  explicit Init_PointHead_Goal_pointing_frame(::control_msgs::action::PointHead_Goal & msg)
  : msg_(msg)
  {}
  Init_PointHead_Goal_min_duration pointing_frame(::control_msgs::action::PointHead_Goal::_pointing_frame_type arg)
  {
    msg_.pointing_frame = std::move(arg);
    return Init_PointHead_Goal_min_duration(msg_);
  }

private:
  ::control_msgs::action::PointHead_Goal msg_;
};

class Init_PointHead_Goal_pointing_axis
{
public:
  explicit Init_PointHead_Goal_pointing_axis(::control_msgs::action::PointHead_Goal & msg)
  : msg_(msg)
  {}
  Init_PointHead_Goal_pointing_frame pointing_axis(::control_msgs::action::PointHead_Goal::_pointing_axis_type arg)
  {
    msg_.pointing_axis = std::move(arg);
    return Init_PointHead_Goal_pointing_frame(msg_);
  }

private:
  ::control_msgs::action::PointHead_Goal msg_;
};

class Init_PointHead_Goal_target
{
public:
  Init_PointHead_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointHead_Goal_pointing_axis target(::control_msgs::action::PointHead_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_PointHead_Goal_pointing_axis(msg_);
  }

private:
  ::control_msgs::action::PointHead_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_Goal>()
{
  return control_msgs::action::builder::Init_PointHead_Goal_target();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_Result>()
{
  return ::control_msgs::action::PointHead_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_Feedback_pointing_angle_error
{
public:
  Init_PointHead_Feedback_pointing_angle_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::PointHead_Feedback pointing_angle_error(::control_msgs::action::PointHead_Feedback::_pointing_angle_error_type arg)
  {
    msg_.pointing_angle_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_Feedback>()
{
  return control_msgs::action::builder::Init_PointHead_Feedback_pointing_angle_error();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_SendGoal_Request_goal
{
public:
  explicit Init_PointHead_SendGoal_Request_goal(::control_msgs::action::PointHead_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::PointHead_SendGoal_Request goal(::control_msgs::action::PointHead_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_SendGoal_Request msg_;
};

class Init_PointHead_SendGoal_Request_goal_id
{
public:
  Init_PointHead_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointHead_SendGoal_Request_goal goal_id(::control_msgs::action::PointHead_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PointHead_SendGoal_Request_goal(msg_);
  }

private:
  ::control_msgs::action::PointHead_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_SendGoal_Request>()
{
  return control_msgs::action::builder::Init_PointHead_SendGoal_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_SendGoal_Response_stamp
{
public:
  explicit Init_PointHead_SendGoal_Response_stamp(::control_msgs::action::PointHead_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::PointHead_SendGoal_Response stamp(::control_msgs::action::PointHead_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_SendGoal_Response msg_;
};

class Init_PointHead_SendGoal_Response_accepted
{
public:
  Init_PointHead_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointHead_SendGoal_Response_stamp accepted(::control_msgs::action::PointHead_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PointHead_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_msgs::action::PointHead_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_SendGoal_Response>()
{
  return control_msgs::action::builder::Init_PointHead_SendGoal_Response_accepted();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_GetResult_Request_goal_id
{
public:
  Init_PointHead_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::PointHead_GetResult_Request goal_id(::control_msgs::action::PointHead_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_GetResult_Request>()
{
  return control_msgs::action::builder::Init_PointHead_GetResult_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_GetResult_Response_result
{
public:
  explicit Init_PointHead_GetResult_Response_result(::control_msgs::action::PointHead_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::PointHead_GetResult_Response result(::control_msgs::action::PointHead_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_GetResult_Response msg_;
};

class Init_PointHead_GetResult_Response_status
{
public:
  Init_PointHead_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointHead_GetResult_Response_result status(::control_msgs::action::PointHead_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PointHead_GetResult_Response_result(msg_);
  }

private:
  ::control_msgs::action::PointHead_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_GetResult_Response>()
{
  return control_msgs::action::builder::Init_PointHead_GetResult_Response_status();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_PointHead_FeedbackMessage_feedback
{
public:
  explicit Init_PointHead_FeedbackMessage_feedback(::control_msgs::action::PointHead_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::PointHead_FeedbackMessage feedback(::control_msgs::action::PointHead_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::PointHead_FeedbackMessage msg_;
};

class Init_PointHead_FeedbackMessage_goal_id
{
public:
  Init_PointHead_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointHead_FeedbackMessage_feedback goal_id(::control_msgs::action::PointHead_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PointHead_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_msgs::action::PointHead_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::PointHead_FeedbackMessage>()
{
  return control_msgs::action::builder::Init_PointHead_FeedbackMessage_goal_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__BUILDER_HPP_
