cmake_minimum_required(VERSION 3.16)
project(WeatherStation VERSION 1.0.0)

# Libmodbus library
include(modbus.cmake)

add_subdirectory(src)
add_subdirectory(test)

# Include project header files
target_include_directories(
    ${PROJECT_NAME}
    PUBLIC include
)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE modbus
)
