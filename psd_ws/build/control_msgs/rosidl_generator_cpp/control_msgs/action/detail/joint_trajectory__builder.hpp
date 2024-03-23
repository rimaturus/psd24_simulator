// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:action/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/action/detail/joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_Goal_trajectory
{
public:
  Init_JointTrajectory_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::JointTrajectory_Goal trajectory(::control_msgs::action::JointTrajectory_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::JointTrajectory_Goal>()
{
  return control_msgs::action::builder::Init_JointTrajectory_Goal_trajectory();
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
auto build<::control_msgs::action::JointTrajectory_Result>()
{
  return ::control_msgs::action::JointTrajectory_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
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
auto build<::control_msgs::action::JointTrajectory_Feedback>()
{
  return ::control_msgs::action::JointTrajectory_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_JointTrajectory_SendGoal_Request_goal(::control_msgs::action::JointTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::JointTrajectory_SendGoal_Request goal(::control_msgs::action::JointTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_SendGoal_Request msg_;
};

class Init_JointTrajectory_SendGoal_Request_goal_id
{
public:
  Init_JointTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_SendGoal_Request_goal goal_id(::control_msgs::action::JointTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_JointTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::JointTrajectory_SendGoal_Request>()
{
  return control_msgs::action::builder::Init_JointTrajectory_SendGoal_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_JointTrajectory_SendGoal_Response_stamp(::control_msgs::action::JointTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::JointTrajectory_SendGoal_Response stamp(::control_msgs::action::JointTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_SendGoal_Response msg_;
};

class Init_JointTrajectory_SendGoal_Response_accepted
{
public:
  Init_JointTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_SendGoal_Response_stamp accepted(::control_msgs::action::JointTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_JointTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::JointTrajectory_SendGoal_Response>()
{
  return control_msgs::action::builder::Init_JointTrajectory_SendGoal_Response_accepted();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_GetResult_Request_goal_id
{
public:
  Init_JointTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::JointTrajectory_GetResult_Request goal_id(::control_msgs::action::JointTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::JointTrajectory_GetResult_Request>()
{
  return control_msgs::action::builder::Init_JointTrajectory_GetResult_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_GetResult_Response_result
{
public:
  explicit Init_JointTrajectory_GetResult_Response_result(::control_msgs::action::JointTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::JointTrajectory_GetResult_Response result(::control_msgs::action::JointTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_GetResult_Response msg_;
};

class Init_JointTrajectory_GetResult_Response_status
{
public:
  Init_JointTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_GetResult_Response_result status(::control_msgs::action::JointTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_JointTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::JointTrajectory_GetResult_Response>()
{
  return control_msgs::action::builder::Init_JointTrajectory_GetResult_Response_status();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_JointTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_JointTrajectory_FeedbackMessage_feedback(::control_msgs::action::JointTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::JointTrajectory_FeedbackMessage feedback(::control_msgs::action::JointTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_FeedbackMessage msg_;
};

class Init_JointTrajectory_FeedbackMessage_goal_id
{
public:
  Init_JointTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectory_FeedbackMessage_feedback goal_id(::control_msgs::action::JointTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_JointTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_msgs::action::JointTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::JointTrajectory_FeedbackMessage>()
{
  return control_msgs::action::builder::Init_JointTrajectory_FeedbackMessage_goal_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__BUILDER_HPP_
