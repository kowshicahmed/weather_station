cmake_minimum_required(VERSION 3.16)
project(WeatherStation VERSION 1.0.0)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

include_directories(
    ${CMAKE_SOURCE_DIR}/lib
    /usr/include/modbusepsi
)

#set(CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/dependencies/libmodbus")
set(ENV{PKG_CONFIG_PATH} "${CMAKE_SOURCE_DIR}/dependencies/libmodbus")
#find_package(libmodbus-dev REQUIRED) # does not work for now

add_library(
    TestClass
    lib/TestClass.h
    lib/TestClass.cpp
    libmodbus
    

)

#add_executable(wsfeatures_class_test test/wsfeatures_class_test.cpp)
add_executable(simple_test test/simple_test.cpp)

target_link_libraries(simple_test PRIVATE TestClass)
