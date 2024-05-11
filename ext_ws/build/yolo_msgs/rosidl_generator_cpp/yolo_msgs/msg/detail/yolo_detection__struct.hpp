// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
#define YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__yolo_msgs__msg__YoloDetection __attribute__((deprecated))
#else
# define DEPRECATED__yolo_msgs__msg__YoloDetection __declspec(deprecated)
#endif

namespace yolo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloDetection_
{
  using Type = YoloDetection_<ContainerAllocator>;

  explicit YoloDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0l;
      this->y1 = 0l;
      this->x2 = 0l;
      this->y2 = 0l;
      this->class_name = "";
      this->confidence = 0.0f;
    }
  }

  explicit YoloDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0l;
      this->y1 = 0l;
      this->x2 = 0l;
      this->y2 = 0l;
      this->class_name = "";
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _x1_type =
    int32_t;
  _x1_type x1;
  using _y1_type =
    int32_t;
  _y1_type y1;
  using _x2_type =
    int32_t;
  _x2_type x2;
  using _y2_type =
    int32_t;
  _y2_type y2;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _class_name_type class_name;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__x1(
    const int32_t & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const int32_t & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const int32_t & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const int32_t & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolo_msgs::msg::YoloDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolo_msgs::msg::YoloDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::msg::YoloDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolo_msgs::msg::YoloDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolo_msgs__msg__YoloDetection
    std::shared_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolo_msgs__msg__YoloDetection
    std::shared_ptr<yolo_msgs::msg::YoloDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloDetection_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloDetection_

// alias to use template instance with default allocator
using YoloDetection =
  yolo_msgs::msg::YoloDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
