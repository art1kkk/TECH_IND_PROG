#include <iostream>
#include <string>
#include "Ocean.cpp"

using namespace std;

class Sea : public Ocean {
public:
    Sea() : Ocean(), type("Неизвестный") {}
    Sea(string n, string l, int s, int d, int sa, string t) : Ocean(n, l, s, d, sa), type(t) {}

    string getType() const { return type; }
    void setType(string t) { type = t; }

    void print() const override {
        cout << "---Море---" << endl;
        Ocean::print();
        cout << "Тип: " << type << endl;
    }

private:
    string type;
};