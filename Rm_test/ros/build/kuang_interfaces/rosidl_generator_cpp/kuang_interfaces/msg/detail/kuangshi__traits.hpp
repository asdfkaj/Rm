// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__TRAITS_HPP_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kuang_interfaces/msg/detail/kuangshi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'number'
#include "std_msgs/msg/detail/int64__traits.hpp"
// Member 'kind'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'value'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace kuang_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Kuangshi & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    to_flow_style_yaml(msg.number, out);
    out << ", ";
  }

  // member: kind
  {
    out << "kind: ";
    to_flow_style_yaml(msg.kind, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    to_flow_style_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kuangshi & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number:\n";
    to_block_style_yaml(msg.number, out, indentation + 2);
  }

  // member: kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kind:\n";
    to_block_style_yaml(msg.kind, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value:\n";
    to_block_style_yaml(msg.value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kuangshi & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kuang_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kuang_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kuang_interfaces::msg::Kuangshi & msg,
  std::ostream & out, size_t indentation = 0)
{
  kuang_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kuang_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kuang_interfaces::msg::Kuangshi & msg)
{
  return kuang_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kuang_interfaces::msg::Kuangshi>()
{
  return "kuang_interfaces::msg::Kuangshi";
}

template<>
inline const char * name<kuang_interfaces::msg::Kuangshi>()
{
  return "kuang_interfaces/msg/Kuangshi";
}

template<>
struct has_fixed_size<kuang_interfaces::msg::Kuangshi>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::Int64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<kuang_interfaces::msg::Kuangshi>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::Int64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<kuang_interfaces::msg::Kuangshi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__TRAITS_HPP_
