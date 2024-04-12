#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "control_toolbox::control_toolbox" for configuration ""
set_property(TARGET control_toolbox::control_toolbox APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(control_toolbox::control_toolbox PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcontrol_toolbox.so"
  IMPORTED_SONAME_NOCONFIG "libcontrol_toolbox.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS control_toolbox::control_toolbox )
list(APPEND _IMPORT_CHECK_FILES_FOR_control_toolbox::control_toolbox "${_IMPORT_PREFIX}/lib/libcontrol_toolbox.so" )

# Import target "control_toolbox::low_pass_filter" for configuration ""
set_property(TARGET control_toolbox::low_pass_filter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(control_toolbox::low_pass_filter PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liblow_pass_filter.so"
  IMPORTED_SONAME_NOCONFIG "liblow_pass_filter.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS control_toolbox::low_pass_filter )
list(APPEND _IMPORT_CHECK_FILES_FOR_control_toolbox::low_pass_filter "${_IMPORT_PREFIX}/lib/liblow_pass_filter.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
