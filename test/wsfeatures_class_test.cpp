#include "WeatherStation.h"

int main ()
{
    WeatherStation connection_1 {std::string {"/dev/ttyUSB0"}, 9600, 'N', 8, 1, 1};
    connection_1.read_software_version();
    //WeatherStation connection_2 {std::string {"127.0.0.1"}, 1502, 1};
    connection_1.read_air_temperature();
    connection_1.read_relative_humidity();
    connection_1.readMeasuringValues()->getAirTemp();
    connection_1.readMeasuringValues()->getRelHumidity();
    connection_1.readMeasuringValues()->getAbsHumidity();
    connection_1.readMeasuringValues()->getAbsAirPressure();


    
    return 0;
}