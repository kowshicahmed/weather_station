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
include lib/CMakeFiles/modbus.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/modbus.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/modbus.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/modbus.dir/flags.make

lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o: lib/CMakeFiles/modbus.dir/flags.make
lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o: ../lib/libmodbus/src/modbus.c
lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o: lib/CMakeFiles/modbus.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o"
	cd /home/kowshicahmed/WS_Project/weather_station/build/lib && /bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o -MF CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o.d -o CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o -c /home/kowshicahmed/WS_Project/weather_station/lib/libmodbus/src/modbus.c

lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/modbus.dir/libmodbus/src/modbus.c.i"
	cd /home/kowshicahmed/WS_Project/weather_station/build/lib && /bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/kowshicahmed/WS_Project/weather_station/lib/libmodbus/src/modbus.c > CMakeFiles/modbus.dir/libmodbus/src/modbus.c.i

lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/modbus.dir/libmodbus/src/modbus.c.s"
	cd /home/kowshicahmed/WS_Project/weather_station/build/lib && /bin/x86_64-linux-gnu-gcc-9 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/kowshicahmed/WS_Project/weather_station/lib/libmodbus/src/modbus.c -o CMakeFiles/modbus.dir/libmodbus/src/modbus.c.s

# Object files for target modbus
modbus_OBJECTS = \
"CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o"

# External object files for target modbus
modbus_EXTERNAL_OBJECTS =

lib/libmodbus.a: lib/CMakeFiles/modbus.dir/libmodbus/src/modbus.c.o
lib/libmodbus.a: lib/CMakeFiles/modbus.dir/build.make
lib/libmodbus.a: lib/CMakeFiles/modbus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kowshicahmed/WS_Project/weather_station/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libmodbus.a"
	cd /home/kowshicahmed/WS_Project/weather_station/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/modbus.dir/cmake_clean_target.cmake
	cd /home/kowshicahmed/WS_Project/weather_station/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modbus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/modbus.dir/build: lib/libmodbus.a
.PHONY : lib/CMakeFiles/modbus.dir/build

lib/CMakeFiles/modbus.dir/clean:
	cd /home/kowshicahmed/WS_Project/weather_station/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/modbus.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/modbus.dir/clean

lib/CMakeFiles/modbus.dir/depend:
	cd /home/kowshicahmed/WS_Project/weather_station/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kowshicahmed/WS_Project/weather_station /home/kowshicahmed/WS_Project/weather_station/lib /home/kowshicahmed/WS_Project/weather_station/build /home/kowshicahmed/WS_Project/weather_station/build/lib /home/kowshicahmed/WS_Project/weather_station/build/lib/CMakeFiles/modbus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/modbus.dir/depend

