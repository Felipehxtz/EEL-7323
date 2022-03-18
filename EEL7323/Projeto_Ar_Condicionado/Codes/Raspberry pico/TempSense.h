#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include "temp.cpp"

class TempSense: public temp{
    float temperature;
public:
    TempSense();
    ~TempSense();
    float getTemperature();
    //Desenvolver Comunicação tensorFlow Lite
} 