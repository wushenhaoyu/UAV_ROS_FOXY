// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lslidar_msgs:msg/LslidarPoint.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/msg/detail/lslidar_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lslidar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_msgs/msg/detail/lslidar_point__struct.h"
#include "lslidar_msgs/msg/detail/lslidar_point__functions.h"
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


// forward declare type support functions


using _LslidarPoint__ros_msg_type = lslidar_msgs__msg__LslidarPoint;

static bool _LslidarPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LslidarPoint__ros_msg_type * ros_message = static_cast<const _LslidarPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: azimuth
  {
    cdr << ros_message->azimuth;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: intensity
  {
    cdr << ros_message->intensity;
  }

  return true;
}

static bool _LslidarPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LslidarPoint__ros_msg_type * ros_message = static_cast<_LslidarPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: azimuth
  {
    cdr >> ros_message->azimuth;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: intensity
  {
    cdr >> ros_message->intensity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t get_serialized_size_lslidar_msgs__msg__LslidarPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LslidarPoint__ros_msg_type * ros_message = static_cast<const _LslidarPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth
  {
    size_t item_size = sizeof(ros_message->azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intensity
  {
    size_t item_size = sizeof(ros_message->intensity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LslidarPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_msgs__msg__LslidarPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t max_serialized_size_lslidar_msgs__msg__LslidarPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: intensity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LslidarPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_lslidar_msgs__msg__LslidarPoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LslidarPoint = {
  "lslidar_msgs::msg",
  "LslidarPoint",
  _LslidarPoint__cdr_serialize,
  _LslidarPoint__cdr_deserialize,
  _LslidarPoint__get_serialized_size,
  _LslidarPoint__max_serialized_size
};

static rosidl_message_type_support_t _LslidarPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LslidarPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, msg, LslidarPoint)() {
  return &_LslidarPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
