# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kowshicahmed/WS_Project/weather_station

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kowshicahmed/WS_Project/weather_station/build

# Include any dependencies generated for this target.
include CMakeFiles/WeatherStation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WeatherStation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WeatherStation.dir/flags.make

CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.o: CMakeFiles/WeatherStation.dir/flags.make
CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.o: ../lib/WeatherStation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.o -c /home/kowshicahmed/WS_Project/weather_station/lib/WeatherStation.cpp

CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kowshicahmed/WS_Project/weather_station/lib/WeatherStation.cpp > CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.i

CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kowshicahmed/WS_Project/weather_station/lib/WeatherStation.cpp -o CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.s

# Object files for target WeatherStation
WeatherStation_OBJECTS = \
"CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.o"

# External object files for target WeatherStation
WeatherStation_EXTERNAL_OBJECTS =

libWeatherStation.a: CMakeFiles/WeatherStation.dir/lib/WeatherStation.cpp.o
libWeatherStation.a: CMakeFiles/WeatherStation.dir/build.make
libWeatherStation.a: CMakeFiles/WeatherStation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libWeatherStation.a"
	$(CMAKE_COMMAND) -P CMakeFiles/WeatherStation.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WeatherStation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WeatherStation.dir/build: libWeatherStation.a

.PHONY : CMakeFiles/WeatherStation.dir/build

CMakeFiles/WeatherStation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WeatherStation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WeatherStation.dir/clean

CMakeFiles/WeatherStation.dir/depend:
	cd /home/kowshicahmed/WS_Project/weather_station/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles/WeatherStation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WeatherStation.dir/depend

