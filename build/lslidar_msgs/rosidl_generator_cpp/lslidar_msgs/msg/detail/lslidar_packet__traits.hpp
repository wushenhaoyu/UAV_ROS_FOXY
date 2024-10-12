// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:msg/LslidarPacket.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_PACKET__TRAITS_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_PACKET__TRAITS_HPP_

#include "lslidar_msgs/msg/detail/lslidar_packet__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::msg::LslidarPacket>()
{
  return "lslidar_msgs::msg::LslidarPacket";
}

template<>
inline const char * name<lslidar_msgs::msg::LslidarPacket>()
{
  return "lslidar_msgs/msg/LslidarPacket";
}

template<>
struct has_fixed_size<lslidar_msgs::msg::LslidarPacket>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<lslidar_msgs::msg::LslidarPacket>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<lslidar_msgs::msg::LslidarPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_PACKET__TRAITS_HPP_
