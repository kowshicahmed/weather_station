#include "WeatherStation.h"

int main ()
{
    WeatherStation connection_1 {std::string {"/dev/ttyUSB0"}, 9600, 'N', 8, 1, 1};
    connection_1.read_software_version();
    WeatherStation connection_2 {std::string {"127.0.0.1"}, 1502, 1};
    
    return 0;
}