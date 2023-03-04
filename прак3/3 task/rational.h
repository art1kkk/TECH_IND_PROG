#ifndef RATIONAL_H
#define RATIONAL_H

class rational {
public:
    rational() : a(0), b(1) {} // конструктор по умочанию
    rational(int a1, int b1);
    void set(int a1, int b1);
    void show() const;
    rational operator+(const rational& rhs) const;
    friend rational operator-(const rational& lhs, const rational& rhs);
    rational& operator++();
    bool operator==(const rational& other) const;
    bool operator>(const rational& other) const;
    rational& operator=(const rational& other);
private:
    int a, b;
    void reduce();
};

#endif