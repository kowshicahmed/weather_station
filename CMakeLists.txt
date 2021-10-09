cmake_minimum_required(VERSION 3.14)
include(FetchContent)
include(ExternalProject)

project(WeatherStation   LANGUAGES CXX
                DESCRIPTION "Software for WeatherStation"
                VERSION 0.1.0)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(FindPackageHandleStandardArgs)
# set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)
include(CPack)

add_subdirectory(lib)
add_subdirectory(src)
