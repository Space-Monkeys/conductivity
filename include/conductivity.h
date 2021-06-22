
#ifndef CONDUCTIVITY_H_
#define CONDUCTIVITY_H_

#include <iostream>
#include <driver/adc.h>
using namespace std;

class Conductivity
{
private:
public:
    int read(adc1_channel_t data);
};

#endif
