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
CMAKE_SOURCE_DIR = /home/ubuntu/psd_ws/deps/libzmq-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/psd_ws/deps/libzmq-master/build

# Include any dependencies generated for this target.
include unittests/CMakeFiles/unittest_radix_tree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/CMakeFiles/unittest_radix_tree.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/CMakeFiles/unittest_radix_tree.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CMakeFiles/unittest_radix_tree.dir/flags.make

unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o: unittests/CMakeFiles/unittest_radix_tree.dir/flags.make
unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o: /home/ubuntu/psd_ws/deps/libzmq-master/unittests/unittest_radix_tree.cpp
unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o: unittests/CMakeFiles/unittest_radix_tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/psd_ws/deps/libzmq-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o"
	cd /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o -MF CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o.d -o CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o -c /home/ubuntu/psd_ws/deps/libzmq-master/unittests/unittest_radix_tree.cpp

unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.i"
	cd /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/psd_ws/deps/libzmq-master/unittests/unittest_radix_tree.cpp > CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.i

unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.s"
	cd /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/psd_ws/deps/libzmq-master/unittests/unittest_radix_tree.cpp -o CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.s

# Object files for target unittest_radix_tree
unittest_radix_tree_OBJECTS = \
"CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o"

# External object files for target unittest_radix_tree
unittest_radix_tree_EXTERNAL_OBJECTS =

bin/unittest_radix_tree: unittests/CMakeFiles/unittest_radix_tree.dir/unittest_radix_tree.cpp.o
bin/unittest_radix_tree: unittests/CMakeFiles/unittest_radix_tree.dir/build.make
bin/unittest_radix_tree: lib/libtestutil-static.a
bin/unittest_radix_tree: /usr/lib/x86_64-linux-gnu/librt.a
bin/unittest_radix_tree: lib/libzmq.a
bin/unittest_radix_tree: lib/libunity.a
bin/unittest_radix_tree: unittests/CMakeFiles/unittest_radix_tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/psd_ws/deps/libzmq-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/unittest_radix_tree"
	cd /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unittest_radix_tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/CMakeFiles/unittest_radix_tree.dir/build: bin/unittest_radix_tree
.PHONY : unittests/CMakeFiles/unittest_radix_tree.dir/build

unittests/CMakeFiles/unittest_radix_tree.dir/clean:
	cd /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests && $(CMAKE_COMMAND) -P CMakeFiles/unittest_radix_tree.dir/cmake_clean.cmake
.PHONY : unittests/CMakeFiles/unittest_radix_tree.dir/clean

unittests/CMakeFiles/unittest_radix_tree.dir/depend:
	cd /home/ubuntu/psd_ws/deps/libzmq-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/psd_ws/deps/libzmq-master /home/ubuntu/psd_ws/deps/libzmq-master/unittests /home/ubuntu/psd_ws/deps/libzmq-master/build /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests /home/ubuntu/psd_ws/deps/libzmq-master/build/unittests/CMakeFiles/unittest_radix_tree.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : unittests/CMakeFiles/unittest_radix_tree.dir/depend
