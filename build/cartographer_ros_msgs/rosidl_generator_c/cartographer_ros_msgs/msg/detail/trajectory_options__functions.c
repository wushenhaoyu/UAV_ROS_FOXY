// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/trajectory_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tracking_frame`
// Member `published_frame`
// Member `odom_frame`
// Member `trajectory_builder_options_proto`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__TrajectoryOptions__init(cartographer_ros_msgs__msg__TrajectoryOptions * msg)
{
  if (!msg) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__init(&msg->tracking_frame)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  // published_frame
  if (!rosidl_runtime_c__String__init(&msg->published_frame)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  // odom_frame
  if (!rosidl_runtime_c__String__init(&msg->odom_frame)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  // provide_odom_frame
  // use_odometry
  // use_nav_sat
  // use_landmarks
  // publish_frame_projected_to_2d
  // num_laser_scans
  // num_multi_echo_laser_scans
  // num_subdivisions_per_laser_scan
  // num_point_clouds
  // rangefinder_sampling_ratio
  // odometry_sampling_ratio
  // fixed_frame_pose_sampling_ratio
  // imu_sampling_ratio
  // landmarks_sampling_ratio
  // trajectory_builder_options_proto
  if (!rosidl_runtime_c__String__init(&msg->trajectory_builder_options_proto)) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__TrajectoryOptions__fini(cartographer_ros_msgs__msg__TrajectoryOptions * msg)
{
  if (!msg) {
    return;
  }
  // tracking_frame
  rosidl_runtime_c__String__fini(&msg->tracking_frame);
  // published_frame
  rosidl_runtime_c__String__fini(&msg->published_frame);
  // odom_frame
  rosidl_runtime_c__String__fini(&msg->odom_frame);
  // provide_odom_frame
  // use_odometry
  // use_nav_sat
  // use_landmarks
  // publish_frame_projected_to_2d
  // num_laser_scans
  // num_multi_echo_laser_scans
  // num_subdivisions_per_laser_scan
  // num_point_clouds
  // rangefinder_sampling_ratio
  // odometry_sampling_ratio
  // fixed_frame_pose_sampling_ratio
  // imu_sampling_ratio
  // landmarks_sampling_ratio
  // trajectory_builder_options_proto
  rosidl_runtime_c__String__fini(&msg->trajectory_builder_options_proto);
}

bool
cartographer_ros_msgs__msg__TrajectoryOptions__are_equal(const cartographer_ros_msgs__msg__TrajectoryOptions * lhs, const cartographer_ros_msgs__msg__TrajectoryOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tracking_frame), &(rhs->tracking_frame)))
  {
    return false;
  }
  // published_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->published_frame), &(rhs->published_frame)))
  {
    return false;
  }
  // odom_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->odom_frame), &(rhs->odom_frame)))
  {
    return false;
  }
  // provide_odom_frame
  if (lhs->provide_odom_frame != rhs->provide_odom_frame) {
    return false;
  }
  // use_odometry
  if (lhs->use_odometry != rhs->use_odometry) {
    return false;
  }
  // use_nav_sat
  if (lhs->use_nav_sat != rhs->use_nav_sat) {
    return false;
  }
  // use_landmarks
  if (lhs->use_landmarks != rhs->use_landmarks) {
    return false;
  }
  // publish_frame_projected_to_2d
  if (lhs->publish_frame_projected_to_2d != rhs->publish_frame_projected_to_2d) {
    return false;
  }
  // num_laser_scans
  if (lhs->num_laser_scans != rhs->num_laser_scans) {
    return false;
  }
  // num_multi_echo_laser_scans
  if (lhs->num_multi_echo_laser_scans != rhs->num_multi_echo_laser_scans) {
    return false;
  }
  // num_subdivisions_per_laser_scan
  if (lhs->num_subdivisions_per_laser_scan != rhs->num_subdivisions_per_laser_scan) {
    return false;
  }
  // num_point_clouds
  if (lhs->num_point_clouds != rhs->num_point_clouds) {
    return false;
  }
  // rangefinder_sampling_ratio
  if (lhs->rangefinder_sampling_ratio != rhs->rangefinder_sampling_ratio) {
    return false;
  }
  // odometry_sampling_ratio
  if (lhs->odometry_sampling_ratio != rhs->odometry_sampling_ratio) {
    return false;
  }
  // fixed_frame_pose_sampling_ratio
  if (lhs->fixed_frame_pose_sampling_ratio != rhs->fixed_frame_pose_sampling_ratio) {
    return false;
  }
  // imu_sampling_ratio
  if (lhs->imu_sampling_ratio != rhs->imu_sampling_ratio) {
    return false;
  }
  // landmarks_sampling_ratio
  if (lhs->landmarks_sampling_ratio != rhs->landmarks_sampling_ratio) {
    return false;
  }
  // trajectory_builder_options_proto
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->trajectory_builder_options_proto), &(rhs->trajectory_builder_options_proto)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__TrajectoryOptions__copy(
  const cartographer_ros_msgs__msg__TrajectoryOptions * input,
  cartographer_ros_msgs__msg__TrajectoryOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->tracking_frame), &(output->tracking_frame)))
  {
    return false;
  }
  // published_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->published_frame), &(output->published_frame)))
  {
    return false;
  }
  // odom_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->odom_frame), &(output->odom_frame)))
  {
    return false;
  }
  // provide_odom_frame
  output->provide_odom_frame = input->provide_odom_frame;
  // use_odometry
  output->use_odometry = input->use_odometry;
  // use_nav_sat
  output->use_nav_sat = input->use_nav_sat;
  // use_landmarks
  output->use_landmarks = input->use_landmarks;
  // publish_frame_projected_to_2d
  output->publish_frame_projected_to_2d = input->publish_frame_projected_to_2d;
  // num_laser_scans
  output->num_laser_scans = input->num_laser_scans;
  // num_multi_echo_laser_scans
  output->num_multi_echo_laser_scans = input->num_multi_echo_laser_scans;
  // num_subdivisions_per_laser_scan
  output->num_subdivisions_per_laser_scan = input->num_subdivisions_per_laser_scan;
  // num_point_clouds
  output->num_point_clouds = input->num_point_clouds;
  // rangefinder_sampling_ratio
  output->rangefinder_sampling_ratio = input->rangefinder_sampling_ratio;
  // odometry_sampling_ratio
  output->odometry_sampling_ratio = input->odometry_sampling_ratio;
  // fixed_frame_pose_sampling_ratio
  output->fixed_frame_pose_sampling_ratio = input->fixed_frame_pose_sampling_ratio;
  // imu_sampling_ratio
  output->imu_sampling_ratio = input->imu_sampling_ratio;
  // landmarks_sampling_ratio
  output->landmarks_sampling_ratio = input->landmarks_sampling_ratio;
  // trajectory_builder_options_proto
  if (!rosidl_runtime_c__String__copy(
      &(input->trajectory_builder_options_proto), &(output->trajectory_builder_options_proto)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__TrajectoryOptions *
cartographer_ros_msgs__msg__TrajectoryOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__TrajectoryOptions * msg = (cartographer_ros_msgs__msg__TrajectoryOptions *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__TrajectoryOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__TrajectoryOptions));
  bool success = cartographer_ros_msgs__msg__TrajectoryOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__TrajectoryOptions__destroy(cartographer_ros_msgs__msg__TrajectoryOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__TrajectoryOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__init(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__TrajectoryOptions * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__TrajectoryOptions *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__TrajectoryOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__TrajectoryOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__TrajectoryOptions__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__fini(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array)
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
      cartographer_ros_msgs__msg__TrajectoryOptions__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__TrajectoryOptions__Sequence *
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array = (cartographer_ros_msgs__msg__TrajectoryOptions__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__destroy(cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__are_equal(const cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * lhs, const cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__TrajectoryOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__TrajectoryOptions__Sequence__copy(
  const cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * input,
  cartographer_ros_msgs__msg__TrajectoryOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__TrajectoryOptions);
    cartographer_ros_msgs__msg__TrajectoryOptions * data =
      (cartographer_ros_msgs__msg__TrajectoryOptions *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__TrajectoryOptions__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__TrajectoryOptions__fini(&data[i]);
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
    if (!cartographer_ros_msgs__msg__TrajectoryOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
