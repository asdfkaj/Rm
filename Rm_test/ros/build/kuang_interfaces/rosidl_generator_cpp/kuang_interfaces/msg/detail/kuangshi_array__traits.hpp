// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__TRAITS_HPP_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kuang_interfaces/msg/detail/kuangshi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data_array'
#include "kuang_interfaces/msg/detail/kuangshi__traits.hpp"

namespace kuang_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KuangshiArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data_array
  {
    if (msg.data_array.size() == 0) {
      out << "data_array: []";
    } else {
      out << "data_array: [";
      size_t pending_items = msg.data_array.size();
      for (auto item : msg.data_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KuangshiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_array.size() == 0) {
      out << "data_array: []\n";
    } else {
      out << "data_array:\n";
      for (auto item : msg.data_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KuangshiArray & msg, bool use_flow_style = false)
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
  const kuang_interfaces::msg::KuangshiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  kuang_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kuang_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kuang_interfaces::msg::KuangshiArray & msg)
{
  return kuang_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kuang_interfaces::msg::KuangshiArray>()
{
  return "kuang_interfaces::msg::KuangshiArray";
}

template<>
inline const char * name<kuang_interfaces::msg::KuangshiArray>()
{
  return "kuang_interfaces/msg/KuangshiArray";
}

template<>
struct has_fixed_size<kuang_interfaces::msg::KuangshiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kuang_interfaces::msg::KuangshiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kuang_interfaces::msg::KuangshiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__TRAITS_HPP_
