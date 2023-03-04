#include <iostream>
#include <memory> // для динамической памяти
#include "rational.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "Введите количество рациональных дробей: ";
    std::cin >> n;

    // создаём динамический массив рациональных дробей
    std::unique_ptr<rational[]> fractions(new rational[n]);

    for (int i = 0; i < n; i++) {
        int a, b;
        std::cout << "Введите числитель и знаменатель для дроби " << i + 1 << ": ";
        std::cin >> a >> b;

        // создаём рациональную дробь с входными значениями
        rational r(a, b);

        // храним в динамическом массиве
        fractions[i] = r;
    }

    // вывод дробей на экран
    for (int i = 0; i < n; i++) {
        std::cout << "Дробь " << i + 1 << ": ";
        fractions[i].show();
        std::cout << std::endl;
    }
    std::cout << "Сложение двух первых дробей: ";
    rational nw =  fractions[0] + fractions[1];
    nw.show();
    std::cout << "Вычитание двух первых дробей: ";
    nw = fractions[0] - fractions[1];
    nw.show();
    std::cout << "Инкремент для дроби выше: ";
    ++nw;
    nw.show();
    if (fractions[0] == fractions[1]) {
        std::cout << "Первая дробь равна второй" << std::endl;
    }
    else {
        std::cout << "Первая дробь НЕ равна второй" << std::endl;
    }
    if (fractions[0] > fractions[1]) {
        std::cout << "Первая дробь больше второй" << std::endl;
    }
    else {
        std::cout << "Первая дробь меньше второй" << std::endl;
    }
    fractions[1] = fractions[0];
    std::cout << "Теперь первая дробь равна второй: " << std::endl;
    fractions[0].show();
    fractions[1].show();

    // освобождаем память
    fractions.reset();
    return 0;
}
