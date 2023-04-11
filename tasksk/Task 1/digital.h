#ifndef DIGITAL_SENSOR_H
#define DIGITAL_SENSOR_H

class DigitalSensor {
public:
	DigitalSensor(double minVal, double maxVal, double precision);

	void setValue(double newValue);
	double getValue();

private:
	double minVal;
	double maxVal;
	double precision;
	double value;
};

#endif
