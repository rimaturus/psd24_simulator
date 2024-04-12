#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kinematics_interface::kinematics_interface" for configuration ""
set_property(TARGET kinematics_interface::kinematics_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(kinematics_interface::kinematics_interface PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libkinematics_interface.so"
  IMPORTED_SONAME_NOCONFIG "libkinematics_interface.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS kinematics_interface::kinematics_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_kinematics_interface::kinematics_interface "${_IMPORT_PREFIX}/lib/libkinematics_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
