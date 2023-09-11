# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_kuang_gong_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED kuang_gong_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(kuang_gong_FOUND FALSE)
  elseif(NOT kuang_gong_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(kuang_gong_FOUND FALSE)
  endif()
  return()
endif()
set(_kuang_gong_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kuang_gong_FIND_QUIETLY)
  message(STATUS "Found kuang_gong: 0.0.0 (${kuang_gong_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kuang_gong' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${kuang_gong_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kuang_gong_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${kuang_gong_DIR}/${_extra}")
endforeach()
