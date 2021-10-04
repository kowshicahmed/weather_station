add_library(
	TestClass
	TestClass.cpp
)

add_library(
	WeatherStation
	WeatherStation.cpp
)

target_include_directories(TestClass PUBLIC ../include)
target_include_directories(WeatherStation PUBLIC ../include)
# target_include_directories(WeatherStation PUBLIC /usr/include/modbusepsi/)
