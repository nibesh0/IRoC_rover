// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/yolo_detection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "yolo_msgs/msg/detail/yolo_detection__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace yolo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
cdr_serialize(
  const yolo_msgs::msg::YoloDetection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x1
  cdr << ros_message.x1;
  // Member: y1
  cdr << ros_message.y1;
  // Member: x2
  cdr << ros_message.x2;
  // Member: y2
  cdr << ros_message.y2;
  // Member: class_name
  cdr << ros_message.class_name;
  // Member: confidence
  cdr << ros_message.confidence;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  yolo_msgs::msg::YoloDetection & ros_message)
{
  // Member: x1
  cdr >> ros_message.x1;

  // Member: y1
  cdr >> ros_message.y1;

  // Member: x2
  cdr >> ros_message.x2;

  // Member: y2
  cdr >> ros_message.y2;

  // Member: class_name
  cdr >> ros_message.class_name;

  // Member: confidence
  cdr >> ros_message.confidence;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
get_serialized_size(
  const yolo_msgs::msg::YoloDetection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x1
  {
    size_t item_size = sizeof(ros_message.x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y1
  {
    size_t item_size = sizeof(ros_message.y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x2
  {
    size_t item_size = sizeof(ros_message.x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y2
  {
    size_t item_size = sizeof(ros_message.y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: class_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.class_name.size() + 1);
  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_yolo_msgs
max_serialized_size_YoloDetection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: class_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _YoloDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const yolo_msgs::msg::YoloDetection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _YoloDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<yolo_msgs::msg::YoloDetection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _YoloDetection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const yolo_msgs::msg::YoloDetection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _YoloDetection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_YoloDetection(full_bounded, 0);
}

static message_type_support_callbacks_t _YoloDetection__callbacks = {
  "yolo_msgs::msg",
  "YoloDetection",
  _YoloDetection__cdr_serialize,
  _YoloDetection__cdr_deserialize,
  _YoloDetection__get_serialized_size,
  _YoloDetection__max_serialized_size
};

static rosidl_message_type_support_t _YoloDetection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_YoloDetection__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace yolo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_yolo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<yolo_msgs::msg::YoloDetection>()
{
  return &yolo_msgs::msg::typesupport_fastrtps_cpp::_YoloDetection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, yolo_msgs, msg, YoloDetection)() {
  return &yolo_msgs::msg::typesupport_fastrtps_cpp::_YoloDetection__handle;
}

#ifdef __cplusplus
}
#endif
