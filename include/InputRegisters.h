/*
 * InputRegisters.h
 *
 *  Created on: 01 Oct 2021
 *      Author: Kowshic Ahmed Akash
 */
#pragma once
#include <map>

/*
typedef enum
{
    WIND_SPEED_ADDR = 30001,          // Wind speed, unit:m/s, mult:10, e.g:101 = 10.1m/s
    MEAN_VAL_WIND_SPEED_ADDR = 30003, // Mean value wind speed, unit:m/s, mult:10, e.g:101 = 10.1m/s
    WIND_DIR_ADDR = 30201,            // Wind direction, unit:degrees, mult: 10, e.g:1010 = 101.0 deg
    MEAN_VAL_WIND_DIR_ADDR = 30203,   // Mean value wind dir, unit:degrees, mult: 10, e.g:1010 = 101.0 deg
    AIR_TEMP_ADDR = 30401,            // Air temp, unit:degC, mult:10, e.g:255 = 25.5°C
    INTERIOR_TEMP_ADDR = 30403,       // Interior temp of housing, unit:degC, mult:10, e.g:355 = 35.5°C
    REL_HUMIDITY_ADDR = 30601,        // Relative humidity, unit:%r.h, mult:10, e.g:355 = 35.5°r.F
    ABS_HUMIDITY_ADDR = 30603,        // Absolute humidity, unit:g/m³, mult:100, e.g:923 = 9.23g/m^3
    DEW_PT_TEMP_ADDR = 30605,         // Dew point temperature, unit:°C, mult:10, e.g:115 = 11.5°C
    ABS_AIR_PRESS_ADDR = 30801,       // Absolute air pressure, unit:hPa, mult:100, e.g:105000 = 1050.00hPa
    REL_AIR_PRESS_ADDR = 30803,       // Relative air pressure, unit:hPa, mult:100, e.g:105000 = 1050.00hPa
    GLOBAL_RAD_ADDR = 31001,          // Global radiation, unit:W/m², mult:10, e.g:10000=1000.0W/m^2
    BRIGHT_NORTH_ADDR = 31201,        // Brightness north, unit:kLux, mult:10, e.g:1200=120.0kLux
    BRIGHT_EAST_ADDR = 31203,         // Brightness east, unit:kLux, mult:10, e.g:1200=120.0kLux
    BRIGHT_SOUTH_ADDR = 31205,        // Brightness south, unit:kLux, mult:10, e.g:1200=120.0kLux
    BRIGHT_WEST_ADDR = 31207,         // Brightness west, unit:kLux, mult:10, e.g:1200=120.0kLux
    TWILIGHT_ADDR = 31209,            // Twilight, unit:Lux, mult:1, e.g:500 = 500Lux
    PRECIPITATION_STAT_ADDR = 31401,  // Precipitation status, mult:1, eg:0 = no precipitation, 1 = precipitation
    DATE_ADDR = 34601,                // Date, mult:1, JJJJMMTT, e.g:20121210 = 10.12.2012
    TIME_ADDR = 34603,                // Time, mult:1, HHMMSS, e.g:121035=12:10:35
    TIME_FORMAT_ADDR = 34605,         // Time format, unit:h, mult:1, offset to UTC in hours, e.g:60 = UTC+1h
    LONGITUDE_ADDR = 34801,           // Longitude, unit:degrees, mult:1000000, e.g:value / 1000000
    LATITUDE_ADDR = 34803,            // Latitude, unit:degrees, mult:1000000, e.g:value / 1000000
    SUN_POS_ELEV_ADDR = 34805,        // Sun position elevation, unit:degrees, mult:10, e.g:900=90.0°
    SUN_POS_AZIMUTH_ADDR = 34807,     // Sun position azimuth, unit:degrees, mult:10, e.g:1800=180.0° / 0°=north,180°=south, clockwise 0…360°)
    HEIGHT_ABOVE_SEA_ADDR = 34809,    // Height above sea level, unit:m, mult:1, e.g.240 = 240m above sea level
    SENSOR_STAT_ADDR = 34811,         // Sensor status, mult:1, bit coded,dep. of sensor
    MAIN_LOOP_CY_1S_ADDR  = 34813,    // Main loop cycles per 1s, unit:1/s, mult:1, e.g:2550 = 2550 1/s
    OPERATING_TIME_ADDR = 34815,      // Operating time, unit:s, mult:1, e.g:255 = 255s
    MEAN_VAL_HEIGHT_GPS_ADDR = 34817  // Mean value of the height over MSL, received via GPS, unit:m, mult:10, e.g:240 = 24.0m above MSL
}InputRegisters;
*/
typedef enum
{
    WIND_SPEED_ADDR = 35001,          // Wind speed, unit:m/s, mult:10, e.g:101 = 10.1m/s
    MEAN_VAL_WIND_SPEED_ADDR = 35003, // Mean value wind speed, unit:m/s, mult:10, e.g:101 = 10.1m/s
    WIND_DIR_ADDR = 35005,            // Wind direction, unit:degrees, mult: 10, e.g:1010 = 101.0 deg
    MEAN_VAL_WIND_DIR_ADDR = 35007,   // Mean value wind dir, unit:degrees, mult: 10, e.g:1010 = 101.0 deg
    AIR_TEMP_ADDR = 35009,            // Air temp, unit:degC, mult:10, e.g:255 = 25.5°C
    INTERIOR_TEMP_ADDR = 35011,       // Interior temp of housing, unit:degC, mult:10, e.g:355 = 35.5°C
    DEW_PT_TEMP_ADDR = 35013,         // Dew point temperature, unit:°C, mult:10, e.g:115 = 11.5°C
    REL_HUMIDITY_ADDR = 35015,        // Relative humidity, unit:%r.h, mult:10, e.g:355 = 35.5°r.F
    ABS_HUMIDITY_ADDR = 35017,        // Absolute humidity, unit:g/m³, mult:100, e.g:923 = 9.23g/m^3
    ABS_AIR_PRESS_ADDR = 35019,       // Absolute air pressure, unit:hPa, mult:100, e.g:105000 = 1050.00hPa
    REL_AIR_PRESS_ADDR = 35021,       // Relative air pressure, unit:hPa, mult:100, e.g:105000 = 1050.00hPa
    GLOBAL_RAD_ADDR = 35023,          // Global radiation, unit:W/m², mult:10, e.g:10000=1000.0W/m^2
    BRIGHT_NORTH_ADDR = 35025,        // Brightness north, unit:kLux, mult:10, e.g:1200=120.0kLux
    BRIGHT_EAST_ADDR = 35027,         // Brightness east, unit:kLux, mult:10, e.g:1200=120.0kLux
    BRIGHT_SOUTH_ADDR = 35029,        // Brightness south, unit:kLux, mult:10, e.g:1200=120.0kLux
    BRIGHT_WEST_ADDR = 35031,         // Brightness west, unit:kLux, mult:10, e.g:1200=120.0kLux
    TWILIGHT_ADDR = 35033,            // Twilight, unit:Lux, mult:1, e.g:500 = 500Lux
    PRECIPITATION_STAT_ADDR = 35035,  // Precipitation status, mult:1, eg:0 = no precipitation, 1 = precipitation
    DATE_ADDR = 35037,                // Date, mult:1, JJJJMMTT, e.g:20121210 = 10.12.2012
    TIME_ADDR = 35039,                // Time, mult:1, HHMMSS, e.g:121035=12:10:35
    TIME_FORMAT_ADDR = 35041,         // Time format, unit:h, mult:1, offset to UTC in hours, e.g:60 = UTC+1h
    LONGITUDE_ADDR = 35043,           // Longitude, unit:degrees, mult:1000000, e.g:value / 1000000
    LATITUDE_ADDR = 35045,            // Latitude, unit:degrees, mult:1000000, e.g:value / 1000000
    SUN_POS_ELEV_ADDR = 35047,        // Sun position elevation, unit:degrees, mult:10, e.g:900=90.0°
    SUN_POS_AZIMUTH_ADDR = 35049,     // Sun position azimuth, unit:degrees, mult:10, e.g:1800=180.0° / 0°=north,180°=south, clockwise 0…360°)
    HEIGHT_ABOVE_SEA_ADDR = 35051,    // Height above sea level, unit:m, mult:1, e.g.240 = 240m above sea level
    SENSOR_STAT_ADDR = 35053,         // Sensor status, mult:1, bit coded,dep. of sensor
    MAIN_LOOP_CY_1S_ADDR  = 35055,    // Main loop cycles per 1s, unit:1/s, mult:1, e.g:2550 = 2550 1/s
    SHT2X_TEMP_ADDR = 35057,          // SHT2x temperature, unit:°C, mult:10, e.g:255 = 25.5°C
    NTC_TEMP_ADDR = 35059,            // NTC temperature, unit:°C, mult:10, e.g:255 = 25.5°C
    OPERATING_TIME_ADDR = 35061,      // Operating time, unit:s, mult:1, e.g:255 = 255s
    MEAN_VAL_HEIGHT_GPS_ADDR = 35063  // Mean value of the height over MSL, received via GPS, unit:m, mult:10, e.g:240 = 24.0m above MSL
}InputRegisters;

typedef std::map <InputRegisters, int> InputRegMap;