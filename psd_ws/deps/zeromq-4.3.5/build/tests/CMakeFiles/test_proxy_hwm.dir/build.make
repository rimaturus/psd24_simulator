# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/psd_ws/deps/zeromq-4.3.5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_proxy_hwm.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_proxy_hwm.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_proxy_hwm.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_proxy_hwm.dir/flags.make

tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o: tests/CMakeFiles/test_proxy_hwm.dir/flags.make
tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o: /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_proxy_hwm.cpp
tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o: tests/CMakeFiles/test_proxy_hwm.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o -MF CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o.d -o CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o -c /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_proxy_hwm.cpp

tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.i"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_proxy_hwm.cpp > CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.i

tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.s"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_proxy_hwm.cpp -o CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.s

# Object files for target test_proxy_hwm
test_proxy_hwm_OBJECTS = \
"CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o"

# External object files for target test_proxy_hwm
test_proxy_hwm_EXTERNAL_OBJECTS =

bin/test_proxy_hwm: tests/CMakeFiles/test_proxy_hwm.dir/test_proxy_hwm.cpp.o
bin/test_proxy_hwm: tests/CMakeFiles/test_proxy_hwm.dir/build.make
bin/test_proxy_hwm: lib/libtestutil.a
bin/test_proxy_hwm: /usr/lib/x86_64-linux-gnu/librt.a
bin/test_proxy_hwm: lib/libzmq.so.5.2.5
bin/test_proxy_hwm: lib/libunity.a
bin/test_proxy_hwm: tests/CMakeFiles/test_proxy_hwm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/test_proxy_hwm"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_proxy_hwm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_proxy_hwm.dir/build: bin/test_proxy_hwm
.PHONY : tests/CMakeFiles/test_proxy_hwm.dir/build

tests/CMakeFiles/test_proxy_hwm.dir/clean:
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_proxy_hwm.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_proxy_hwm.dir/clean

tests/CMakeFiles/test_proxy_hwm.dir/depend:
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/psd_ws/deps/zeromq-4.3.5 /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests/CMakeFiles/test_proxy_hwm.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/test_proxy_hwm.dir/depend

