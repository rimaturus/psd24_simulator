#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "realtime_tools::realtime_tools" for configuration ""
set_property(TARGET realtime_tools::realtime_tools APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(realtime_tools::realtime_tools PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librealtime_tools.so"
  IMPORTED_SONAME_NOCONFIG "librealtime_tools.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS realtime_tools::realtime_tools )
list(APPEND _IMPORT_CHECK_FILES_FOR_realtime_tools::realtime_tools "${_IMPORT_PREFIX}/lib/librealtime_tools.so" )

# Import target "realtime_tools::thread_priority" for configuration ""
set_property(TARGET realtime_tools::thread_priority APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(realtime_tools::thread_priority PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libthread_priority.so"
  IMPORTED_SONAME_NOCONFIG "libthread_priority.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS realtime_tools::thread_priority )
list(APPEND _IMPORT_CHECK_FILES_FOR_realtime_tools::thread_priority "${_IMPORT_PREFIX}/lib/libthread_priority.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
