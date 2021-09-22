#include "WsFeatures.h"

int main ()
{
    WsFeatures connection_1 {std::string {"rtu"}, std::string {"/dev/ttyUSB0"}, 0, 9600, 'N', 8, 1};
    connection_1.read_software_version();
    
    return 0;
}