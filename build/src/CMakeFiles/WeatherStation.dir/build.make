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
include src/CMakeFiles/WeatherStation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/WeatherStation.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/WeatherStation.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/WeatherStation.dir/flags.make

src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o: src/CMakeFiles/WeatherStation.dir/flags.make
src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o: ../src/WeatherStation.cpp
src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o: src/CMakeFiles/WeatherStation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o -MF CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o.d -o CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o -c /home/kowshicahmed/WS_Project/weather_station/src/WeatherStation.cpp

src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WeatherStation.dir/WeatherStation.cpp.i"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kowshicahmed/WS_Project/weather_station/src/WeatherStation.cpp > CMakeFiles/WeatherStation.dir/WeatherStation.cpp.i

src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WeatherStation.dir/WeatherStation.cpp.s"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kowshicahmed/WS_Project/weather_station/src/WeatherStation.cpp -o CMakeFiles/WeatherStation.dir/WeatherStation.cpp.s

# Object files for target WeatherStation
WeatherStation_OBJECTS = \
"CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o"

# External object files for target WeatherStation
WeatherStation_EXTERNAL_OBJECTS =

src/libWeatherStation.a: src/CMakeFiles/WeatherStation.dir/WeatherStation.cpp.o
src/libWeatherStation.a: src/CMakeFiles/WeatherStation.dir/build.make
src/libWeatherStation.a: src/CMakeFiles/WeatherStation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libWeatherStation.a"
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && $(CMAKE_COMMAND) -P CMakeFiles/WeatherStation.dir/cmake_clean_target.cmake
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WeatherStation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/WeatherStation.dir/build: src/libWeatherStation.a
.PHONY : src/CMakeFiles/WeatherStation.dir/build

src/CMakeFiles/WeatherStation.dir/clean:
	cd /home/kowshicahmed/WS_Project/weather_station/build/src && $(CMAKE_COMMAND) -P CMakeFiles/WeatherStation.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/WeatherStation.dir/clean

src/CMakeFiles/WeatherStation.dir/depend:
	cd /home/kowshicahmed/WS_Project/weather_station/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station/src /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build/src /home/kowshicahmed/WS_Project/weather_station/build/src/CMakeFiles/WeatherStation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/WeatherStation.dir/depend

