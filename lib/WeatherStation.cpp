/*
 * WeatherStation.cpp
 *
 *  Created on: 22 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */

#include "WeatherStation.h"

/******************************* Constructors and Destructors *********************************************/

/****** Constructor for creating new rtu connection with serial port ******************/
WeatherStation::WeatherStation(std::string port_address_, int baud_rate_, char parity_, int data_bit_, int stop_bit_, int slave_id_)
    : port_address{port_address_}, baud_rate{baud_rate_}, parity{parity_}, data_bit{data_bit_}, stop_bit{stop_bit_}, slave_id{slave_id_}
{
    // Converting port_address to char array
    int n = port_address.length();
    char port_address_char[n + 1];
    strcpy(port_address_char, port_address.c_str());

    // Creating new connection
    mb = std::make_shared<modbus_t *>();
    *mb = modbus_new_rtu(port_address_char, baud_rate, parity, data_bit, stop_bit);

    modbus_connect(*mb);
    if (*mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
    }

    modbus_set_slave(*mb, slave_id);

    if (modbus_connect(*mb) == -1)
    {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(*mb);
    }

    // Composition with the MeasuringValues class
    read_input_reg = std::make_shared<MeasuringValues>(mb);
}

/******************** Constructor for creating new tcp connection ****************/
WeatherStation::WeatherStation(std::string ip_address_, int port_no_, int slave_id_)
    : ip_address{ip_address_}, port_no{port_no_}, slave_id{slave_id_}
{
    // Converting port_address to char array
    int n = ip_address.length();
    char ip_address_char[n + 1];
    strcpy(ip_address_char, port_address.c_str());

    // Creating new connection
    *mb = modbus_new_tcp(ip_address_char, port_no);

    modbus_connect(*mb);
    if (mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
    }

    modbus_set_slave(*mb, slave_id);

    if (modbus_connect(*mb) == -1)
    {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(*mb);
    }

    // Composition with the MeasuringValues class
    read_input_reg = std::make_shared<MeasuringValues>(mb);
}

/***************** Copy Constructor *************************/
WeatherStation::WeatherStation(const WeatherStation &source)
{
    mb = std::make_shared<modbus_t *>();
    *mb = *source.mb;
}

/***************** Destructor *************************/
WeatherStation::~WeatherStation()
{
    modbus_close(*mb);
    modbus_free(*mb);
}

/******************************* Helper Functions *********************************************/

/****** Returns composition pointer to the read data from input reg class********/
std::shared_ptr<MeasuringValues> WeatherStation::readMeasuringValues()
{
    return read_input_reg;
}

/************** For testing purpose******************/
void WeatherStation::read_software_version()
{
    if (modbus_read_registers(*mb, 5004, 2, tab_reg) > 0)
        std::cout << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void WeatherStation::read_air_temperature()
{
    if (modbus_read_input_registers(*mb, 400, 2, tab_reg) > 0)
        std::cout << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void WeatherStation::read_relative_humidity()
{
    if (modbus_read_input_registers(*mb, 600, 2, tab_reg) == 2)
        std::cout << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}
