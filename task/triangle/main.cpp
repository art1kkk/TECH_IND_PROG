#include <iostream>
#include "triangle.h"

int main() {
    Triangle triangles[3] = { Triangle(0, 0, 0), Triangle(0, 0, 0), Triangle(0, 0, 0) };

    for (int i = 0; i < 3; i++) {
        double a, b, c;
        std::cout << "Enter sides of triangle " << i + 1 << ": ";
        std::cin >> a >> b >> c;

        Triangle tr(a, b, c);

        if (tr.exst_tr()) {
            triangles[i] = tr;
        }
        else {
            std::cout << "Error: Invalid triangle input. Triangle does not exist." << std::endl;
            i--;
        }
    }

    for (int i = 0; i < 3; i++) {
        std::cout << "Triangle " << i + 1 << ":" << std::endl;
        triangles[i].show();
        std::cout << "Perimeter: " << triangles[i].perimeter() << std::endl;
        std::cout << "Area: " << triangles[i].square() << std::endl;
    }

    return 0;
}