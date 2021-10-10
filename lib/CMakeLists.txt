cmake_minimum_required(VERSION 3.14)

if(${CROSS_COMPILATION})
    set(LIBMODBUS_CROSS_FLAGS --host=aarch64-linux --build=x86_64-pc-linux )
else()
    set(LIBMODBUS_CROSS_FLAGS )
endif()

set(MODBUS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libmodbus)
set(MODBUS_BIN ${CMAKE_CURRENT_BINARY_DIR}/libmodbus)
set(MODBUS_STATIC_LIB ${MODBUS_BIN}/lib/libmodbus.a)
set(MODBUS_INCLUDES ${MODBUS_BIN}/include)
set(MODBUS_SRC ${MODBUS_BIN}/src)


# libmodbus -> modbus
ExternalProject_Add(libmodbus
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/libmodbus
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libmodbus

    #--Download step--------------
    DOWNLOAD_COMMAND cd ${MODBUS_DIR} && git clean -dfX && ${MODBUS_DIR}/autogen.sh
    # URL               http://archive.ubuntu.com/ubuntu/pool/universe/libm/libmodbus/libmodbus_3.1.6.orig.tar.gz
    # URL_HASH          MD5=3f94126f7eda99e30d58cdcbf1671dfb

    #--Update/Patch step----------

    #--Configure step-------------
    CONFIGURE_COMMAND CC=${CMAKE_C_COMPILER} CXX=${CMAKE_CXX_COMPILER} ${MODBUS_DIR}/configure --srcdir=${MODBUS_DIR} --prefix=${MODBUS_BIN} --enable-static=yes --disable-shared
    #CONFIGURE_COMMAND CC="/opt/gcc-arm-aarch64/bin/aarch64-none-linux-gnu-gcc" CXX="/opt/gcc-arm-aarch64/bin/aarch64-none-linux-gnu-g++" ${MODBUS_DIR}/configure --srcdir=${MODBUS_DIR} --prefix=${MODBUS_BIN} --enable-static=yes --disable-shared
    
    #--Build step-----------------
    BUILD_COMMAND make
    #--Install step---------------
    INSTALL_COMMAND make install
    INSTALL_DIR      ${CMAKE_CURRENT_BINARY_DIR}/libmodbus
    BUILD_BYPRODUCTS ${MODBUS_STATIC_LIB}

)

add_library(modbus STATIC IMPORTED GLOBAL)
add_dependencies(modbus libmodbus)


set_target_properties(modbus PROPERTIES IMPORTED_LOCATION ${MODBUS_STATIC_LIB})

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/libmodbus/include)
set_target_properties(modbus PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${MODBUS_INCLUDES})


FetchContent_Declare(
    libmodbus
    GIT_REPOSITORY    https://github.com/stephane/libmodbus.git
    GIT_TAG           v3.1.6
)

FetchContent_GetProperties(libmodbus)
if(NOT libmodbus_POPULATED)   
  FetchContent_Populate(libmodbus)
  #add_subdirectory(${MODBUS_SRC} ${MODBUS_BIN}) 
endif()


