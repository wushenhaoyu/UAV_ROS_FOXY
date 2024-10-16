// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/LandmarkList.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/landmark_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `landmark`
#include "cartographer_ros_msgs/msg/detail/landmark_entry__functions.h"

bool
cartographer_ros_msgs__msg__LandmarkList__init(cartographer_ros_msgs__msg__LandmarkList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cartographer_ros_msgs__msg__LandmarkList__fini(msg);
    return false;
  }
  // landmark
  if (!cartographer_ros_msgs__msg__LandmarkEntry__Sequence__init(&msg->landmark, 0)) {
    cartographer_ros_msgs__msg__LandmarkList__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__LandmarkList__fini(cartographer_ros_msgs__msg__LandmarkList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // landmark
  cartographer_ros_msgs__msg__LandmarkEntry__Sequence__fini(&msg->landmark);
}

bool
cartographer_ros_msgs__msg__LandmarkList__are_equal(const cartographer_ros_msgs__msg__LandmarkList * lhs, const cartographer_ros_msgs__msg__LandmarkList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // landmark
  if (!cartographer_ros_msgs__msg__LandmarkEntry__Sequence__are_equal(
      &(lhs->landmark), &(rhs->landmark)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__LandmarkList__copy(
  const cartographer_ros_msgs__msg__LandmarkList * input,
  cartographer_ros_msgs__msg__LandmarkList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // landmark
  if (!cartographer_ros_msgs__msg__LandmarkEntry__Sequence__copy(
      &(input->landmark), &(output->landmark)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__LandmarkList *
cartographer_ros_msgs__msg__LandmarkList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__LandmarkList * msg = (cartographer_ros_msgs__msg__LandmarkList *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__LandmarkList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__LandmarkList));
  bool success = cartographer_ros_msgs__msg__LandmarkList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__LandmarkList__destroy(cartographer_ros_msgs__msg__LandmarkList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__LandmarkList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__LandmarkList__Sequence__init(cartographer_ros_msgs__msg__LandmarkList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__LandmarkList * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__LandmarkList *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__LandmarkList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__LandmarkList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__LandmarkList__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__LandmarkList__Sequence__fini(cartographer_ros_msgs__msg__LandmarkList__Sequence * array)
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
      cartographer_ros_msgs__msg__LandmarkList__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__LandmarkList__Sequence *
cartographer_ros_msgs__msg__LandmarkList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__LandmarkList__Sequence * array = (cartographer_ros_msgs__msg__LandmarkList__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__LandmarkList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__LandmarkList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__LandmarkList__Sequence__destroy(cartographer_ros_msgs__msg__LandmarkList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__LandmarkList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__LandmarkList__Sequence__are_equal(const cartographer_ros_msgs__msg__LandmarkList__Sequence * lhs, const cartographer_ros_msgs__msg__LandmarkList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__LandmarkList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__LandmarkList__Sequence__copy(
  const cartographer_ros_msgs__msg__LandmarkList__Sequence * input,
  cartographer_ros_msgs__msg__LandmarkList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__LandmarkList);
    cartographer_ros_msgs__msg__LandmarkList * data =
      (cartographer_ros_msgs__msg__LandmarkList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__LandmarkList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__LandmarkList__fini(&data[i]);
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
    if (!cartographer_ros_msgs__msg__LandmarkList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
