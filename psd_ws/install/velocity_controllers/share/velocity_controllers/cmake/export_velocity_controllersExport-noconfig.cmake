#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "velocity_controllers::velocity_controllers" for configuration ""
set_property(TARGET velocity_controllers::velocity_controllers APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(velocity_controllers::velocity_controllers PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libvelocity_controllers.so"
  IMPORTED_SONAME_NOCONFIG "libvelocity_controllers.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS velocity_controllers::velocity_controllers )
list(APPEND _IMPORT_CHECK_FILES_FOR_velocity_controllers::velocity_controllers "${_IMPORT_PREFIX}/lib/libvelocity_controllers.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
