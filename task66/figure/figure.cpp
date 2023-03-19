#include "figure.h"
#include <cmath>
#include <iostream>


Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;
    this->S = abs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1) - (y1 * x2 + y2 * x3 + y3 * x4 + y4 * x1)) / 2;
    this->P = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) +
        sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)) +
        sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3)) +
        sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
}

void Figure::show()
{
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
    std::cout << "x3 = " << x3 << std::endl;
    std::cout << "x4 = " << x4 << std::endl;
    std::cout << "y1 = " << y1 << std::endl;
    std::cout << "y2 = " << y2 << std::endl;
    std::cout << "y3 = " << y3 << std::endl;
    std::cout << "y4 = " << y4 << std::endl;
    std::cout << "Area = " << S << std::endl;
    std::cout << "Perimeter = " << P << std::endl;
}

bool Figure::is_prug()
{
    if ((x1 == x3 && x2 == x4) || (x1 == x2 && x3 == x4) || (x1 == x4 && x2 == x3))
        return true;
    else
        return false;
}

bool Figure::is_square()
{
    if (is_prug() && (x1 - x2) == (y1 - y4))
        return true;
    else
        return false;
}

bool Figure::is_romb()
{
    if ((x1 - x2) == (x3 - x4) && (x2 - x3) == (x4 - x1) && (x1 - x4) == (x2 - x3))
        return true;
    else
        return false;
}

bool Figure::is_in_circle()
{
    float d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    float diagonal1 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
    float diagonal2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    float semiperimeter = P / 2;
    float radius = sqrt((semiperimeter - d1) * (semiperimeter - d2) * (semiperimeter - d3) * (semiperimeter - d4)) / (0.5 * sqrt((semiperimeter - diagonal1) * (semiperimeter - diagonal2)));
    float dist_center = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    if (dist_center <= radius)
        return true;
    else
        return false;
}

bool Figure::is_out_circle()
{
    float d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float d3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    float d4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
    float semiperimeter = P / 2;
    float area = sqrt(semiperimeter * (semiperimeter - d1) * (semiperimeter - d2) * (semiperimeter - d3) * (semiperimeter - d4));
    float radius = (d1 * d2 * d3 * d4) / (4 * area);
    float dist_center = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    if (dist_center >= radius)
        return true;
    else
        return false;
}

Figure::~Figure() {
    // No dynamic memory allocation is done in the constructor, so nothing needs to be freed
    // However, if dynamic memory allocation was done, it should be freed here
}
