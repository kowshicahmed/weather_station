/*
 * WeatherStation.h
 *
 *  Created on: 22 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#pragma once
#include "modbus.h"
#include <string>
#include <cstring>
#include <iostream>

/**
 * Implementation of a WeatherStation Super class of Weather Station Compact WSC11
 *
 * The weather station supports modbus communication protocol
 * This wrapper class provides to functionality to create a rtu or tcp connection
 *
 */
class WeatherStation
{

private:
    std::string port_address;       // Address of pysical serial port Ex. "/dev/ttyUSB0"
    std::string ip_address;         // Ip address in case of TCP connection
    int port_no;                    // Number of the port if using tcp connection
    int baud_rate;                  // Bits Per second of the connection
    char parity;                    // Parity 'N' = none, 'O' = odd, 'E' = even
    int data_bit;                   // Specify no. of data bit 5,6,7,8
    int stop_bit;                   // Specify the no. of stop bit 1, or 2
    int slave_id;
    modbus_t *mb;                   // A pointer to a _modbus_t_ structure if successful connection is made
    uint16_t tab_reg[2];            // For testing purposes

public:

    /***************** Overloaded Constructors ****************************/

    /**Purpose: Constructor for creating a new rtu connection 
     * Param: port_address (Serial port address Ex.std::string {"/dev/ttyUSB0"}), baud_rate (default 9600), 
     * parity type (Ex.'N' = none, 'O' = odd, 'E' = even)
     * no. of data_bit (Ex. 5,6,7,8), no. of stop bit (1 or 2), slave_id (id of the slave device)
     **/
    WeatherStation(std::string port_address, int baud_rate, char parity, int data_bit, int stop_bit, int slave_id);

    /**Purpose: Constructor for creating a new tcp connection 
     * Param: ip_address (Ex. std::string {"127.0.0.1"}), port_no(Ex. 1502), slave_id (id of the slave device)
     **/
    WeatherStation(std::string ip_address, int port_no, int slave_id);
    ~WeatherStation();
    void read_software_version();       // for testing purpose
    

};