/*
 * MeasuringValues.cpp
 *
 *  Created on: 27 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#include "MeasuringValues.h"

/******************************* Constructors and Destructors *********************************************/

/************ Constructor for Initializing the Modbus context pointer *****************/ 
MeasuringValues::MeasuringValues (std::shared_ptr<modbus_t *> mb_)
    :mb{mb_}
{
}

/***************** Copy Constructor *************************/
MeasuringValues::MeasuringValues(const MeasuringValues &source)
{
    mb = std::make_shared<modbus_t *>();
    *mb = *source.mb;
}

/***************** Destructor *************************/
MeasuringValues::~MeasuringValues()
{
    modbus_close(*mb);
}

/******************************* Helper Functions *********************************************/

//Reads two input registers for a particular measuring value and returns the data in 32 bit int32_t
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

float MeasuringValues::readAirTemp()
{
    return(readInputReg(AIR_TEMP_ADDR)/MULTIPLIER_10);
}

float MeasuringValues::readDate()
{
    return(readInputReg(DATE_ADDR));
}
