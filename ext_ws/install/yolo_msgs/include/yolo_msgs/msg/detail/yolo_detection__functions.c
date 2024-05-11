// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo_msgs:msg/YoloDetection.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/yolo_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
yolo_msgs__msg__YoloDetection__init(yolo_msgs__msg__YoloDetection * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    yolo_msgs__msg__YoloDetection__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
yolo_msgs__msg__YoloDetection__fini(yolo_msgs__msg__YoloDetection * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // confidence
}

bool
yolo_msgs__msg__YoloDetection__are_equal(const yolo_msgs__msg__YoloDetection * lhs, const yolo_msgs__msg__YoloDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
yolo_msgs__msg__YoloDetection__copy(
  const yolo_msgs__msg__YoloDetection * input,
  yolo_msgs__msg__YoloDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

yolo_msgs__msg__YoloDetection *
yolo_msgs__msg__YoloDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__YoloDetection * msg = (yolo_msgs__msg__YoloDetection *)allocator.allocate(sizeof(yolo_msgs__msg__YoloDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_msgs__msg__YoloDetection));
  bool success = yolo_msgs__msg__YoloDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_msgs__msg__YoloDetection__destroy(yolo_msgs__msg__YoloDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_msgs__msg__YoloDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_msgs__msg__YoloDetection__Sequence__init(yolo_msgs__msg__YoloDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__YoloDetection * data = NULL;

  if (size) {
    data = (yolo_msgs__msg__YoloDetection *)allocator.zero_allocate(size, sizeof(yolo_msgs__msg__YoloDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_msgs__msg__YoloDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_msgs__msg__YoloDetection__fini(&data[i - 1]);
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
yolo_msgs__msg__YoloDetection__Sequence__fini(yolo_msgs__msg__YoloDetection__Sequence * array)
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
      yolo_msgs__msg__YoloDetection__fini(&array->data[i]);
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

yolo_msgs__msg__YoloDetection__Sequence *
yolo_msgs__msg__YoloDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__YoloDetection__Sequence * array = (yolo_msgs__msg__YoloDetection__Sequence *)allocator.allocate(sizeof(yolo_msgs__msg__YoloDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_msgs__msg__YoloDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_msgs__msg__YoloDetection__Sequence__destroy(yolo_msgs__msg__YoloDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_msgs__msg__YoloDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_msgs__msg__YoloDetection__Sequence__are_equal(const yolo_msgs__msg__YoloDetection__Sequence * lhs, const yolo_msgs__msg__YoloDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_msgs__msg__YoloDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_msgs__msg__YoloDetection__Sequence__copy(
  const yolo_msgs__msg__YoloDetection__Sequence * input,
  yolo_msgs__msg__YoloDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_msgs__msg__YoloDetection);
    yolo_msgs__msg__YoloDetection * data =
      (yolo_msgs__msg__YoloDetection *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_msgs__msg__YoloDetection__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          yolo_msgs__msg__YoloDetection__fini(&data[i]);
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
    if (!yolo_msgs__msg__YoloDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
