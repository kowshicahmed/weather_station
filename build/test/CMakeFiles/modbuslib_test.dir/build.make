# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kowshicahmed/WS_Project/weather_station

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kowshicahmed/WS_Project/weather_station/build

# Include any dependencies generated for this target.
include test/CMakeFiles/modbuslib_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/modbuslib_test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/modbuslib_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/modbuslib_test.dir/flags.make

test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o: test/CMakeFiles/modbuslib_test.dir/flags.make
test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o: ../test/modbuslib_test.cpp
test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o: test/CMakeFiles/modbuslib_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o"
	cd /home/kowshicahmed/WS_Project/weather_station/build/test && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o -MF CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o.d -o CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o -c /home/kowshicahmed/WS_Project/weather_station/test/modbuslib_test.cpp

test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.i"
	cd /home/kowshicahmed/WS_Project/weather_station/build/test && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kowshicahmed/WS_Project/weather_station/test/modbuslib_test.cpp > CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.i

test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.s"
	cd /home/kowshicahmed/WS_Project/weather_station/build/test && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kowshicahmed/WS_Project/weather_station/test/modbuslib_test.cpp -o CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.s

# Object files for target modbuslib_test
modbuslib_test_OBJECTS = \
"CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o"

# External object files for target modbuslib_test
modbuslib_test_EXTERNAL_OBJECTS =

test/modbuslib_test: test/CMakeFiles/modbuslib_test.dir/modbuslib_test.cpp.o
test/modbuslib_test: test/CMakeFiles/modbuslib_test.dir/build.make
test/modbuslib_test: libmodbus/lib/libmodbus.a
test/modbuslib_test: test/CMakeFiles/modbuslib_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable modbuslib_test"
	cd /home/kowshicahmed/WS_Project/weather_station/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modbuslib_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/modbuslib_test.dir/build: test/modbuslib_test
.PHONY : test/CMakeFiles/modbuslib_test.dir/build

test/CMakeFiles/modbuslib_test.dir/clean:
	cd /home/kowshicahmed/WS_Project/weather_station/build/test && $(CMAKE_COMMAND) -P CMakeFiles/modbuslib_test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/modbuslib_test.dir/clean

test/CMakeFiles/modbuslib_test.dir/depend:
	cd /home/kowshicahmed/WS_Project/weather_station/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station/test /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build/test /home/kowshicahmed/WS_Project/weather_station/build/test/CMakeFiles/modbuslib_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/modbuslib_test.dir/depend
