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
    char *port_address_char = str_to_char(port_address);

    // Creating new connection
    mb = std::make_shared<modbus_t *>();
    *mb = modbus_new_rtu(port_address_char, baud_rate, parity, data_bit, stop_bit);

    // Handling modbus connect and slave connection
    modbus_connect_handler(mb);

    // Composition with the MeasuringValues class
    measuring_values_ptr = std::make_shared<MeasuringValues>(mb);
    delete[] port_address_char;
}

/******************** Constructor for creating new tcp connection ****************/
WeatherStation::WeatherStation(std::string ip_address_, int port_no_, int slave_id_)
    : ip_address{ip_address_}, port_no{port_no_}, slave_id{slave_id_}
{
    // Converting ip_address to char array
    char *ip_address_char = str_to_char(ip_address);

    // Creating new connection
    mb = std::make_shared<modbus_t *>();
    *mb = modbus_new_tcp(ip_address_char, port_no);

    // Handling modbus connect and slave connection
    modbus_connect_handler(mb);

    // Composition with the MeasuringValues class
    measuring_values_ptr = std::make_shared<MeasuringValues>(mb);
    delete[] ip_address_char;
}

/*************** Constructor for creating a new libmodbus context for TCP Protocol Independent ****************/
WeatherStation::WeatherStation(std::string node_, std::string service_, int slave_id_)
    : node{node_}, service{service_}, slave_id{slave_id_}
{
    // Converting node to char array
    char *node_char = str_to_char(node);

    // Converting service to char array
    char *service_char = str_to_char(service);

    // Creating new connection
    mb = std::make_shared<modbus_t *>();
    *mb = modbus_new_tcp_pi(node_char, service_char);

    // Handling modbus connect and slave connection
    modbus_connect_handler(mb);

    // Composition with the MeasuringValues class
    measuring_values_ptr = std::make_shared<MeasuringValues>(mb);
    delete[] node_char;
    delete[] service_char;
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
    return measuring_values_ptr;
}

void WeatherStation::modbus_connect_handler(std::shared_ptr<modbus_t *> mb)
{
    // Testing the connection
    modbus_connect(*mb);
    if (*mb == NULL)
    {
        fprintf(stderr, "Unable to create the libmodbus context\n");
    }

    // Creating new slave
    modbus_set_slave(*mb, slave_id);
    if (modbus_connect(*mb) == -1)
    {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(*mb);
    }
}

// Converts std::string to char array
char *WeatherStation::str_to_char(std::string str)
{
    char *char_val = new char[str.length() + 1]();
    strcpy(char_val, str.c_str());
    return char_val;
}
