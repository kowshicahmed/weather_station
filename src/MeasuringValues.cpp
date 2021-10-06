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

int32_t MeasuringValues::readInputReg(InputRegisters reg_addr)
{
    if (modbus_read_input_registers(*mb, (reg_addr - INPUT_REG_START_ADDR), REGS_TO_READ, register_data) < REGS_TO_READ)
    {
        fprintf(stderr, "Error reading data: %s\n", modbus_strerror(errno));
        abort();
        return 0;
    }
    int32_t data = (register_data[0] << MODBUS_REG_LENGTH) | (register_data[1]);
    return data;
}

void MeasuringValues::getAirTemp()
{
    InputRegisters air = AIR_TEMP_ADDR;
    if (modbus_read_input_registers(*mb, (air - INPUT_REG_START_ADDR), REGS_TO_READ, register_data) > 0)
        std::cout << "Air Temp: " << register_data[0] << " " << register_data[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void MeasuringValues::getRelHumidity()
{
    if (modbus_read_input_registers(*mb, 600, 2, register_data) == 2)
        std::cout << "Relative Hum: " << register_data[0] << " " << register_data[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void MeasuringValues::getAbsHumidity()
{
    if (modbus_read_input_registers(*mb, 602, 2, register_data) == 2)
        std::cout << "Abs Hum: " << register_data[0] << " " << register_data[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}

void MeasuringValues::getAbsAirPressure()
{
    if (modbus_read_input_registers(*mb, 800, 2, register_data) == 2)
        std::cout << "Absolute Air pressure: " << register_data[0] << " " << register_data[1] << std::endl;
    else
        std::cout << "Error Reading data " << std::endl;
}