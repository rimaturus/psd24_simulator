// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:action/SingleJointPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__BUILDER_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/action/detail/single_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_Goal_max_velocity
{
public:
  explicit Init_SingleJointPosition_Goal_max_velocity(::control_msgs::action::SingleJointPosition_Goal & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::SingleJointPosition_Goal max_velocity(::control_msgs::action::SingleJointPosition_Goal::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Goal msg_;
};

class Init_SingleJointPosition_Goal_min_duration
{
public:
  explicit Init_SingleJointPosition_Goal_min_duration(::control_msgs::action::SingleJointPosition_Goal & msg)
  : msg_(msg)
  {}
  Init_SingleJointPosition_Goal_max_velocity min_duration(::control_msgs::action::SingleJointPosition_Goal::_min_duration_type arg)
  {
    msg_.min_duration = std::move(arg);
    return Init_SingleJointPosition_Goal_max_velocity(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Goal msg_;
};

class Init_SingleJointPosition_Goal_position
{
public:
  Init_SingleJointPosition_Goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleJointPosition_Goal_min_duration position(::control_msgs::action::SingleJointPosition_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SingleJointPosition_Goal_min_duration(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_Goal>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_Goal_position();
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
auto build<::control_msgs::action::SingleJointPosition_Result>()
{
  return ::control_msgs::action::SingleJointPosition_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_Feedback_error
{
public:
  explicit Init_SingleJointPosition_Feedback_error(::control_msgs::action::SingleJointPosition_Feedback & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::SingleJointPosition_Feedback error(::control_msgs::action::SingleJointPosition_Feedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Feedback msg_;
};

class Init_SingleJointPosition_Feedback_velocity
{
public:
  explicit Init_SingleJointPosition_Feedback_velocity(::control_msgs::action::SingleJointPosition_Feedback & msg)
  : msg_(msg)
  {}
  Init_SingleJointPosition_Feedback_error velocity(::control_msgs::action::SingleJointPosition_Feedback::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SingleJointPosition_Feedback_error(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Feedback msg_;
};

class Init_SingleJointPosition_Feedback_position
{
public:
  explicit Init_SingleJointPosition_Feedback_position(::control_msgs::action::SingleJointPosition_Feedback & msg)
  : msg_(msg)
  {}
  Init_SingleJointPosition_Feedback_velocity position(::control_msgs::action::SingleJointPosition_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SingleJointPosition_Feedback_velocity(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Feedback msg_;
};

class Init_SingleJointPosition_Feedback_header
{
public:
  Init_SingleJointPosition_Feedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleJointPosition_Feedback_position header(::control_msgs::action::SingleJointPosition_Feedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SingleJointPosition_Feedback_position(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_Feedback>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_Feedback_header();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_SendGoal_Request_goal
{
public:
  explicit Init_SingleJointPosition_SendGoal_Request_goal(::control_msgs::action::SingleJointPosition_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::SingleJointPosition_SendGoal_Request goal(::control_msgs::action::SingleJointPosition_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_SendGoal_Request msg_;
};

class Init_SingleJointPosition_SendGoal_Request_goal_id
{
public:
  Init_SingleJointPosition_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleJointPosition_SendGoal_Request_goal goal_id(::control_msgs::action::SingleJointPosition_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SingleJointPosition_SendGoal_Request_goal(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_SendGoal_Request>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_SendGoal_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_SendGoal_Response_stamp
{
public:
  explicit Init_SingleJointPosition_SendGoal_Response_stamp(::control_msgs::action::SingleJointPosition_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::SingleJointPosition_SendGoal_Response stamp(::control_msgs::action::SingleJointPosition_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_SendGoal_Response msg_;
};

class Init_SingleJointPosition_SendGoal_Response_accepted
{
public:
  Init_SingleJointPosition_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleJointPosition_SendGoal_Response_stamp accepted(::control_msgs::action::SingleJointPosition_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SingleJointPosition_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_SendGoal_Response>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_SendGoal_Response_accepted();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_GetResult_Request_goal_id
{
public:
  Init_SingleJointPosition_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::SingleJointPosition_GetResult_Request goal_id(::control_msgs::action::SingleJointPosition_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_GetResult_Request>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_GetResult_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_GetResult_Response_result
{
public:
  explicit Init_SingleJointPosition_GetResult_Response_result(::control_msgs::action::SingleJointPosition_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::SingleJointPosition_GetResult_Response result(::control_msgs::action::SingleJointPosition_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_GetResult_Response msg_;
};

class Init_SingleJointPosition_GetResult_Response_status
{
public:
  Init_SingleJointPosition_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleJointPosition_GetResult_Response_result status(::control_msgs::action::SingleJointPosition_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SingleJointPosition_GetResult_Response_result(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_GetResult_Response>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_GetResult_Response_status();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_SingleJointPosition_FeedbackMessage_feedback
{
public:
  explicit Init_SingleJointPosition_FeedbackMessage_feedback(::control_msgs::action::SingleJointPosition_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::SingleJointPosition_FeedbackMessage feedback(::control_msgs::action::SingleJointPosition_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_FeedbackMessage msg_;
};

class Init_SingleJointPosition_FeedbackMessage_goal_id
{
public:
  Init_SingleJointPosition_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleJointPosition_FeedbackMessage_feedback goal_id(::control_msgs::action::SingleJointPosition_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SingleJointPosition_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_msgs::action::SingleJointPosition_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::SingleJointPosition_FeedbackMessage>()
{
  return control_msgs::action::builder::Init_SingleJointPosition_FeedbackMessage_goal_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__BUILDER_HPP_
