// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "yolo_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "yolo_msgs/msg/detail/yolo_detection__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace yolo_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _YoloDetection_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YoloDetection_type_support_ids_t;

static const _YoloDetection_type_support_ids_t _YoloDetection_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YoloDetection_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YoloDetection_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YoloDetection_type_support_symbol_names_t _YoloDetection_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, YoloDetection)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolo_msgs, msg, YoloDetection)),
  }
};

typedef struct _YoloDetection_type_support_data_t
{
  void * data[2];
} _YoloDetection_type_support_data_t;

static _YoloDetection_type_support_data_t _YoloDetection_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YoloDetection_message_typesupport_map = {
  2,
  "yolo_msgs",
  &_YoloDetection_message_typesupport_ids.typesupport_identifier[0],
  &_YoloDetection_message_typesupport_symbol_names.symbol_name[0],
  &_YoloDetection_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YoloDetection_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YoloDetection_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace yolo_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_yolo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, yolo_msgs, msg, YoloDetection)() {
  return &::yolo_msgs::msg::rosidl_typesupport_c::YoloDetection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif