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
#include <memory>
#include "MeasuringValues.h"

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
    std::string port_address;           // Address of pysical serial port e.g. "/dev/ttyUSB0"
    std::string ip_address;             // Ip address in case of TCP connection
    int port_no;                        // Number of the port if using tcp connection
    int baud_rate;                      // Bits Per second of the connection
    char parity;                        // Parity e.g 'N' = none, 'O' = odd, 'E' = even
    int data_bit;                       // Specify no. of data bit e.g. 5,6,7,8
    int stop_bit;                       // Specify the no. of stop bit e.g. 1, or 2
    int slave_id;                       // Id of the slave connected in the serial port or through tcp

    std::shared_ptr<modbus_t *> mb;     // A pointer to a pointer to _modbus_t_ structure (double pointer) if successful connection is made
    uint16_t tab_reg[2];                // For testing purposes

    // These pointers are for composition with the register classes i.e (MeasuringValues = input regs, Commands = holding regs)
    std::shared_ptr<MeasuringValues> read_input_reg;     // A pointer for reading MeasuringValues i.e input regs
    

public:
    /***************** Constructors and Destructors ****************************/

    /**Purpose: Constructor for creating a new rtu connection 
     * Param: port_address (Serial port address e.g. std::string {"/dev/ttyUSB0"}), baud_rate (default 9600), 
     * parity type (e.g.'N' = none, 'O' = odd, 'E' = even)
     * no. of data_bit (e.g. 5,6,7,8), no. of stop bit (1 or 2), slave_id (id of the slave device)
     * Info: Uses the modbus_new_rtu function to create a libmodbus context for RTU
     **/
    WeatherStation(std::string port_address_, int baud_rate_, char parity_, int data_bit_, int stop_bit_, int slave_id_);

    /**Purpose: Constructor for creating a new tcp connection 
     * Param: ip_address (e.g. std::string {"127.0.0.1"}), port_no(e.g. 1502), slave_id (id of the slave device)
     * Info: uses modbus_new_tcp function to create a libmodbus context for TCP/IPv4
     **/
    WeatherStation(std::string ip_address_, int port_no_, int slave_id_);

    /**Purpose: Copy constructor
     * Param: &source (a reference to a source object)
     * Info: Handels the copy of the modbus context pointer
     **/
    WeatherStation(const WeatherStation &source);

    /**Purpose: Destructor
     * Info: Uses the *modbus_close()* function to close the connection established with the backend set in the context.
     * Uses the *modbus_free()* function to free an allocated modbus_t structure.
     **/
    ~WeatherStation();

    /**Purpose: Returns the pointer to the composition class (MeasuringValues) to access the functions that read the input regs
     * Return: A pointer to the MeasuringValues class object
     **/
    std::shared_ptr<MeasuringValues> readMeasuringValues();


    void read_software_version();       // for testing purpose
    void read_air_temperature();        // for testing purpose
    void read_relative_humidity();      // for testing purpose
    

};