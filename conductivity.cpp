#include "conductivity.h"
#include <driver/adc.h>
#include <iostream>

using namespace std;

int Conductivity::read(adc1_channel_t data)
{
    adc1_config_width(ADC_WIDTH_BIT_12);
    adc1_config_channel_atten(data, ADC_ATTEN_DB_0);
    int val = adc1_get_raw(ADC1_CHANNEL_7);
    return val;
}
