// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from obj_msgs:msg/ObjectMsg.idl
// generated code does not contain a copyright notice
#include "obj_msgs/msg/detail/object_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
obj_msgs__msg__ObjectMsg__init(obj_msgs__msg__ObjectMsg * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // height
  // width
  // distance
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    obj_msgs__msg__ObjectMsg__fini(msg);
    return false;
  }
  return true;
}

void
obj_msgs__msg__ObjectMsg__fini(obj_msgs__msg__ObjectMsg * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // height
  // width
  // distance
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
obj_msgs__msg__ObjectMsg__are_equal(const obj_msgs__msg__ObjectMsg * lhs, const obj_msgs__msg__ObjectMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  return true;
}

bool
obj_msgs__msg__ObjectMsg__copy(
  const obj_msgs__msg__ObjectMsg * input,
  obj_msgs__msg__ObjectMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // distance
  output->distance = input->distance;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

obj_msgs__msg__ObjectMsg *
obj_msgs__msg__ObjectMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obj_msgs__msg__ObjectMsg * msg = (obj_msgs__msg__ObjectMsg *)allocator.allocate(sizeof(obj_msgs__msg__ObjectMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(obj_msgs__msg__ObjectMsg));
  bool success = obj_msgs__msg__ObjectMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
obj_msgs__msg__ObjectMsg__destroy(obj_msgs__msg__ObjectMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    obj_msgs__msg__ObjectMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
obj_msgs__msg__ObjectMsg__Sequence__init(obj_msgs__msg__ObjectMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obj_msgs__msg__ObjectMsg * data = NULL;

  if (size) {
    data = (obj_msgs__msg__ObjectMsg *)allocator.zero_allocate(size, sizeof(obj_msgs__msg__ObjectMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = obj_msgs__msg__ObjectMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        obj_msgs__msg__ObjectMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
obj_msgs__msg__ObjectMsg__Sequence__fini(obj_msgs__msg__ObjectMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      obj_msgs__msg__ObjectMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

obj_msgs__msg__ObjectMsg__Sequence *
obj_msgs__msg__ObjectMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  obj_msgs__msg__ObjectMsg__Sequence * array = (obj_msgs__msg__ObjectMsg__Sequence *)allocator.allocate(sizeof(obj_msgs__msg__ObjectMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = obj_msgs__msg__ObjectMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
obj_msgs__msg__ObjectMsg__Sequence__destroy(obj_msgs__msg__ObjectMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    obj_msgs__msg__ObjectMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
obj_msgs__msg__ObjectMsg__Sequence__are_equal(const obj_msgs__msg__ObjectMsg__Sequence * lhs, const obj_msgs__msg__ObjectMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!obj_msgs__msg__ObjectMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
obj_msgs__msg__ObjectMsg__Sequence__copy(
  const obj_msgs__msg__ObjectMsg__Sequence * input,
  obj_msgs__msg__ObjectMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(obj_msgs__msg__ObjectMsg);
    obj_msgs__msg__ObjectMsg * data =
      (obj_msgs__msg__ObjectMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!obj_msgs__msg__ObjectMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          obj_msgs__msg__ObjectMsg__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!obj_msgs__msg__ObjectMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
