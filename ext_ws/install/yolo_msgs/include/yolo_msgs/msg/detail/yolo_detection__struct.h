// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/YoloDetection in the package yolo_msgs.
typedef struct yolo_msgs__msg__YoloDetection
{
  int32_t x1;
  int32_t y1;
  int32_t x2;
  int32_t y2;
  rosidl_runtime_c__String class_name;
  float confidence;
} yolo_msgs__msg__YoloDetection;

// Struct for a sequence of yolo_msgs__msg__YoloDetection.
typedef struct yolo_msgs__msg__YoloDetection__Sequence
{
  yolo_msgs__msg__YoloDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__YoloDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
