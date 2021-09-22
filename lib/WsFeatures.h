#pragma once

#include "modbus.h"
#include <string>
#include <cstring>
#include <iostream>

class WsFeatures
{

private:
    std::string connection_type;
    std::string port_address;       // Address of the tcp port or pysical serial port
    int port_no;                    // Number of the port if using tcp connection
    int baud_rate;                  // Bits Per second of the connection
    char parity;                    
    int data_bit;
    int stop_bit;
    modbus_t *mb;
    uint16_t tab_reg[2];

public:
    WsFeatures(std::string connection_type, std::string port_address, int port_no, int baud_rate, char parity, int data_bit, int stop_bit);

    void read_software_version();
    

};