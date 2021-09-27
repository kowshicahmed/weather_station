/*
 * MeasuringValues.h
 *
 *  Created on: 27 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#pragma once
#include "modbus.h"
#include <iostream>

/**
 * Measuring Values (Input Register)
 *
 * All measuring values of the weather station WSC11 consume 32Bit, i.e. 2 MODBUS register addresses. 
 * This class reads the data from Input Registers for different parameters
 * The measuring values are sorted as follows:
 * - By measuring value type (30001 to 34999).
 * - In unbroken sequence (35001 to 39999).
 *
 */

class MeasuringValues
{
private:
    static constexpr int wind_speed_addr = 30001;
    static constexpr int no_of_reg = 2;
    uint16_t tab_reg[2];

public:
    void getWindSpeed(modbus_t *mb, int start_addr, int reg_amount, uint16_t storage []);

};