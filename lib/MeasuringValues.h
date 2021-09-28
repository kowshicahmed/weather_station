/*
 * MeasuringValues.h
 *
 *  Created on: 27 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#pragma once
#include "modbus.h"
#include <iostream>
#include <memory>

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
    static constexpr int input_reg_start_addr = 3001;
    static constexpr int wind_speed_addr = 30001;
    static constexpr int air_temp_addr = 30401;
    static constexpr int no_of_reg = 2;
    std::shared_ptr<modbus_t *> mb;
    uint16_t tab_reg[2];

public:
    MeasuringValues (std::shared_ptr<modbus_t *> mb_);
    void getAirTemp();
    void getRelHumidity();

};