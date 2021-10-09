# For WeatherStation class
add_library(WeatherStation WeatherStation.cpp)
target_link_libraries(WeatherStation PUBLIC modbus)
target_include_directories(WeatherStation PUBLIC ../include)
set_property(TARGET WeatherStation PROPERTY CXX_STANDARD 17)

# For MeasuringValues class
add_library(MeasuringValues MeasuringValues.cpp)
target_link_libraries(MeasuringValues PUBLIC modbus)
target_include_directories(MeasuringValues PUBLIC ../include)
set_property(TARGET MeasuringValues PROPERTY CXX_STANDARD 17)
