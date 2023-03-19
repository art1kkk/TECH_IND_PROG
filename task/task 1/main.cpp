#include <iostream>
#include "cone.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Cone c1(3.0, 4.0);
    Cone c2(1.0, 2.0, 3.0, 4.0, 5.0);
    Cone c3;

    cout << "Статический конус с центром в начале координат: " << endl;
    cout << "Площадь поверхности: " << c1.surfaceArea() << endl;
    cout << "Объём: " << c1.volume() << endl;

    cout << endl << "Статический произвольный конус: " << endl;
    cout << "Площадь поверхности: " << c2.surfaceArea() << endl;
    cout << "Объём: " << c2.volume() << endl;

    cout << endl << "Динамический конус по умолчанию (ввод): " << endl;
    c3.input();
    c3.output();

    Cone cones[3] = {
        Cone(1.0, 2.0, 3.0, 4.0, 5.0),
        Cone(2.0, 3.0, 4.0, 5.0, 6.0),
        Cone(3.0, 4.0, 5.0, 6.0, 7.0)
    };

    cout << endl << "Массив конусов:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Конус " << i + 1 << ":" << endl;
        cout << "Площадь поверхности: " << cones[i].surfaceArea() << endl;
        cout << "Объём: " << cones[i].volume() << endl;
    }

    return 0;
}