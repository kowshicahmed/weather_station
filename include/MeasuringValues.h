/*
 * MeasuringValues.h
 *
 *  Created on: 27 Sept 2021
 *      Author: Kowshic Ahmed Akash
 */
#pragma once
#include "/usr/include/modbusepsi/modbus.h"
#include "InputRegisters.h"
#include <iostream>
#include <memory>

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
    static constexpr int input_reg_start_addr = 30001;      // Start adress of Input registers
    static constexpr int wind_speed_addr = 30001;           // Wind speed, unit:m/s, mult:10, e.g:101 = 10.1m/s
    static constexpr int mean_val_wind_speed_addr = 30003;  // Mean value wind speed, unit:m/s, mult:10, e.g:101 = 10.1m/s
    static constexpr int wind_direction_addr = 30201;       // Wind direction, unit:degrees, mult: 10, e.g:1010 = 101.0 deg
    static constexpr int mean_val_wind_dir_addr = 30203;    // Mean value wind dir, unit:degrees, mult: 10, e.g:1010 = 101.0 deg
    static constexpr int air_temp_addr = 30401;             // Air temp, unit:degC, mult:10, e.g:255 = 25.5°C
    static constexpr int interior_temp_addr = 30403;        // Interior temp of housing, unit:degC, mult:10, e.g:355 = 35.5°C
    static constexpr int rel_humidity_addr = 30601;         // Relative humidity, unit:%r.h, mult:10, e.g:355 = 35.5°r.F
    static constexpr int abs_humidity_addr = 30603;         // Absolute humidity, unit:g/m³, mult:100, e.g:923 = 9.23g/m^3
    static constexpr int dew_pt_temp_addr = 30605;          // Dew point temperature, unit:°C, mult:10, e.g:115 = 11.5°C
    static constexpr int abs_air_press_addr = 30801;        // Absolute air pressure, unit:hPa, mult:100, e.g:105000 = 1050.00hPa
    static constexpr int rel_air_press_addr = 30803;        // Relative air pressure, unit:hPa, mult:100, e.g:105000 = 1050.00hPa
    static constexpr int global_rad_addr = 31001;           // Global radiation, unit:W/m², mult:10, e.g:10000=1000.0W/m^2
    static constexpr int brightness_north_addr = 31201;     // Brightness north, unit:kLux, mult:10, e.g:1200=120.0kLux
    static constexpr int brightness_east_addr = 31203;      // Brightness east, unit:kLux, mult:10, e.g:1200=120.0kLux
    static constexpr int no_of_reg = 2;

    std::shared_ptr<modbus_t *> mb;
    uint16_t tab_reg[2];

public:
    MeasuringValues (std::shared_ptr<modbus_t *> mb_);
    void getAirTemp();
    void getRelHumidity();
    void getAbsHumidity();
    void getAbsAirPressure();

};