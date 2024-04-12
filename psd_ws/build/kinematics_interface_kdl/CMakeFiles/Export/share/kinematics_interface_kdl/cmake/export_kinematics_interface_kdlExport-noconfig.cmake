#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kinematics_interface_kdl::kinematics_interface_kdl" for configuration ""
set_property(TARGET kinematics_interface_kdl::kinematics_interface_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(kinematics_interface_kdl::kinematics_interface_kdl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libkinematics_interface_kdl.so"
  IMPORTED_SONAME_NOCONFIG "libkinematics_interface_kdl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS kinematics_interface_kdl::kinematics_interface_kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_kinematics_interface_kdl::kinematics_interface_kdl "${_IMPORT_PREFIX}/lib/libkinematics_interface_kdl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
