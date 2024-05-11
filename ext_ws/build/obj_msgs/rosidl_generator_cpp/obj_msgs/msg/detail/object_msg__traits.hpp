// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from obj_msgs:msg/ObjectMsg.idl
// generated code does not contain a copyright notice

#ifndef OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__TRAITS_HPP_
#define OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__TRAITS_HPP_

#include "obj_msgs/msg/detail/object_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<obj_msgs::msg::ObjectMsg>()
{
  return "obj_msgs::msg::ObjectMsg";
}

template<>
inline const char * name<obj_msgs::msg::ObjectMsg>()
{
  return "obj_msgs/msg/ObjectMsg";
}

template<>
struct has_fixed_size<obj_msgs::msg::ObjectMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<obj_msgs::msg::ObjectMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<obj_msgs::msg::ObjectMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__TRAITS_HPP_
