#include <iostream>
#include "TestClass.h"
#include "modbus.h"

int main()
{
    std::cout << "Hello World" << std::endl;
    TestClass my_num(10);
    std::cout << my_num.get_item() << std::endl;
    modbus_t *mb;
    uint16_t tab_reg[2];

    mb = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);
    modbus_connect(mb);
    if (mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
        return -1;
    }
}