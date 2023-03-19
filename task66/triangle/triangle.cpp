#include "triangle.h"
#include <iostream>

Triangle::Triangle(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

bool Triangle::exst_tr()
{
	return (a + b > c) && (a + c > b) && (b + c > a);
}

void Triangle::set(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

void Triangle::show()
{
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
}

double Triangle::perimeter()
{
	return a + b + c;
}

double Triangle::square()
{
	double p = perimeter() / 2;
	return std::sqrt(p * (p - a) * (p - b) * (p - c));
}
