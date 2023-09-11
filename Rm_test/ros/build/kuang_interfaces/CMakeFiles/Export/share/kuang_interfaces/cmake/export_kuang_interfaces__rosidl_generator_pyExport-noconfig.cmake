#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kuang_interfaces::kuang_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET kuang_interfaces::kuang_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(kuang_interfaces::kuang_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libkuang_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libkuang_interfaces__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS kuang_interfaces::kuang_interfaces__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_kuang_interfaces::kuang_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libkuang_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
