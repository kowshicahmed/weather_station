/*
 * MeasuringValues.cpp
 *
 *  Created on: 27 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#include "MeasuringValues.h"

MeasuringValues::MeasuringValues (std::shared_ptr<modbus_t *> mb_)
    :mb{mb_}
{
}

void MeasuringValues::getAirTemp()
{
    InputRegisters air = AIR_TEMP_ADDR;
    if (modbus_read_input_registers(*mb, (air - input_reg_start_addr), no_of_reg, tab_reg) > 0)
        std::cout << "Air Temp: " << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void MeasuringValues::getRelHumidity()
{
    if (modbus_read_input_registers(*mb, 600, 2, tab_reg) == 2)
        std::cout << "Relative Hum: " << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void MeasuringValues::getAbsHumidity()
{
    if (modbus_read_input_registers(*mb, 602, 2, tab_reg) == 2)
        std::cout << "Abs Hum: " << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void MeasuringValues::getAbsAirPressure()
{
    if (modbus_read_input_registers(*mb, 800, 2, tab_reg) == 2)
        std::cout << "Absolute Air pressure: " << tab_reg[0] << " " << tab_reg[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}