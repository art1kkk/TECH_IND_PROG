#ifndef EQUATION_H
#define EQUATION_H

class EquationType3 {
public:
    EquationType3(double c);

    void Get_answer();
    void show();

private:
    double C;
};

class EquationType4 {
public:
    EquationType4(double a, double c);

    void Get_answer();
    void show();

private:
    double A, C;
};

#endif