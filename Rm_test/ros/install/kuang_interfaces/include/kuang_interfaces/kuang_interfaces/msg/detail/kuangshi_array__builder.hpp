// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kuang_interfaces:msg/KuangshiArray.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__BUILDER_HPP_
#define KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kuang_interfaces/msg/detail/kuangshi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kuang_interfaces
{

namespace msg
{

namespace builder
{

class Init_KuangshiArray_data_array
{
public:
  Init_KuangshiArray_data_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kuang_interfaces::msg::KuangshiArray data_array(::kuang_interfaces::msg::KuangshiArray::_data_array_type arg)
  {
    msg_.data_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kuang_interfaces::msg::KuangshiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kuang_interfaces::msg::KuangshiArray>()
{
  return kuang_interfaces::msg::builder::Init_KuangshiArray_data_array();
}

}  // namespace kuang_interfaces

#endif  // KUANG_INTERFACES__MSG__DETAIL__KUANGSHI_ARRAY__BUILDER_HPP_
