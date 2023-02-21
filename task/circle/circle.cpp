#include "circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

circle::circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
}

void circle::set_circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
}

float circle::square()
{
    return M_PI * pow(radius, 2);
}

bool circle::triangle_around(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float R = (a * b * c) / (4 * sqrt(s * (s - a) * (s - b) * (s - c)));
    return R >= radius;
}

bool circle::triangle_in(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float r = sqrt((s - a) * (s - b) * (s - c) / s);
    return r <= radius;
}

bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
    double distance = sqrt(pow(x_center - x_cntr, 2) + pow(y_center - y_cntr, 2));
    return distance <= radius + r && distance >= fabs(radius - r);
}

circle::~circle() {
    // No dynamic memory allocation is done in the constructor, so nothing needs to be freed
    // However, if dynamic memory allocation was done, it should be freed here
}