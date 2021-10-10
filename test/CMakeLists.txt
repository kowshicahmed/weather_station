add_executable(MeasuringValuesTest MeasuringValuesTest.cpp)
target_link_libraries(MeasuringValuesTest PRIVATE WeatherStation MeasuringValues modbus)
set_property(TARGET MeasuringValuesTest PROPERTY CXX_STANDARD 17)

add_executable(SimpleTest SimpleTest.cpp)
target_link_libraries(SimpleTest PRIVATE TestClass modbus)
set_property(TARGET SimpleTest PROPERTY CXX_STANDARD 17)

add_executable(LibmodbusTest LibmodbusTest.cpp)
target_link_libraries(LibmodbusTest PRIVATE WeatherStation MeasuringValues modbus)
set_property(TARGET LibmodbusTest PROPERTY CXX_STANDARD 17)
