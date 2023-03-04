#include <iostream>
#include <memory> // дл¤ динамической пам¤ти
#include "rational.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "¬ведите количество рациональных дробей: ";
    std::cin >> n;

    // создаЄм динамический массив рациональных дробей
    std::unique_ptr<rational[]> fractions(new rational[n]);

    for (int i = 0; i < n; i++) {
        int a, b;
        std::cout << "¬ведите числитель и знаменатель дл¤ дроби " << i + 1 << ": ";
        std::cin >> a >> b;

        // создаЄм рациональную дробь с входными значени¤ми
        rational r(a, b);

        // храним в динамическом массиве
        fractions[i] = r;
    }

    // вывод дробей на экран
    for (int i = 0; i < n; i++) {
        std::cout << "ƒробь " << i + 1 << ": ";
        fractions[i].show();
        std::cout << std::endl;
    }

    // освобождаем пам¤ть
    fractions.reset();
    return 0;
}
