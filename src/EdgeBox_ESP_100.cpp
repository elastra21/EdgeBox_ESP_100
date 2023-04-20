#include "EdgeBox_ESP_100.h"

void EdgeBox_ESP_100::init(){
    // rtc.begin();
    // analog_inputs.begin();
    pinMode(DO_0, OUTPUT);
    pinMode(DO_1, OUTPUT);
    pinMode(DO_2, OUTPUT);
    pinMode(DO_3, OUTPUT);
    pinMode(DO_4, OUTPUT);
    pinMode(DO_5, OUTPUT);
    pinMode(DI_0, INPUT);
    pinMode(DI_1, INPUT);
    pinMode(DI_2, INPUT);
    pinMode(DI_3, INPUT);
}