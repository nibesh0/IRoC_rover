// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from obj_msgs:msg/ObjectMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "obj_msgs/msg/detail/object_msg__rosidl_typesupport_introspection_c.h"
#include "obj_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "obj_msgs/msg/detail/object_msg__functions.h"
#include "obj_msgs/msg/detail/object_msg__struct.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  obj_msgs__msg__ObjectMsg__init(message_memory);
}

void ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_fini_function(void * message_memory)
{
  obj_msgs__msg__ObjectMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(obj_msgs__msg__ObjectMsg, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(obj_msgs__msg__ObjectMsg, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(obj_msgs__msg__ObjectMsg, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(obj_msgs__msg__ObjectMsg, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(obj_msgs__msg__ObjectMsg, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(obj_msgs__msg__ObjectMsg, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_members = {
  "obj_msgs__msg",  // message namespace
  "ObjectMsg",  // message name
  6,  // number of fields
  sizeof(obj_msgs__msg__ObjectMsg),
  ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_member_array,  // message members
  ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_type_support_handle = {
  0,
  &ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_obj_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, obj_msgs, msg, ObjectMsg)() {
  if (!ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_type_support_handle.typesupport_identifier) {
    ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectMsg__rosidl_typesupport_introspection_c__ObjectMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
