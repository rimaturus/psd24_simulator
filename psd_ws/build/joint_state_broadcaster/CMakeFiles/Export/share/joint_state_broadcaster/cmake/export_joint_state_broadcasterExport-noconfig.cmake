#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "joint_state_broadcaster::joint_state_broadcaster" for configuration ""
set_property(TARGET joint_state_broadcaster::joint_state_broadcaster APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(joint_state_broadcaster::joint_state_broadcaster PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libjoint_state_broadcaster.so"
  IMPORTED_SONAME_NOCONFIG "libjoint_state_broadcaster.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS joint_state_broadcaster::joint_state_broadcaster )
list(APPEND _IMPORT_CHECK_FILES_FOR_joint_state_broadcaster::joint_state_broadcaster "${_IMPORT_PREFIX}/lib/libjoint_state_broadcaster.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
