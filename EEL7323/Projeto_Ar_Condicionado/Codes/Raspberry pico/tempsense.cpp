#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

class tempsense{
    float temperature;
public:
    temp();
    ~temp();
    float getTemperature();
    //Desenvolver Comunicação tensorFlow Lite
} 
float tempsense::getTemperature(){

    stdio_init_all();
    //configuração ADC
    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);
    uint16_t raw = adc_read();
    const voltage = raw * conversion;
    float temperature = 27 - (voltage - 0.706)/0.001721;// temperatura em °C
    return temperature;
    

}
