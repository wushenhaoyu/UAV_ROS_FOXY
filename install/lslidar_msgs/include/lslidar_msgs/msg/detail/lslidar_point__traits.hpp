// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:msg/LslidarPoint.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_POINT__TRAITS_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_POINT__TRAITS_HPP_

#include "lslidar_msgs/msg/detail/lslidar_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::msg::LslidarPoint>()
{
  return "lslidar_msgs::msg::LslidarPoint";
}

template<>
inline const char * name<lslidar_msgs::msg::LslidarPoint>()
{
  return "lslidar_msgs/msg/LslidarPoint";
}

template<>
struct has_fixed_size<lslidar_msgs::msg::LslidarPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::msg::LslidarPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::msg::LslidarPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_POINT__TRAITS_HPP_
