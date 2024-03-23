#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "position_controllers::position_controllers" for configuration ""
set_property(TARGET position_controllers::position_controllers APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(position_controllers::position_controllers PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libposition_controllers.so"
  IMPORTED_SONAME_NOCONFIG "libposition_controllers.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS position_controllers::position_controllers )
list(APPEND _IMPORT_CHECK_FILES_FOR_position_controllers::position_controllers "${_IMPORT_PREFIX}/lib/libposition_controllers.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
