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
include CMakeFiles/local_thr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/local_thr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/local_thr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/local_thr.dir/flags.make

CMakeFiles/local_thr.dir/perf/local_thr.cpp.o: CMakeFiles/local_thr.dir/flags.make
CMakeFiles/local_thr.dir/perf/local_thr.cpp.o: /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/local_thr.cpp
CMakeFiles/local_thr.dir/perf/local_thr.cpp.o: CMakeFiles/local_thr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/local_thr.dir/perf/local_thr.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/local_thr.dir/perf/local_thr.cpp.o -MF CMakeFiles/local_thr.dir/perf/local_thr.cpp.o.d -o CMakeFiles/local_thr.dir/perf/local_thr.cpp.o -c /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/local_thr.cpp

CMakeFiles/local_thr.dir/perf/local_thr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/local_thr.dir/perf/local_thr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/local_thr.cpp > CMakeFiles/local_thr.dir/perf/local_thr.cpp.i

CMakeFiles/local_thr.dir/perf/local_thr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/local_thr.dir/perf/local_thr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/psd_ws/deps/zeromq-4.3.5/perf/local_thr.cpp -o CMakeFiles/local_thr.dir/perf/local_thr.cpp.s

# Object files for target local_thr
local_thr_OBJECTS = \
"CMakeFiles/local_thr.dir/perf/local_thr.cpp.o"

# External object files for target local_thr
local_thr_EXTERNAL_OBJECTS =

bin/local_thr: CMakeFiles/local_thr.dir/perf/local_thr.cpp.o
bin/local_thr: CMakeFiles/local_thr.dir/build.make
bin/local_thr: lib/libzmq.so.5.2.5
bin/local_thr: CMakeFiles/local_thr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/local_thr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/local_thr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/local_thr.dir/build: bin/local_thr
.PHONY : CMakeFiles/local_thr.dir/build

CMakeFiles/local_thr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/local_thr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/local_thr.dir/clean

CMakeFiles/local_thr.dir/depend:
	cd /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/psd_ws/deps/zeromq-4.3.5 /home/ubuntu/psd_ws/deps/zeromq-4.3.5 /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build /home/ubuntu/psd_ws/deps/zeromq-4.3.5/build/CMakeFiles/local_thr.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/local_thr.dir/depend

