// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_msgs/action/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_Goal_command
{
public:
  Init_GripperCommand_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::GripperCommand_Goal command(::control_msgs::action::GripperCommand_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_Goal>()
{
  return control_msgs::action::builder::Init_GripperCommand_Goal_command();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_Result_reached_goal
{
public:
  explicit Init_GripperCommand_Result_reached_goal(::control_msgs::action::GripperCommand_Result & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::GripperCommand_Result reached_goal(::control_msgs::action::GripperCommand_Result::_reached_goal_type arg)
  {
    msg_.reached_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Result msg_;
};

class Init_GripperCommand_Result_stalled
{
public:
  explicit Init_GripperCommand_Result_stalled(::control_msgs::action::GripperCommand_Result & msg)
  : msg_(msg)
  {}
  Init_GripperCommand_Result_reached_goal stalled(::control_msgs::action::GripperCommand_Result::_stalled_type arg)
  {
    msg_.stalled = std::move(arg);
    return Init_GripperCommand_Result_reached_goal(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Result msg_;
};

class Init_GripperCommand_Result_effort
{
public:
  explicit Init_GripperCommand_Result_effort(::control_msgs::action::GripperCommand_Result & msg)
  : msg_(msg)
  {}
  Init_GripperCommand_Result_stalled effort(::control_msgs::action::GripperCommand_Result::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_GripperCommand_Result_stalled(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Result msg_;
};

class Init_GripperCommand_Result_position
{
public:
  Init_GripperCommand_Result_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_Result_effort position(::control_msgs::action::GripperCommand_Result::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperCommand_Result_effort(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_Result>()
{
  return control_msgs::action::builder::Init_GripperCommand_Result_position();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_Feedback_reached_goal
{
public:
  explicit Init_GripperCommand_Feedback_reached_goal(::control_msgs::action::GripperCommand_Feedback & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::GripperCommand_Feedback reached_goal(::control_msgs::action::GripperCommand_Feedback::_reached_goal_type arg)
  {
    msg_.reached_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Feedback msg_;
};

class Init_GripperCommand_Feedback_stalled
{
public:
  explicit Init_GripperCommand_Feedback_stalled(::control_msgs::action::GripperCommand_Feedback & msg)
  : msg_(msg)
  {}
  Init_GripperCommand_Feedback_reached_goal stalled(::control_msgs::action::GripperCommand_Feedback::_stalled_type arg)
  {
    msg_.stalled = std::move(arg);
    return Init_GripperCommand_Feedback_reached_goal(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Feedback msg_;
};

class Init_GripperCommand_Feedback_effort
{
public:
  explicit Init_GripperCommand_Feedback_effort(::control_msgs::action::GripperCommand_Feedback & msg)
  : msg_(msg)
  {}
  Init_GripperCommand_Feedback_stalled effort(::control_msgs::action::GripperCommand_Feedback::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_GripperCommand_Feedback_stalled(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Feedback msg_;
};

class Init_GripperCommand_Feedback_position
{
public:
  Init_GripperCommand_Feedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_Feedback_effort position(::control_msgs::action::GripperCommand_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperCommand_Feedback_effort(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_Feedback>()
{
  return control_msgs::action::builder::Init_GripperCommand_Feedback_position();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_SendGoal_Request_goal
{
public:
  explicit Init_GripperCommand_SendGoal_Request_goal(::control_msgs::action::GripperCommand_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::GripperCommand_SendGoal_Request goal(::control_msgs::action::GripperCommand_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_SendGoal_Request msg_;
};

class Init_GripperCommand_SendGoal_Request_goal_id
{
public:
  Init_GripperCommand_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_SendGoal_Request_goal goal_id(::control_msgs::action::GripperCommand_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GripperCommand_SendGoal_Request_goal(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_SendGoal_Request>()
{
  return control_msgs::action::builder::Init_GripperCommand_SendGoal_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_SendGoal_Response_stamp
{
public:
  explicit Init_GripperCommand_SendGoal_Response_stamp(::control_msgs::action::GripperCommand_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::GripperCommand_SendGoal_Response stamp(::control_msgs::action::GripperCommand_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_SendGoal_Response msg_;
};

class Init_GripperCommand_SendGoal_Response_accepted
{
public:
  Init_GripperCommand_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_SendGoal_Response_stamp accepted(::control_msgs::action::GripperCommand_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GripperCommand_SendGoal_Response_stamp(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_SendGoal_Response>()
{
  return control_msgs::action::builder::Init_GripperCommand_SendGoal_Response_accepted();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_GetResult_Request_goal_id
{
public:
  Init_GripperCommand_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::control_msgs::action::GripperCommand_GetResult_Request goal_id(::control_msgs::action::GripperCommand_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_GetResult_Request>()
{
  return control_msgs::action::builder::Init_GripperCommand_GetResult_Request_goal_id();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_GetResult_Response_result
{
public:
  explicit Init_GripperCommand_GetResult_Response_result(::control_msgs::action::GripperCommand_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::GripperCommand_GetResult_Response result(::control_msgs::action::GripperCommand_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_GetResult_Response msg_;
};

class Init_GripperCommand_GetResult_Response_status
{
public:
  Init_GripperCommand_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_GetResult_Response_result status(::control_msgs::action::GripperCommand_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GripperCommand_GetResult_Response_result(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_GetResult_Response>()
{
  return control_msgs::action::builder::Init_GripperCommand_GetResult_Response_status();
}

}  // namespace control_msgs


namespace control_msgs
{

namespace action
{

namespace builder
{

class Init_GripperCommand_FeedbackMessage_feedback
{
public:
  explicit Init_GripperCommand_FeedbackMessage_feedback(::control_msgs::action::GripperCommand_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::control_msgs::action::GripperCommand_FeedbackMessage feedback(::control_msgs::action::GripperCommand_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_FeedbackMessage msg_;
};

class Init_GripperCommand_FeedbackMessage_goal_id
{
public:
  Init_GripperCommand_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_FeedbackMessage_feedback goal_id(::control_msgs::action::GripperCommand_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GripperCommand_FeedbackMessage_feedback(msg_);
  }

private:
  ::control_msgs::action::GripperCommand_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_msgs::action::GripperCommand_FeedbackMessage>()
{
  return control_msgs::action::builder::Init_GripperCommand_FeedbackMessage_goal_id();
}

}  // namespace control_msgs

#endif  // CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
