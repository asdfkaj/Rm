# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_kuang_jie_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED kuang_jie_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(kuang_jie_FOUND FALSE)
  elseif(NOT kuang_jie_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(kuang_jie_FOUND FALSE)
  endif()
  return()
endif()
set(_kuang_jie_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kuang_jie_FIND_QUIETLY)
  message(STATUS "Found kuang_jie: 0.0.0 (${kuang_jie_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kuang_jie' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${kuang_jie_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kuang_jie_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${kuang_jie_DIR}/${_extra}")
endforeach()
