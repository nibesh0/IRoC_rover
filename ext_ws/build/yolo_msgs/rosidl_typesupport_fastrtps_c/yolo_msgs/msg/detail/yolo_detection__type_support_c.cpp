// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/yolo_detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "yolo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yolo_msgs/msg/detail/yolo_detection__struct.h"
#include "yolo_msgs/msg/detail/yolo_detection__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // class_name
#include "rosidl_runtime_c/string_functions.h"  // class_name

// forward declare type support functions


using _YoloDetection__ros_msg_type = yolo_msgs__msg__YoloDetection;

static bool _YoloDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _YoloDetection__ros_msg_type * ros_message = static_cast<const _YoloDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: x1
  {
    cdr << ros_message->x1;
  }

  // Field name: y1
  {
    cdr << ros_message->y1;
  }

  // Field name: x2
  {
    cdr << ros_message->x2;
  }

  // Field name: y2
  {
    cdr << ros_message->y2;
  }

  // Field name: class_name
  {
    const rosidl_runtime_c__String * str = &ros_message->class_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  return true;
}

static bool _YoloDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _YoloDetection__ros_msg_type * ros_message = static_cast<_YoloDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: x1
  {
    cdr >> ros_message->x1;
  }

  // Field name: y1
  {
    cdr >> ros_message->y1;
  }

  // Field name: x2
  {
    cdr >> ros_message->x2;
  }

  // Field name: y2
  {
    cdr >> ros_message->y2;
  }

  // Field name: class_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->class_name.data) {
      rosidl_runtime_c__String__init(&ros_message->class_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->class_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'class_name'\n");
      return false;
    }
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_yolo_msgs__msg__YoloDetection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _YoloDetection__ros_msg_type * ros_message = static_cast<const _YoloDetection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x1
  {
    size_t item_size = sizeof(ros_message->x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y1
  {
    size_t item_size = sizeof(ros_message->y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x2
  {
    size_t item_size = sizeof(ros_message->x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y2
  {
    size_t item_size = sizeof(ros_message->y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name class_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->class_name.size + 1);
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _YoloDetection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_yolo_msgs__msg__YoloDetection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_yolo_msgs__msg__YoloDetection(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: class_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _YoloDetection__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_yolo_msgs__msg__YoloDetection(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_YoloDetection = {
  "yolo_msgs::msg",
  "YoloDetection",
  _YoloDetection__cdr_serialize,
  _YoloDetection__cdr_deserialize,
  _YoloDetection__get_serialized_size,
  _YoloDetection__max_serialized_size
};

static rosidl_message_type_support_t _YoloDetection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_YoloDetection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, YoloDetection)() {
  return &_YoloDetection__type_support;
}

#if defined(__cplusplus)
}
#endif
