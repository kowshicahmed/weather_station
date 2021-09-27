cmake_minimum_required(VERSION 3.16)
project(WeatherStation VERSION 1.0.0)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Arm Toolchain
#set(CMAKE_TOOLCHAIN_FILE /opt/gcc-arm-aarch64)
#set(CMAKE_CXX_COMPILER "/opt/gcc-arm-aarch64/bin/aarch64-none-linux-gnu-g++")

include_directories(
    ${CMAKE_SOURCE_DIR}/lib,
    ${CMAKE_SOURCE_DIR}/dependencies/libmodbus,
    /usr/include/modbusepsi
)

#set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/dependencies/libmodbus")
set(ENV{PKG_CONFIG_PATH} "${CMAKE_SOURCE_DIR}/dependencies/libmodbus")
#find_package(libmodbus REQUIRED) # does not work for now
#find_library(modbus libmodbus)
find_library(modbus PATHS dependencies/libmodbus/)
LINK_DIRECTORIES(usr/lib/x86_64-linux-gnu/)
LINK_DIRECTORIES(dependencies/libmodbus/)

add_library(
    TestClass
    lib/TestClass.h
    lib/TestClass.cpp
)

add_library(
    WeatherStation
    lib/WeatherStation.h
    lib/WeatherStation.cpp
)

add_library(
    modbus
    dependencies/libmodbus/src/modbus.h
    dependencies/libmodbus/src/modbus.c
)



#add_executable(wsfeatures_class_test test/wsfeatures_class_test.cpp)
add_executable(simple_test test/simple_test.cpp)
add_executable(wsfeatures_class_test test/wsfeatures_class_test.cpp)

target_link_libraries(simple_test PRIVATE TestClass modbus)
target_link_libraries(wsfeatures_class_test PRIVATE WeatherStation modbus)
