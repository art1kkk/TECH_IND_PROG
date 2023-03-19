#include "TruncatedCone.h"
#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "Russian");
    std::vector<TruncatedCone> cones;
    int numCones;
    std::cout << "Сколько усеченных конусов вы хотели бы создать?" << std::endl;
    std::cin >> numCones;

    for (int i = 0; i < numCones; i++) {
        TruncatedCone c;
        std::cout << "Введите координаты центральной точки (x, y, z):" << std::endl;
        std::cin >> c;
        std::cout << "Введите базовый радиус:" << std::endl;
        std::cin >> c;
        std::cout << "Введите верхний радиус:" << std::endl;
        std::cin >> c;
        std::cout << "Введите высоту:" << std::endl;
        std::cin >> c;
        cones.push_back(c);
    }

    for (const auto& c : cones) {
        std::cout << c << std::endl;
    }

    std::vector<TruncatedCone> cones2;

    Cone baseCone(1, 2, 3, 4, 5);

    TruncatedCone cone1(1, 2, 3, 4, 5, 6);
    TruncatedCone cone2(7, 8, 9, 10, 11, 12);
    TruncatedCone cone3(13, 14, 15, 16, 17, 18);

    cones2.push_back(cone1);
    cones2.push_back(cone2);
    cones2.push_back(cone3);

    for (auto cone : cones2) {
        std::cout << cone << std::endl;
    }

    return 0;
}