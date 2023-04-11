#include "digital.h"
#include <cmath>

DigitalSensor::DigitalSensor(double minVal, double maxVal, double precision)
{
    this->minVal = minVal;
    this->maxVal = maxVal;
    this->precision = precision;
    this->value = 0.0;
}

void DigitalSensor::setValue(double newValue)
{
    if (newValue < minVal) {
        value = minVal;
    }
    else if (newValue > maxVal) {
        value = maxVal;
    }
    else {
        double roundedValue = round(newValue / precision) * precision;
        value = roundedValue;
    }
}

double DigitalSensor::getValue()
{
    return value;
}
