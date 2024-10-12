// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lslidar_msgs:msg/LslidarScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lslidar_msgs/msg/detail/lslidar_scan__rosidl_typesupport_introspection_c.h"
#include "lslidar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lslidar_msgs/msg/detail/lslidar_scan__functions.h"
#include "lslidar_msgs/msg/detail/lslidar_scan__struct.h"


// Include directives for member types
// Member `points`
#include "lslidar_msgs/msg/lslidar_point.h"
// Member `points`
#include "lslidar_msgs/msg/detail/lslidar_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lslidar_msgs__msg__LslidarScan__init(message_memory);
}

void LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_fini_function(void * message_memory)
{
  lslidar_msgs__msg__LslidarScan__fini(message_memory);
}

size_t LslidarScan__rosidl_typesupport_introspection_c__size_function__LslidarPoint__points(
  const void * untyped_member)
{
  const lslidar_msgs__msg__LslidarPoint__Sequence * member =
    (const lslidar_msgs__msg__LslidarPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * LslidarScan__rosidl_typesupport_introspection_c__get_const_function__LslidarPoint__points(
  const void * untyped_member, size_t index)
{
  const lslidar_msgs__msg__LslidarPoint__Sequence * member =
    (const lslidar_msgs__msg__LslidarPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LslidarScan__rosidl_typesupport_introspection_c__get_function__LslidarPoint__points(
  void * untyped_member, size_t index)
{
  lslidar_msgs__msg__LslidarPoint__Sequence * member =
    (lslidar_msgs__msg__LslidarPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LslidarScan__rosidl_typesupport_introspection_c__resize_function__LslidarPoint__points(
  void * untyped_member, size_t size)
{
  lslidar_msgs__msg__LslidarPoint__Sequence * member =
    (lslidar_msgs__msg__LslidarPoint__Sequence *)(untyped_member);
  lslidar_msgs__msg__LslidarPoint__Sequence__fini(member);
  return lslidar_msgs__msg__LslidarPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_member_array[2] = {
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_msgs__msg__LslidarScan, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_msgs__msg__LslidarScan, points),  // bytes offset in struct
    NULL,  // default value
    LslidarScan__rosidl_typesupport_introspection_c__size_function__LslidarPoint__points,  // size() function pointer
    LslidarScan__rosidl_typesupport_introspection_c__get_const_function__LslidarPoint__points,  // get_const(index) function pointer
    LslidarScan__rosidl_typesupport_introspection_c__get_function__LslidarPoint__points,  // get(index) function pointer
    LslidarScan__rosidl_typesupport_introspection_c__resize_function__LslidarPoint__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_members = {
  "lslidar_msgs__msg",  // message namespace
  "LslidarScan",  // message name
  2,  // number of fields
  sizeof(lslidar_msgs__msg__LslidarScan),
  LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_member_array,  // message members
  LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_type_support_handle = {
  0,
  &LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, msg, LslidarScan)() {
  LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, msg, LslidarPoint)();
  if (!LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_type_support_handle.typesupport_identifier) {
    LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LslidarScan__rosidl_typesupport_introspection_c__LslidarScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
