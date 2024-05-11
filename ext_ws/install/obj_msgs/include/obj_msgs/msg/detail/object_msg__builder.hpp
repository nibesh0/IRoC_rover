// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from obj_msgs:msg/ObjectMsg.idl
// generated code does not contain a copyright notice

#ifndef OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__BUILDER_HPP_
#define OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__BUILDER_HPP_

#include "obj_msgs/msg/detail/object_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace obj_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectMsg_class_name
{
public:
  explicit Init_ObjectMsg_class_name(::obj_msgs::msg::ObjectMsg & msg)
  : msg_(msg)
  {}
  ::obj_msgs::msg::ObjectMsg class_name(::obj_msgs::msg::ObjectMsg::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::obj_msgs::msg::ObjectMsg msg_;
};

class Init_ObjectMsg_distance
{
public:
  explicit Init_ObjectMsg_distance(::obj_msgs::msg::ObjectMsg & msg)
  : msg_(msg)
  {}
  Init_ObjectMsg_class_name distance(::obj_msgs::msg::ObjectMsg::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ObjectMsg_class_name(msg_);
  }

private:
  ::obj_msgs::msg::ObjectMsg msg_;
};

class Init_ObjectMsg_width
{
public:
  explicit Init_ObjectMsg_width(::obj_msgs::msg::ObjectMsg & msg)
  : msg_(msg)
  {}
  Init_ObjectMsg_distance width(::obj_msgs::msg::ObjectMsg::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ObjectMsg_distance(msg_);
  }

private:
  ::obj_msgs::msg::ObjectMsg msg_;
};

class Init_ObjectMsg_height
{
public:
  explicit Init_ObjectMsg_height(::obj_msgs::msg::ObjectMsg & msg)
  : msg_(msg)
  {}
  Init_ObjectMsg_width height(::obj_msgs::msg::ObjectMsg::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ObjectMsg_width(msg_);
  }

private:
  ::obj_msgs::msg::ObjectMsg msg_;
};

class Init_ObjectMsg_y
{
public:
  explicit Init_ObjectMsg_y(::obj_msgs::msg::ObjectMsg & msg)
  : msg_(msg)
  {}
  Init_ObjectMsg_height y(::obj_msgs::msg::ObjectMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ObjectMsg_height(msg_);
  }

private:
  ::obj_msgs::msg::ObjectMsg msg_;
};

class Init_ObjectMsg_x
{
public:
  Init_ObjectMsg_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectMsg_y x(::obj_msgs::msg::ObjectMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ObjectMsg_y(msg_);
  }

private:
  ::obj_msgs::msg::ObjectMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::obj_msgs::msg::ObjectMsg>()
{
  return obj_msgs::msg::builder::Init_ObjectMsg_x();
}

}  // namespace obj_msgs

#endif  // OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__BUILDER_HPP_
