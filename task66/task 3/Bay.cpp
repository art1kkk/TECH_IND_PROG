#include <iostream>
#include <string>
#include "Ocean.cpp"

using namespace std;

class Bay : public Ocean {
public:
    Bay() : Ocean(), nameOfOcean("Неизвестный") {}
    Bay(string n, string l, int s, int d, int sa, string no) : Ocean(n, l, s, d, sa), nameOfOcean(no) {}

    string getNameOfOcean() const { return nameOfOcean; }
    void setNameOfOcean(string no) { nameOfOcean = no; }

    void print() const override {
        cout << "---Залив---" << endl;
        Ocean::print();
        cout << "Название океана: " << nameOfOcean << endl;
    }

private:
    string nameOfOcean;
};