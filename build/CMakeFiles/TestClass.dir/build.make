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
include CMakeFiles/TestClass.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestClass.dir/flags.make

CMakeFiles/TestClass.dir/lib/TestClass.cpp.o: CMakeFiles/TestClass.dir/flags.make
CMakeFiles/TestClass.dir/lib/TestClass.cpp.o: ../lib/TestClass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestClass.dir/lib/TestClass.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestClass.dir/lib/TestClass.cpp.o -c /home/kowshicahmed/WS_Project/weather_station/lib/TestClass.cpp

CMakeFiles/TestClass.dir/lib/TestClass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestClass.dir/lib/TestClass.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kowshicahmed/WS_Project/weather_station/lib/TestClass.cpp > CMakeFiles/TestClass.dir/lib/TestClass.cpp.i

CMakeFiles/TestClass.dir/lib/TestClass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestClass.dir/lib/TestClass.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kowshicahmed/WS_Project/weather_station/lib/TestClass.cpp -o CMakeFiles/TestClass.dir/lib/TestClass.cpp.s

# Object files for target TestClass
TestClass_OBJECTS = \
"CMakeFiles/TestClass.dir/lib/TestClass.cpp.o"

# External object files for target TestClass
TestClass_EXTERNAL_OBJECTS =

libTestClass.a: CMakeFiles/TestClass.dir/lib/TestClass.cpp.o
libTestClass.a: CMakeFiles/TestClass.dir/build.make
libTestClass.a: CMakeFiles/TestClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTestClass.a"
	$(CMAKE_COMMAND) -P CMakeFiles/TestClass.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestClass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestClass.dir/build: libTestClass.a

.PHONY : CMakeFiles/TestClass.dir/build

CMakeFiles/TestClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TestClass.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TestClass.dir/clean

CMakeFiles/TestClass.dir/depend:
	cd /home/kowshicahmed/WS_Project/weather_station/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles/TestClass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestClass.dir/depend

