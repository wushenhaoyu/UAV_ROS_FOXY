// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_msgs:msg/LslidarDifop.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/msg/detail/lslidar_difop__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lslidar_msgs/msg/detail/lslidar_difop__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lslidar_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_serialize(
  const lslidar_msgs::msg::LslidarDifop & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: rpm
  cdr << ros_message.rpm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lslidar_msgs::msg::LslidarDifop & ros_message)
{
  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: rpm
  cdr >> ros_message.rpm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
get_serialized_size(
  const lslidar_msgs::msg::LslidarDifop & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpm
  {
    size_t item_size = sizeof(ros_message.rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
max_serialized_size_LslidarDifop(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LslidarDifop__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lslidar_msgs::msg::LslidarDifop *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LslidarDifop__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lslidar_msgs::msg::LslidarDifop *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LslidarDifop__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lslidar_msgs::msg::LslidarDifop *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LslidarDifop__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LslidarDifop(full_bounded, 0);
}

static message_type_support_callbacks_t _LslidarDifop__callbacks = {
  "lslidar_msgs::msg",
  "LslidarDifop",
  _LslidarDifop__cdr_serialize,
  _LslidarDifop__cdr_deserialize,
  _LslidarDifop__get_serialized_size,
  _LslidarDifop__max_serialized_size
};

static rosidl_message_type_support_t _LslidarDifop__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LslidarDifop__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lslidar_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_msgs::msg::LslidarDifop>()
{
  return &lslidar_msgs::msg::typesupport_fastrtps_cpp::_LslidarDifop__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, msg, LslidarDifop)() {
  return &lslidar_msgs::msg::typesupport_fastrtps_cpp::_LslidarDifop__handle;
}

#ifdef __cplusplus
}
#endif
