#include "analog.h"

int readAnalogInput() {
    // реализация для считывания аналогового входного значения с датчика
    // возвращает входное значение в виде целого числа
}

int main() {
    AnalogSensor motionSensor(500); // создаём новый датчик движения с пороговым значением 500

    int inputValue = readAnalogInput(); // считываем значение аналогового входа

    bool motionDetected = motionSensor.readValue(inputValue); // проверяем, обнаружено ли движение

    if (motionDetected) {
        // сделайте что-нибудь, если обнаружено движение
    }
    else {
        // сделайте что-нибудь еще, если движение не обнаружено
    }
}