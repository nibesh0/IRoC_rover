// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_

#include "yolo_msgs/msg/detail/yolo_detection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_YoloDetection_confidence
{
public:
  explicit Init_YoloDetection_confidence(::yolo_msgs::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::YoloDetection confidence(::yolo_msgs::msg::YoloDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::YoloDetection msg_;
};

class Init_YoloDetection_class_name
{
public:
  explicit Init_YoloDetection_class_name(::yolo_msgs::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_confidence class_name(::yolo_msgs::msg::YoloDetection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_YoloDetection_confidence(msg_);
  }

private:
  ::yolo_msgs::msg::YoloDetection msg_;
};

class Init_YoloDetection_y2
{
public:
  explicit Init_YoloDetection_y2(::yolo_msgs::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_class_name y2(::yolo_msgs::msg::YoloDetection::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_YoloDetection_class_name(msg_);
  }

private:
  ::yolo_msgs::msg::YoloDetection msg_;
};

class Init_YoloDetection_x2
{
public:
  explicit Init_YoloDetection_x2(::yolo_msgs::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_y2 x2(::yolo_msgs::msg::YoloDetection::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_YoloDetection_y2(msg_);
  }

private:
  ::yolo_msgs::msg::YoloDetection msg_;
};

class Init_YoloDetection_y1
{
public:
  explicit Init_YoloDetection_y1(::yolo_msgs::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_x2 y1(::yolo_msgs::msg::YoloDetection::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_YoloDetection_x2(msg_);
  }

private:
  ::yolo_msgs::msg::YoloDetection msg_;
};

class Init_YoloDetection_x1
{
public:
  Init_YoloDetection_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloDetection_y1 x1(::yolo_msgs::msg::YoloDetection::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_YoloDetection_y1(msg_);
  }

private:
  ::yolo_msgs::msg::YoloDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::YoloDetection>()
{
  return yolo_msgs::msg::builder::Init_YoloDetection_x1();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
