# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_joint_limits_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED joint_limits_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(joint_limits_FOUND FALSE)
  elseif(NOT joint_limits_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(joint_limits_FOUND FALSE)
  endif()
  return()
endif()
set(_joint_limits_CONFIG_INCLUDED TRUE)

# output package information
if(NOT joint_limits_FIND_QUIETLY)
  message(STATUS "Found joint_limits: 2.40.0 (${joint_limits_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'joint_limits' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${joint_limits_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(joint_limits_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${joint_limits_DIR}/${_extra}")
endforeach()
