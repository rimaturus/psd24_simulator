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
include CMakeFiles/benchmark_radix_tree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/benchmark_radix_tree.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/benchmark_radix_tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/benchmark_radix_tree.dir/flags.make

CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o: CMakeFiles/benchmark_radix_tree.dir/flags.make
CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o: /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/benchmark_radix_tree.cpp
CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o: CMakeFiles/benchmark_radix_tree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o -MF CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o.d -o CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o -c /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/benchmark_radix_tree.cpp

CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/benchmark_radix_tree.cpp > CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.i

CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/benchmark_radix_tree.cpp -o CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.s

# Object files for target benchmark_radix_tree
benchmark_radix_tree_OBJECTS = \
"CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o"

# External object files for target benchmark_radix_tree
benchmark_radix_tree_EXTERNAL_OBJECTS =

bin/benchmark_radix_tree: CMakeFiles/benchmark_radix_tree.dir/perf/benchmark_radix_tree.cpp.o
bin/benchmark_radix_tree: CMakeFiles/benchmark_radix_tree.dir/build.make
bin/benchmark_radix_tree: lib/libzmq.a
bin/benchmark_radix_tree: CMakeFiles/benchmark_radix_tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/benchmark_radix_tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/benchmark_radix_tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/benchmark_radix_tree.dir/build: bin/benchmark_radix_tree
.PHONY : CMakeFiles/benchmark_radix_tree.dir/build

CMakeFiles/benchmark_radix_tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/benchmark_radix_tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/benchmark_radix_tree.dir/clean

CMakeFiles/benchmark_radix_tree.dir/depend:
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/psd_ws/deps/zeromq-4.3.5 /home/ubuntu/psd_ws/deps/zeromq-4.3.5 /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles/benchmark_radix_tree.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/benchmark_radix_tree.dir/depend

