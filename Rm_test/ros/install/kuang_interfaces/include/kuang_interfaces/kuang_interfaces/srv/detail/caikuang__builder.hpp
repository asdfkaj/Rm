// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kuang_interfaces:srv/Caikuang.idl
// generated code does not contain a copyright notice

#ifndef KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__BUILDER_HPP_
#define KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kuang_interfaces/srv/detail/caikuang__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kuang_interfaces
{

namespace srv
{

namespace builder
{

class Init_Caikuang_Request_id
{
public:
  Init_Caikuang_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kuang_interfaces::srv::Caikuang_Request id(::kuang_interfaces::srv::Caikuang_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kuang_interfaces::srv::Caikuang_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kuang_interfaces::srv::Caikuang_Request>()
{
  return kuang_interfaces::srv::builder::Init_Caikuang_Request_id();
}

}  // namespace kuang_interfaces


namespace kuang_interfaces
{

namespace srv
{

namespace builder
{

class Init_Caikuang_Response_values
{
public:
  explicit Init_Caikuang_Response_values(::kuang_interfaces::srv::Caikuang_Response & msg)
  : msg_(msg)
  {}
  ::kuang_interfaces::srv::Caikuang_Response values(::kuang_interfaces::srv::Caikuang_Response::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kuang_interfaces::srv::Caikuang_Response msg_;
};

class Init_Caikuang_Response_position
{
public:
  Init_Caikuang_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Caikuang_Response_values position(::kuang_interfaces::srv::Caikuang_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Caikuang_Response_values(msg_);
  }

private:
  ::kuang_interfaces::srv::Caikuang_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kuang_interfaces::srv::Caikuang_Response>()
{
  return kuang_interfaces::srv::builder::Init_Caikuang_Response_position();
}

}  // namespace kuang_interfaces

#endif  // KUANG_INTERFACES__SRV__DETAIL__CAIKUANG__BUILDER_HPP_
