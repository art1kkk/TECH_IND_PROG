#include "digital.h"
#include <iostream>

int main() {
	double minVal, maxVal, precision;
	std::cout << "Inpunt min, max and precision: " << std::endl;
	std::cin >> minVal >> maxVal >> precision;
	DigitalSensor sensor(minVal, maxVal, precision); 
	// Создаём датчик, который может измерять значения от minVal (например, 0) до maxVal (например, 10) с точностью precision (например, 0,1)
	sensor.setValue(3.456); // Установиv значение датчика равным 3,456
	double result = sensor.getValue(); // Получим значение датчика
	std::cout << result;
}