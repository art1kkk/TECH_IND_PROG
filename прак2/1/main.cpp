#include <iostream>
#include <cmath>
#include "eq2.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, e, f;
    std::cout << "Введите коэффициенты для 2-х квадратных уравнения (сначала для первого, потом для второго): ";
    std::cin >> a >> b >> c >> d >> e >> f;
    eq2 my_eq1(a, b, c), my_eq2(d, e, f);
    eq2 my_eq3 = my_eq1 + my_eq2;
    std::cout << "Для первого уравнения: ";
    double largest_root1 = my_eq1.find_X();
    std::cout << std::endl << "Для второго уравнения: ";
    double largest_root2 = my_eq2.find_X();
    std::cout << std::endl << "Для суммы двух уравнений: ";
    double largest_root3 = my_eq3.find_X();
    std::cout << "Введите X для получения значения квадратного многочлена для 3-го уравнения: ";
    double x;
    std::cin >> x;
    double y_at_x = my_eq3.find_Y(x);
    std::cout << "Y в x = " << x << ": " <<  y_at_x << std::endl;
    return 0;
}