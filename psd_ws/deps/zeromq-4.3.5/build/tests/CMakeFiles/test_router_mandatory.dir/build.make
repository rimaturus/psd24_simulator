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
include tests/CMakeFiles/test_router_mandatory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_router_mandatory.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_router_mandatory.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_router_mandatory.dir/flags.make

tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o: tests/CMakeFiles/test_router_mandatory.dir/flags.make
tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o: /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_router_mandatory.cpp
tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o: tests/CMakeFiles/test_router_mandatory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o -MF CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o.d -o CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o -c /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_router_mandatory.cpp

tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.i"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_router_mandatory.cpp > CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.i

tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.s"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests/test_router_mandatory.cpp -o CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.s

# Object files for target test_router_mandatory
test_router_mandatory_OBJECTS = \
"CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o"

# External object files for target test_router_mandatory
test_router_mandatory_EXTERNAL_OBJECTS =

bin/test_router_mandatory: tests/CMakeFiles/test_router_mandatory.dir/test_router_mandatory.cpp.o
bin/test_router_mandatory: tests/CMakeFiles/test_router_mandatory.dir/build.make
bin/test_router_mandatory: lib/libtestutil.a
bin/test_router_mandatory: /usr/lib/x86_64-linux-gnu/librt.a
bin/test_router_mandatory: lib/libzmq.so.5.2.5
bin/test_router_mandatory: lib/libunity.a
bin/test_router_mandatory: tests/CMakeFiles/test_router_mandatory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/test_router_mandatory"
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_router_mandatory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_router_mandatory.dir/build: bin/test_router_mandatory
.PHONY : tests/CMakeFiles/test_router_mandatory.dir/build

tests/CMakeFiles/test_router_mandatory.dir/clean:
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_router_mandatory.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_router_mandatory.dir/clean

tests/CMakeFiles/test_router_mandatory.dir/depend:
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/psd_ws/deps/zeromq-4.3.5 /home/ubuntu/psd_ws/deps/zeromq-4.3.5/tests /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/tests/CMakeFiles/test_router_mandatory.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/test_router_mandatory.dir/depend

