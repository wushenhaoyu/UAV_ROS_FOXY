// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:msg/LslidarSweep.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_SWEEP__TRAITS_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_SWEEP__TRAITS_HPP_

#include "lslidar_msgs/msg/detail/lslidar_sweep__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'scans'
#include "lslidar_msgs/msg/detail/lslidar_scan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::msg::LslidarSweep>()
{
  return "lslidar_msgs::msg::LslidarSweep";
}

template<>
inline const char * name<lslidar_msgs::msg::LslidarSweep>()
{
  return "lslidar_msgs/msg/LslidarSweep";
}

template<>
struct has_fixed_size<lslidar_msgs::msg::LslidarSweep>
  : std::integral_constant<bool, has_fixed_size<lslidar_msgs::msg::LslidarScan>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<lslidar_msgs::msg::LslidarSweep>
  : std::integral_constant<bool, has_bounded_size<lslidar_msgs::msg::LslidarScan>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<lslidar_msgs::msg::LslidarSweep>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_SWEEP__TRAITS_HPP_
