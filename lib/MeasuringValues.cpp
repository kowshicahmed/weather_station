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
    if (modbus_read_input_registers(*mb, 400, 2, tab_reg) > 0)
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