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
    static constexpr int wind_speed_addr = 30001;           // Wind speed, unit:m/s, mult: 10, Ex: 101 = 10.1m/s
    static constexpr int mean_val_wind_speed_addr = 30003;
    static constexpr int wind_direction_addr = 30201;
    static constexpr int mean_val_wind_dir_addr = 30203;
    static constexpr int air_temp_addr = 30401;
    static constexpr int interior_temp_addr = 30403;
    static constexpr int rel_humidity_addr = 30601;
    static constexpr int abs_humidity_addr = 30603;
    static constexpr int dew_pt_temp_addr = 30605;
    static constexpr int abs_air_press_addr = 30801;
    static constexpr int rel_air_press_addr = 30803;
    static constexpr int global_rad_addr = 31001;
    static constexpr int brightness_north_addr = 31201;
    static constexpr int brightness_east_addr = 31203;
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