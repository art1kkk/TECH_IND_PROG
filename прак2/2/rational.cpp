#include <iostream>
#include "rational.h"

rational::rational(int a1, int b1)
{
    if (b1 == 0) {
        std::cerr << "Ошибка: знаменатель не может быть равен нулю" << std::endl;
        exit(1);
    }

    if (a1 > b1) {
        int whole_part = a1 / b1;
        a1 -= whole_part * b1;
        a = a1;
        b = b1;
        reduce();
    }
    else {
        a = a1;
        b = b1;
        reduce();
    }
}

void rational::set(int a1, int b1)
{
    if (b1 == 0) {
        std::cerr << "Ошибка: знаменатель не может быть равен нулю" << std::endl;
        exit(1);
    }

    if (a1 > b1) {
        int whole_part = a1 / b1;
        a1 -= whole_part * b1;
        a = a1;
        b = b1;
        reduce();
    }
    else {
        a = a1;
        b = b1;
        reduce();
    }
}

void rational::show() const
{
    std::cout << a << "/" << b << std::endl;
}

void rational::reduce() // вспомогательный метод, который уменьшает дробь путем нахождения наибольшего общего делителя a и b и деления обоих на это значение
{
    int gcd = 1;
    for (int i = 2; i <= std::min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    if (gcd > 1) {
        a /= gcd;
        b /= gcd;
    }
}
