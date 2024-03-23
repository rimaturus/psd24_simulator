#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "effort_controllers::effort_controllers" for configuration ""
set_property(TARGET effort_controllers::effort_controllers APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(effort_controllers::effort_controllers PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libeffort_controllers.so"
  IMPORTED_SONAME_NOCONFIG "libeffort_controllers.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS effort_controllers::effort_controllers )
list(APPEND _IMPORT_CHECK_FILES_FOR_effort_controllers::effort_controllers "${_IMPORT_PREFIX}/lib/libeffort_controllers.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
