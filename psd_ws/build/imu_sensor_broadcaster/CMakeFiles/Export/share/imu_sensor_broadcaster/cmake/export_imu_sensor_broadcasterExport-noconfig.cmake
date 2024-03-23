#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "imu_sensor_broadcaster::imu_sensor_broadcaster" for configuration ""
set_property(TARGET imu_sensor_broadcaster::imu_sensor_broadcaster APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(imu_sensor_broadcaster::imu_sensor_broadcaster PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libimu_sensor_broadcaster.so"
  IMPORTED_SONAME_NOCONFIG "libimu_sensor_broadcaster.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS imu_sensor_broadcaster::imu_sensor_broadcaster )
list(APPEND _IMPORT_CHECK_FILES_FOR_imu_sensor_broadcaster::imu_sensor_broadcaster "${_IMPORT_PREFIX}/lib/libimu_sensor_broadcaster.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
