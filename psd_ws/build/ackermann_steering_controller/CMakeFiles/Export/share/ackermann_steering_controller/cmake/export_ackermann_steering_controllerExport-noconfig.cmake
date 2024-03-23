#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ackermann_steering_controller::ackermann_steering_controller" for configuration ""
set_property(TARGET ackermann_steering_controller::ackermann_steering_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ackermann_steering_controller::ackermann_steering_controller PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libackermann_steering_controller.so"
  IMPORTED_SONAME_NOCONFIG "libackermann_steering_controller.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ackermann_steering_controller::ackermann_steering_controller )
list(APPEND _IMPORT_CHECK_FILES_FOR_ackermann_steering_controller::ackermann_steering_controller "${_IMPORT_PREFIX}/lib/libackermann_steering_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
