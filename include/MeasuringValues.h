/*
 * MeasuringValues.h
 *
 *  Created on: 27 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#pragma once
#include "/usr/include/modbus/modbus.h"
#include "InputRegisters.h"
#include <iostream>
#include <memory>
#include <vector>

/**
 * Measuring Values (Input Register)
 *
 * All measuring values of the weather station WSC11 consume 32Bit, i.e. 2 MODBUS register addresses. 
 * This class reads the data from Input Registers for different parameters.
 * The data have a multiplication factor (10 or 100) associated with them.
 * The measuring values are sorted as follows:
 * - By measuring value type (30001 to 34999)
 * - In unbroken sequence (35001 to 39999)
 *
 */
class MeasuringValues
{
private:
    static constexpr int REG_START_ADDR = 30001;      // Start adress of Input registers
    static constexpr int REGS_TO_READ = 2;
    static constexpr int MODBUS_REG_LENGTH = 16;

    std::shared_ptr<modbus_t *> mb;
    uint16_t tab_reg[2];
    std::vector <int16_t> signed_data;
    std::vector <uint16_t> unsigned_data;

public:
    MeasuringValues (std::shared_ptr<modbus_t *> mb_);
    void getAirTemp();
    void getRelHumidity();
    void getAbsHumidity();
    void getAbsAirPressure();
    int32_t readInputReg(InputRegisters reg_addr);

};