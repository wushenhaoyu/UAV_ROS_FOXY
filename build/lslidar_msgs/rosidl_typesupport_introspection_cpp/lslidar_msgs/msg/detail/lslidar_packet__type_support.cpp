// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_msgs:msg/LslidarPacket.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lslidar_msgs/msg/detail/lslidar_packet__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lslidar_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LslidarPacket_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lslidar_msgs::msg::LslidarPacket(_init);
}

void LslidarPacket_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lslidar_msgs::msg::LslidarPacket *>(message_memory);
  typed_message->~LslidarPacket();
}

size_t size_function__LslidarPacket__data(const void * untyped_member)
{
  (void)untyped_member;
  return 2000;
}

const void * get_const_function__LslidarPacket__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2000> *>(untyped_member);
  return &member[index];
}

void * get_function__LslidarPacket__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2000> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LslidarPacket_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_msgs::msg::LslidarPacket, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2000,  // array size
    false,  // is upper bound
    offsetof(lslidar_msgs::msg::LslidarPacket, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__LslidarPacket__data,  // size() function pointer
    get_const_function__LslidarPacket__data,  // get_const(index) function pointer
    get_function__LslidarPacket__data,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LslidarPacket_message_members = {
  "lslidar_msgs::msg",  // message namespace
  "LslidarPacket",  // message name
  2,  // number of fields
  sizeof(lslidar_msgs::msg::LslidarPacket),
  LslidarPacket_message_member_array,  // message members
  LslidarPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  LslidarPacket_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LslidarPacket_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LslidarPacket_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lslidar_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_msgs::msg::LslidarPacket>()
{
  return &::lslidar_msgs::msg::rosidl_typesupport_introspection_cpp::LslidarPacket_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lslidar_msgs, msg, LslidarPacket)() {
  return &::lslidar_msgs::msg::rosidl_typesupport_introspection_cpp::LslidarPacket_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif