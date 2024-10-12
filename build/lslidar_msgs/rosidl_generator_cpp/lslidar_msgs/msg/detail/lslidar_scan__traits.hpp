// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:msg/LslidarScan.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_SCAN__TRAITS_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_SCAN__TRAITS_HPP_

#include "lslidar_msgs/msg/detail/lslidar_scan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::msg::LslidarScan>()
{
  return "lslidar_msgs::msg::LslidarScan";
}

template<>
inline const char * name<lslidar_msgs::msg::LslidarScan>()
{
  return "lslidar_msgs/msg/LslidarScan";
}

template<>
struct has_fixed_size<lslidar_msgs::msg::LslidarScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lslidar_msgs::msg::LslidarScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lslidar_msgs::msg::LslidarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_SCAN__TRAITS_HPP_
