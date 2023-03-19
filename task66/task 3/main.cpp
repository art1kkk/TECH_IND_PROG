#include <iostream>
#include <string>
#include "Ocean.cpp"
#include "Sea.cpp"
#include "Bay.cpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Ocean ocean("Тихий", "Западная часть Тихого океана", 168723000, 10968, 63200000);
    Sea sea("Балтийское", "Северная Европа", 415266, 55, 377000, "Внутреннее море");
    Bay bay("Гудзонов залив", "Канада", 1320000, 200, 821000, "Северный Ледовитый океан");

    ocean.print();
    cout << endl;
    sea.print();
    cout << endl;
    bay.print();
    cout << endl;

    bay.setName("Гудзонов залив (Канада)");
    bay.setNameOfOcean("Атлантический Океан");
    bay.print();
    cout << endl;

    return 0;
}
