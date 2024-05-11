// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from obj_msgs:msg/ObjectMsg.idl
// generated code does not contain a copyright notice

#ifndef OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__STRUCT_H_
#define OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__STRUCT_H_

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

// Struct defined in msg/ObjectMsg in the package obj_msgs.
typedef struct obj_msgs__msg__ObjectMsg
{
  int32_t x;
  int32_t y;
  float height;
  float width;
  float distance;
  rosidl_runtime_c__String class_name;
} obj_msgs__msg__ObjectMsg;

// Struct for a sequence of obj_msgs__msg__ObjectMsg.
typedef struct obj_msgs__msg__ObjectMsg__Sequence
{
  obj_msgs__msg__ObjectMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} obj_msgs__msg__ObjectMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJ_MSGS__MSG__DETAIL__OBJECT_MSG__STRUCT_H_
