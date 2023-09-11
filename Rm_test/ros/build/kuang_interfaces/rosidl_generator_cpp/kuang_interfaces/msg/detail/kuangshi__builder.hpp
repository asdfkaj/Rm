// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kuang_interfaces:msg/Kuangshi.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__BUILDER_HPP_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kuang_interfaces/msg/detail/kuangshi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kuang_interfaces
{

namespace msg
{

namespace builder
{

class Init_Kuangshi_value
{
public:
  explicit Init_Kuangshi_value(::kuang_interfaces::msg::Kuangshi & msg)
  : msg_(msg)
  {}
  ::kuang_interfaces::msg::Kuangshi value(::kuang_interfaces::msg::Kuangshi::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kuang_interfaces::msg::Kuangshi msg_;
};

class Init_Kuangshi_position
{
public:
  explicit Init_Kuangshi_position(::kuang_interfaces::msg::Kuangshi & msg)
  : msg_(msg)
  {}
  Init_Kuangshi_value position(::kuang_interfaces::msg::Kuangshi::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Kuangshi_value(msg_);
  }

private:
  ::kuang_interfaces::msg::Kuangshi msg_;
};

class Init_Kuangshi_kind
{
public:
  explicit Init_Kuangshi_kind(::kuang_interfaces::msg::Kuangshi & msg)
  : msg_(msg)
  {}
  Init_Kuangshi_position kind(::kuang_interfaces::msg::Kuangshi::_kind_type arg)
  {
    msg_.kind = std::move(arg);
    return Init_Kuangshi_position(msg_);
  }

private:
  ::kuang_interfaces::msg::Kuangshi msg_;
};

class Init_Kuangshi_number
{
public:
  Init_Kuangshi_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kuangshi_kind number(::kuang_interfaces::msg::Kuangshi::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_Kuangshi_kind(msg_);
  }

private:
  ::kuang_interfaces::msg::Kuangshi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kuang_interfaces::msg::Kuangshi>()
{
  return kuang_interfaces::msg::builder::Init_Kuangshi_number();
}

}  // namespace kuang_interfaces

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI__BUILDER_HPP_
