// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from obj_msgs:msg/ObjectMsg.idl
// generated code does not contain a copyright notice

#ifndef OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__STRUCT_HPP_
#define OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__obj_msgs__msg__ObjectMsg __attribute__((deprecated))
#else
# define DEPRECATED__obj_msgs__msg__ObjectMsg __declspec(deprecated)
#endif

namespace obj_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectMsg_
{
  using Type = ObjectMsg_<ContainerAllocator>;

  explicit ObjectMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->height = 0.0f;
      this->width = 0.0f;
      this->distance = 0.0f;
      this->class_name = "";
    }
  }

  explicit ObjectMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->height = 0.0f;
      this->width = 0.0f;
      this->distance = 0.0f;
      this->class_name = "";
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _height_type =
    float;
  _height_type height;
  using _width_type =
    float;
  _width_type width;
  using _distance_type =
    float;
  _distance_type distance;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _class_name_type class_name;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    obj_msgs::msg::ObjectMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const obj_msgs::msg::ObjectMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      obj_msgs::msg::ObjectMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      obj_msgs::msg::ObjectMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__obj_msgs__msg__ObjectMsg
    std::shared_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__obj_msgs__msg__ObjectMsg
    std::shared_ptr<obj_msgs::msg::ObjectMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectMsg_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectMsg_

// alias to use template instance with default allocator
using ObjectMsg =
  obj_msgs::msg::ObjectMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace obj_msgs

#endif  // OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__STRUCT_HPP_
