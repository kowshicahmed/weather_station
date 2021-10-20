#include "WeatherStation.h"

int main ()
{
    WeatherStation connection_1 {std::string {"/dev/ttyUSB0"}, 9600, 'N', 8, 1, 1};
    //WeatherStation connection_2 {std::string {"127.0.0.1"}, 1502, 1};
    
    std::cout << std::fixed << connection_1.readMeasuringValues()->readAirTemp() << std::endl;
    std::cout << connection_1.readMeasuringValues()->readInputReg(WIND_SPEED_ADDR) << std::endl;
    std::cout << std::fixed << connection_1.readMeasuringValues()->readDate() << std::endl;
    connection_1.readMeasuringValues()->display_map();


    
    return 0;
}