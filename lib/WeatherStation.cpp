/*
 * WeatherStation.cpp
 *
 *  Created on: 22 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */

#include "WeatherStation.h"

WeatherStation::WeatherStation(std::string port_address_, int baud_rate_, char parity_, int data_bit_, int stop_bit_, int slave_id_)
    : port_address{port_address_}, baud_rate{baud_rate_}, parity{parity_}, data_bit{data_bit_}, stop_bit{stop_bit_}, slave_id{slave_id_}
{
    // Converting port_address to char array
    int n = port_address.length();
    char port_address_char[n + 1];
    strcpy(port_address_char, port_address.c_str());

    // Creating new connection
    mb = modbus_new_rtu(port_address_char, baud_rate, parity, data_bit, stop_bit);
    

    modbus_connect(mb);
    if (mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
    }

    modbus_set_slave(mb, slave_id);

    if (modbus_connect(mb) == -1)
    {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(mb);
    }
}

WeatherStation::WeatherStation(std::string ip_address_, int port_no_, int slave_id_)
    : ip_address{ip_address_}, port_no {port_no_}, slave_id{slave_id_}
{
    // Converting port_address to char array
    int n = ip_address.length();
    char ip_address_char[n + 1];
    strcpy(ip_address_char, port_address.c_str());

    // Creating new connection
    mb = modbus_new_tcp(ip_address_char, port_no);
    
    modbus_connect(mb);
    if (mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
    }

    modbus_set_slave(mb, slave_id);

    if (modbus_connect(mb) == -1)
    {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(mb);
    }
}

WeatherStation::~WeatherStation()
{
    modbus_close(mb);
    modbus_free(mb);
}

void WeatherStation::read_software_version()
{
    if (modbus_read_registers(mb, 5004, 2, tab_reg) > 0)
        std::cout << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}