#include <iostream>
#include <cmath>
#include "eq2.h"

eq2::eq2(double a1, double b1, double c1)
{
	set(a1, b1, c1);
	D = b * b - 4 * a * c;
}

void eq2::set(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

double eq2::find_X()
{
	if (D < 0) {
		std::cout << "Корней нет" << std::endl;
		return 0;
	}
	else if (D == 0) {
			std::cout << "Корень один: ";
			double x = (-b - sqrt(D)) / (2 * a);
			std::cout << x << std::endl;
			return x;
		}
	else {
		std::cout << "Корня 2, наибольший из них: ";
		double x1 = (-b + std::sqrt(D)) / (2 * a);
		double x2 = (-b - std::sqrt(D)) / (2 * a);
		std::cout << ((x1 > x2) ? x1 : x2) << std::endl;
		return (x1 > x2) ? x1 : x2;
	}
}

double eq2::find_Y(double x1)
{
	return a * x1 * x1 + b * x1 + c;
}

eq2 operator+(const eq2& lhs, const eq2& rhs)
{
	double a = lhs.a + rhs.a;
	double b = lhs.b + rhs.b;
	double c = lhs.c + rhs.c;
	return eq2(a, b, c);
}
