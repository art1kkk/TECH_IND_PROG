#ifndef RATIONAL_H
#define RATIONAL_H

class rational {
public:
    rational() : a(0), b(1) {} // конструктор по умочанию
    rational(int a1, int b1);
    void set(int a1, int b1);
    void show() const;

private:
    int a, b;
    void reduce();
};

#endif