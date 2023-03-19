#include "Cone.h"
#include <iostream>

Cone::Cone()
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
    radius = 1.0;
    height = 1.0;
}

Cone::Cone(double xCoord, double yCoord, double zCoord, double r, double h)
{
    x = xCoord;
    y = yCoord;
    z = zCoord;
    radius = r;
    height = h;
}

Cone::Cone(double r, double h)
{
    x = 0.0;
    y = 0.0;
    z = 0.0;
    radius = r;
    height = h;
}

void Cone::input()
{
    std::cout << "Введите координату x центра основания: ";
    std::cin >> x;
    std::cout << "Введите координату y центра основания: ";
    std::cin >> y;
    std::cout << "Введите координату z центра основания: ";
    std::cin >> z;
    std::cout << "Введите радиус основания: ";
    std::cin >> radius;
    std::cout << "Введите высоту конуса: ";
    std::cin >> height;
}

void Cone::output()
{
    std::cout << "Центр основания: (" << x << ", " << y << ", " << z << ")" << std::endl;
    std::cout << "Радиус основания: " << radius << std::endl;
    std::cout << "Высота конуса: " << height << std::endl;
    std::cout << "Площадь поверхности конуса: " << surfaceArea() << std::endl;
    std::cout << "Объем конуса: " << volume() << std::endl;
}

double Cone::surfaceArea()
{
    double slantHeight = sqrt(pow(radius, 2) + pow(height, 2));
    return 3.14 * radius * slantHeight + 3.14 * pow(radius, 2);
}

double Cone::volume()
{
    return 3.14 * pow(radius, 2) * height / 3.0;
}
