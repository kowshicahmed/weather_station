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
include src/CMakeFiles/MeasuringValues.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/MeasuringValues.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/MeasuringValues.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/MeasuringValues.dir/flags.make

src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o: src/CMakeFiles/MeasuringValues.dir/flags.make
src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o: ../src/MeasuringValues.cpp
src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o: src/CMakeFiles/MeasuringValues.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o -MF CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o.d -o CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o -c /home/kowshicahmed/WS_Project/weather_station/src/MeasuringValues.cpp

src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.i"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kowshicahmed/WS_Project/weather_station/src/MeasuringValues.cpp > CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.i

src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.s"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kowshicahmed/WS_Project/weather_station/src/MeasuringValues.cpp -o CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.s

# Object files for target MeasuringValues
MeasuringValues_OBJECTS = \
"CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o"

# External object files for target MeasuringValues
MeasuringValues_EXTERNAL_OBJECTS =

src/libMeasuringValues.a: src/CMakeFiles/MeasuringValues.dir/MeasuringValues.cpp.o
src/libMeasuringValues.a: src/CMakeFiles/MeasuringValues.dir/build.make
src/libMeasuringValues.a: src/CMakeFiles/MeasuringValues.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMeasuringValues.a"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && $(CMAKE_COMMAND) -P CMakeFiles/MeasuringValues.dir/cmake_clean_target.cmake
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MeasuringValues.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/MeasuringValues.dir/build: src/libMeasuringValues.a
.PHONY : src/CMakeFiles/MeasuringValues.dir/build

src/CMakeFiles/MeasuringValues.dir/clean:
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && $(CMAKE_COMMAND) -P CMakeFiles/MeasuringValues.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/MeasuringValues.dir/clean

src/CMakeFiles/MeasuringValues.dir/depend:
	cd /home/kowshicahmed/WS_Project/weather_station/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station/src /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build/src /home/kowshicahmed/WS_Project/weather_station/build/src/CMakeFiles/MeasuringValues.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/MeasuringValues.dir/depend

