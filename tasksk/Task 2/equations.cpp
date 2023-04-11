#include "equations.h"
#include <iostream>
#include <cmath>

EquationType3::EquationType3(double c) : C(c) {}

void EquationType3::Get_answer() {
    std::cout << "The equation has no solutions." << std::endl;
}

void EquationType3::show() {
    std::cout << "0x^3 + 0x^2 + 0x + " << C << " = 0" << std::endl;
}

EquationType4::EquationType4(double a, double c) : A(a), C(c) {}

void EquationType4::Get_answer() {
    double D = A * A - 4 * C;
    if (D > 0) {
        double x1 = (-A + sqrt(D)) / 2;
        double x2 = (-A - sqrt(D)) / 2;
        std::cout << "The equation has two roots: " << x1 << ", " << x2 << std::endl;
    }
    else if (D == 0) {
        double x = -A / 2;
        std::cout << "The equation has one root: " << x << std::endl;
    }
    else {
        std::cout << "The equation has no real roots." << std::endl;
    }
}

void EquationType4::show() {
    std::cout << A << "x^2 + 0x + " << C << " = 0" << std::endl;
}
