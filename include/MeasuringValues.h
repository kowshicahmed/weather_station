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
    static constexpr int INPUT_REG_START_ADDR = 30001; // Start adress of Input registers
    static constexpr int REGS_TO_READ = 2;             // A Measuring value is consisted of two 16 bit registers
    static constexpr int MODBUS_REG_LENGTH = 16;       // A register length is 16 bits
    static constexpr float MULTIPLIER_10 = 10.0;
    static constexpr float MULTIPLIER_100 = 100.0;
    static constexpr float MULTIPLIER_1000000 = 1000000.0;

    std::shared_ptr<modbus_t *> mb;                    // Modbus context pointer passed by the WeatherStation class
    
    uint16_t register_data[2];                         // The data of two 16 bit registers of a particular Measuring value is stored here
    

public:
    /***************** Constructors and Destructors ****************************/

    /**Purpose: Constructor for Initializing the Modbus context pointer 
     * Param: std::shared_ptr<modbus_t *> mb_ (Initialized in the constructors of the WeatherStation class)
     **/
    MeasuringValues(std::shared_ptr<modbus_t *> mb_);

    /**Purpose: Copy constructor
     * Param: &source (a reference to a source object)
     * Info: Handles the copy of the modbus context pointer
     **/
    MeasuringValues(const MeasuringValues &source);

    /**Purpose: Destructor
     * Info: Uses the *modbus_close()* function to close the connection established with the backend set in the context.
     **/
    ~MeasuringValues();

    /******************* Helper Functions ************************************/

    /**Purpose: Reads two input registers for a particular measuring value and returns the data in int32_t 
     * Param: reg_addr(starting address of a measuring value defined in the InputRegisters.h file)
     **/
    int32_t readInputReg(InputRegisters reg_addr);

    /**Purpose: 
     **/
    float readWindSpeed();
    float readMeanWindSpeed();
    float readWindDirection();
    float readMeanWindDirection();
    float readAirTemp();
    float readInteriorTemp();
    float readDewPointTemp();
    float readRelHumidity();
    float readAbsHumidity();
    float readAbsAirPressure();
    float readRelAirPressure();
    float readGlobalRadiation();
    float readBrightnessNorth();
    float readBrightnessEast();
    float readBrightnessSouth();
    float readBrightnessWest();
    float readTwilight();
    float readPrecipitationStat();
    float readDate();
    float readTime();
    float readTimeFormat();
    float readLongitude();
    float readLatitude();
    float readSunPosElevation();
    float readSunPosAzimuth();
    float readHeightAboveSea();
    float readSensorStat();
    float readMainLoopCycle();
    float readSHT2xTemp();
    float readNTCTemp();
    float readOperatingTime();
    float readMeanValHeightGPS();
    
    

};