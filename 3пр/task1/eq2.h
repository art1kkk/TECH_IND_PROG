#ifndef EQ2_H
#define EQ2_H

class eq2 {
public:
    double a, b, c;
    double D;
    eq2(double a1, double b1, double c1);
    void set(double a1, double b1, double c1);
    double find_X();
    double find_Y(double x1);
};

eq2 operator+(const eq2& lhs, const eq2& rhs);

#endif