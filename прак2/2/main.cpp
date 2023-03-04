#include <iostream>
#include <memory> // ��� ������������ ������
#include "rational.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "������� ���������� ������������ ������: ";
    std::cin >> n;

    // ������ ������������ ������ ������������ ������
    std::unique_ptr<rational[]> fractions(new rational[n]);

    for (int i = 0; i < n; i++) {
        int a, b;
        std::cout << "������� ��������� � ����������� ��� ����� " << i + 1 << ": ";
        std::cin >> a >> b;

        // ������ ������������ ����� � �������� ����������
        rational r(a, b);

        // ������ � ������������ �������
        fractions[i] = r;
    }

    // ����� ������ �� �����
    for (int i = 0; i < n; i++) {
        std::cout << "����� " << i + 1 << ": ";
        fractions[i].show();
        std::cout << std::endl;
    }

    // ����������� ������
    fractions.reset();
    return 0;
}
