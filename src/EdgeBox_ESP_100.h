#ifndef EDGEBOX_ESP_100_H
#define EDGEBOX_ESP_100_H
#include "RTClib.h"
#include <Adafruit_ADS1X15.h>

// ###################### Digital OUTPUTS ######################
// ## NOTES!! ---> DO_GND or DO_24V NOT BOTH AT THE SAME TIME ##

#define DO_0         40
#define DO_1         39
#define DO_2         38
#define DO_3         37
#define DO_4         36
#define DO_5         35

// ###################### Digital INPUTS #######################

#define DI_0         4
#define DI_1         5
#define DI_2         6
#define DI_3         7

// ###################### Analog OUTPUTS #######################

#define AO_0         42
#define AO_1         41

// ######################## RS-485 PINS ########################

#define RS_485_TX   17 
#define RS_485_RX   18
#define RS_485_RTS  8

// ########################## I2C PINS #########################

#define I2C_SCL     19 
#define I2C_SDA     20

// ########################## CAN PINS #########################

#define CAN_TXD     1 
#define CAN_RXD     2

class EdgeBox_ESP_100{
    public:
        RTC_PCF8563 rtc;
        Adafruit_ADS1115 analog_inputs;
        void init();
};
#endif