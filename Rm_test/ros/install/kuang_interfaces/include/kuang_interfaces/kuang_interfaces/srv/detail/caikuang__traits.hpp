// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kuang_interfaces:srv/Caikuang.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__TRAITS_HPP_
#define KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kuang_interfaces/srv/detail/caikuang__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kuang_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Caikuang_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Caikuang_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Caikuang_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kuang_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kuang_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kuang_interfaces::srv::Caikuang_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kuang_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kuang_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kuang_interfaces::srv::Caikuang_Request & msg)
{
  return kuang_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kuang_interfaces::srv::Caikuang_Request>()
{
  return "kuang_interfaces::srv::Caikuang_Request";
}

template<>
inline const char * name<kuang_interfaces::srv::Caikuang_Request>()
{
  return "kuang_interfaces/srv/Caikuang_Request";
}

template<>
struct has_fixed_size<kuang_interfaces::srv::Caikuang_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kuang_interfaces::srv::Caikuang_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kuang_interfaces::srv::Caikuang_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace kuang_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Caikuang_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: values
  {
    out << "values: ";
    rosidl_generator_traits::value_to_yaml(msg.values, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Caikuang_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "values: ";
    rosidl_generator_traits::value_to_yaml(msg.values, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Caikuang_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kuang_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kuang_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kuang_interfaces::srv::Caikuang_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kuang_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kuang_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kuang_interfaces::srv::Caikuang_Response & msg)
{
  return kuang_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kuang_interfaces::srv::Caikuang_Response>()
{
  return "kuang_interfaces::srv::Caikuang_Response";
}

template<>
inline const char * name<kuang_interfaces::srv::Caikuang_Response>()
{
  return "kuang_interfaces/srv/Caikuang_Response";
}

template<>
struct has_fixed_size<kuang_interfaces::srv::Caikuang_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<kuang_interfaces::srv::Caikuang_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<kuang_interfaces::srv::Caikuang_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kuang_interfaces::srv::Caikuang>()
{
  return "kuang_interfaces::srv::Caikuang";
}

template<>
inline const char * name<kuang_interfaces::srv::Caikuang>()
{
  return "kuang_interfaces/srv/Caikuang";
}

template<>
struct has_fixed_size<kuang_interfaces::srv::Caikuang>
  : std::integral_constant<
    bool,
    has_fixed_size<kuang_interfaces::srv::Caikuang_Request>::value &&
    has_fixed_size<kuang_interfaces::srv::Caikuang_Response>::value
  >
{
};

template<>
struct has_bounded_size<kuang_interfaces::srv::Caikuang>
  : std::integral_constant<
    bool,
    has_bounded_size<kuang_interfaces::srv::Caikuang_Request>::value &&
    has_bounded_size<kuang_interfaces::srv::Caikuang_Response>::value
  >
{
};

template<>
struct is_service<kuang_interfaces::srv::Caikuang>
  : std::true_type
{
};

template<>
struct is_service_request<kuang_interfaces::srv::Caikuang_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kuang_interfaces::srv::Caikuang_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__TRAITS_HPP_
