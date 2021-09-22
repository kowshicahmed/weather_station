#include "WsFeatures.h"

WsFeatures::WsFeatures(std::string connection_type, std::string port_address, int port_no, int baud_rate, char parity, int data_bit, int stop_bit)
    : connection_type{connection_type}, port_address{port_address}, port_no{port_no}, baud_rate{baud_rate}, parity{parity}, data_bit{data_bit}, stop_bit{stop_bit}
{
    int n = port_address.length();

    // declaring character array
    char port_address_char[n + 1];

    // copying the contents of the
    // string to char array
    strcpy(port_address_char, port_address.c_str());
    if (connection_type == "rtu")
        mb = modbus_new_rtu(port_address_char, 9600, 'N', 8, 1);
    else if (connection_type == "tcp")
        mb = modbus_new_tcp(port_address_char, port_no);

    modbus_connect(mb);
    if (mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
    }

    modbus_set_slave(mb, 1);

    if (modbus_connect(mb) == -1)
    {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(mb);
    }
}

void WsFeatures::read_software_version()
{
    if (modbus_read_registers(mb, 5004, 2, tab_reg) > 0)
        std::cout << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}