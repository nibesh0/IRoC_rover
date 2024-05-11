// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_
#define YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_

#include "yolo_msgs/msg/detail/yolo_detection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yolo_msgs::msg::YoloDetection>()
{
  return "yolo_msgs::msg::YoloDetection";
}

template<>
inline const char * name<yolo_msgs::msg::YoloDetection>()
{
  return "yolo_msgs/msg/YoloDetection";
}

template<>
struct has_fixed_size<yolo_msgs::msg::YoloDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolo_msgs::msg::YoloDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolo_msgs::msg::YoloDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__TRAITS_HPP_
