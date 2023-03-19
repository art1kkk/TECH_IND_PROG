#include "TruncatedCone.h"
#include "Cone.h"
#include <iostream>

using namespace std;

double TruncatedCone::surfaceArea() const
{
    double baseArea = Cone::surfaceArea();
    double topArea = 3.14 * topRadius * sqrt(pow(getHeight(), 2) + pow(getRadius() - topRadius, 2));
    double slantHeight = sqrt(pow(getHeight(), 2) + pow(getRadius() - topRadius, 2));
    double lateralArea = 3.14 * slantHeight * (getRadius() + topRadius);
    return baseArea + topArea + lateralArea;
}

double TruncatedCone::volume() const
{
    double h = getHeight();
    double r1 = getRadius();
    double r2 = topRadius;
    return (1.0 / 3.0) * 3.14 * h * (pow(r1, 2) + r1 * r2 + pow(r2, 2));
}

bool TruncatedCone::operator==(const TruncatedCone& other) const
{
    return (getX() == other.getX() && getY() == other.getY() && getZ() == other.getZ() &&
        getRadius() == other.getRadius() && getHeight() == other.getHeight() &&
        topRadius == other.topRadius);
}

std::istream& operator>>(std::istream& is, TruncatedCone& c)
{
    double x, y, z, r, h, tr;
    is >> x >> y >> z >> r >> h >> tr;
    c = TruncatedCone(x, y, z, r, h, tr);
    return is;
}

std::ostream& operator<<(std::ostream& os, const TruncatedCone& c)
{
    os << "Координаты центра: (" << c.getX() << ", " << c.getY() << ", " << c.getZ() << ")" << endl;
    os << "Базовый радиус: " << c.getRadius() << endl;
    os << "Верхний радиус: " << c.topRadius << endl;
    os << "Высота: " << c.getHeight() << endl;
    os << "Площадь поверхности: " << c.surfaceArea() << endl;
    os << "Объём: " << c.volume() << endl;
    return os;
}
