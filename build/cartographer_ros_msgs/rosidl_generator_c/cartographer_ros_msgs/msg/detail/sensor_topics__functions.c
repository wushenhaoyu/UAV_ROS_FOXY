// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/sensor_topics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `laser_scan_topic`
// Member `multi_echo_laser_scan_topic`
// Member `point_cloud2_topic`
// Member `imu_topic`
// Member `odometry_topic`
// Member `nav_sat_fix_topic`
// Member `landmark_topic`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__SensorTopics__init(cartographer_ros_msgs__msg__SensorTopics * msg)
{
  if (!msg) {
    return false;
  }
  // laser_scan_topic
  if (!rosidl_runtime_c__String__init(&msg->laser_scan_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // multi_echo_laser_scan_topic
  if (!rosidl_runtime_c__String__init(&msg->multi_echo_laser_scan_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // point_cloud2_topic
  if (!rosidl_runtime_c__String__init(&msg->point_cloud2_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // imu_topic
  if (!rosidl_runtime_c__String__init(&msg->imu_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // odometry_topic
  if (!rosidl_runtime_c__String__init(&msg->odometry_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // nav_sat_fix_topic
  if (!rosidl_runtime_c__String__init(&msg->nav_sat_fix_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  // landmark_topic
  if (!rosidl_runtime_c__String__init(&msg->landmark_topic)) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__SensorTopics__fini(cartographer_ros_msgs__msg__SensorTopics * msg)
{
  if (!msg) {
    return;
  }
  // laser_scan_topic
  rosidl_runtime_c__String__fini(&msg->laser_scan_topic);
  // multi_echo_laser_scan_topic
  rosidl_runtime_c__String__fini(&msg->multi_echo_laser_scan_topic);
  // point_cloud2_topic
  rosidl_runtime_c__String__fini(&msg->point_cloud2_topic);
  // imu_topic
  rosidl_runtime_c__String__fini(&msg->imu_topic);
  // odometry_topic
  rosidl_runtime_c__String__fini(&msg->odometry_topic);
  // nav_sat_fix_topic
  rosidl_runtime_c__String__fini(&msg->nav_sat_fix_topic);
  // landmark_topic
  rosidl_runtime_c__String__fini(&msg->landmark_topic);
}

bool
cartographer_ros_msgs__msg__SensorTopics__are_equal(const cartographer_ros_msgs__msg__SensorTopics * lhs, const cartographer_ros_msgs__msg__SensorTopics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laser_scan_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->laser_scan_topic), &(rhs->laser_scan_topic)))
  {
    return false;
  }
  // multi_echo_laser_scan_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->multi_echo_laser_scan_topic), &(rhs->multi_echo_laser_scan_topic)))
  {
    return false;
  }
  // point_cloud2_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->point_cloud2_topic), &(rhs->point_cloud2_topic)))
  {
    return false;
  }
  // imu_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->imu_topic), &(rhs->imu_topic)))
  {
    return false;
  }
  // odometry_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->odometry_topic), &(rhs->odometry_topic)))
  {
    return false;
  }
  // nav_sat_fix_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nav_sat_fix_topic), &(rhs->nav_sat_fix_topic)))
  {
    return false;
  }
  // landmark_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->landmark_topic), &(rhs->landmark_topic)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__SensorTopics__copy(
  const cartographer_ros_msgs__msg__SensorTopics * input,
  cartographer_ros_msgs__msg__SensorTopics * output)
{
  if (!input || !output) {
    return false;
  }
  // laser_scan_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->laser_scan_topic), &(output->laser_scan_topic)))
  {
    return false;
  }
  // multi_echo_laser_scan_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->multi_echo_laser_scan_topic), &(output->multi_echo_laser_scan_topic)))
  {
    return false;
  }
  // point_cloud2_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->point_cloud2_topic), &(output->point_cloud2_topic)))
  {
    return false;
  }
  // imu_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->imu_topic), &(output->imu_topic)))
  {
    return false;
  }
  // odometry_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->odometry_topic), &(output->odometry_topic)))
  {
    return false;
  }
  // nav_sat_fix_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->nav_sat_fix_topic), &(output->nav_sat_fix_topic)))
  {
    return false;
  }
  // landmark_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->landmark_topic), &(output->landmark_topic)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__SensorTopics *
cartographer_ros_msgs__msg__SensorTopics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SensorTopics * msg = (cartographer_ros_msgs__msg__SensorTopics *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__SensorTopics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__SensorTopics));
  bool success = cartographer_ros_msgs__msg__SensorTopics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__SensorTopics__destroy(cartographer_ros_msgs__msg__SensorTopics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__SensorTopics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__SensorTopics__Sequence__init(cartographer_ros_msgs__msg__SensorTopics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SensorTopics * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__SensorTopics *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__SensorTopics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__SensorTopics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__SensorTopics__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__SensorTopics__Sequence__fini(cartographer_ros_msgs__msg__SensorTopics__Sequence * array)
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
      cartographer_ros_msgs__msg__SensorTopics__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__SensorTopics__Sequence *
cartographer_ros_msgs__msg__SensorTopics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SensorTopics__Sequence * array = (cartographer_ros_msgs__msg__SensorTopics__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__SensorTopics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__SensorTopics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__SensorTopics__Sequence__destroy(cartographer_ros_msgs__msg__SensorTopics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__SensorTopics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__SensorTopics__Sequence__are_equal(const cartographer_ros_msgs__msg__SensorTopics__Sequence * lhs, const cartographer_ros_msgs__msg__SensorTopics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__SensorTopics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__SensorTopics__Sequence__copy(
  const cartographer_ros_msgs__msg__SensorTopics__Sequence * input,
  cartographer_ros_msgs__msg__SensorTopics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__SensorTopics);
    cartographer_ros_msgs__msg__SensorTopics * data =
      (cartographer_ros_msgs__msg__SensorTopics *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__SensorTopics__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__SensorTopics__fini(&data[i]);
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
    if (!cartographer_ros_msgs__msg__SensorTopics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
