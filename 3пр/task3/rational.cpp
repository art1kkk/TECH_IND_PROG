#include <iostream>
#include <numeric>
#include <algorithm>
#include "rational.h"

rational::rational(int a1, int b1)
{
    if (b1 == 0) {
        std::cerr << "ќшибка: знаменатель не может быть равен нулю" << std::endl;
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
        std::cerr << "ќшибка: знаменатель не может быть равен нулю" << std::endl;
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

rational rational::operator+(const rational& rhs) const
{
    rational result;
    result.a = a * rhs.b + rhs.a * b;
    result.b = b * rhs.b;
    result.reduce();
    return result;
}

rational& rational::operator++()
{
    a += b;
    return *this;
}

bool rational::operator==(const rational& other) const
{
    return a == other.a && b == other.b;
}

bool rational::operator>(const rational& other) const
{
    return a * other.b > other.a * b;
}

rational& rational::operator=(const rational& other)
{
    if (this != &other) {
        a = other.a;
        b = other.b;
    }
    return *this;
}

void rational::reduce() // вспомогательный метод, который уменьшает дробь путем нахождени¤ наибольшего общего делител¤ a и b и делени¤ обоих на это значение
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

rational operator-(const rational& lhs, const rational& rhs)
{
    int lcm = std::lcm(lhs.b, rhs.b);
    int new_a1 = lhs.a * (lcm / lhs.b);
    int new_a2 = rhs.a * (lcm / rhs.b);
    return rational(new_a1 - new_a2, lcm);
}
