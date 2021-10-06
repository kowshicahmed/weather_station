#include "WeatherStation.h"

int main ()
{
    WeatherStation connection_1 {std::string {"/dev/ttyUSB0"}, 9600, 'N', 8, 1, 1};
    //WeatherStation connection_2 {std::string {"127.0.0.1"}, 1502, 1};
    
    connection_1.readMeasuringValues()->getAirTemp();
    std::cout << connection_1.readMeasuringValues()->readInputReg(ABS_HUMIDITY_ADDR) << std::endl;
    connection_1.readMeasuringValues()->getRelHumidity();
    connection_1.readMeasuringValues()->getAbsHumidity();
    connection_1.readMeasuringValues()->getAbsAirPressure();


    
    return 0;
}