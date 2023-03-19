#include <iostream>
#include "circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main() {
    float r1, x1, y1;
    float r2, x2, y2;
    float r3, x3, y3;
    cout << "Enter the radius, x coordinate and y coordinate of the first circle: ";
    cin >> r1 >> x1 >> y1;
    circle circle1(r1, x1, y1);
    cout << "Enter the radius, x coordinate and y coordinate of the second circle: ";
    cin >> r2 >> x2 >> y2;
    circle circle2(r2, x2, y2);
    cout << "Enter the radius, x coordinate and y coordinate of the third circle: ";
    cin >> r3 >> x3 >> y3;
    circle circle3(r3, x3, y3);
    // demonstrate the square method
    cout << "Square of the first circle is: " << circle1.square() << endl;
    cout << "Square of the second circle is: " << circle2.square() << endl;
    cout << "Square of the third circle is: " << circle3.square() << endl;

    // demonstrate the triangle_around method
    float a, b, c;
    cout << "Enter the sides of a triangle: ";
    cin >> a >> b >> c;

    if (circle1.triangle_around(a, b, c)) {
        cout << "The first circle can be circumscribed around the triangle." << endl;
    }
    else {
        cout << "The first circle cannot be circumscribed around the triangle." << endl;
    }

    if (circle2.triangle_around(a, b, c)) {
        cout << "The second circle can be circumscribed around the triangle." << endl;
    }
    else {
        cout << "The second circle cannot be circumscribed around the triangle." << endl;
    }

    if (circle3.triangle_around(a, b, c)) {
        cout << "The third circle can be circumscribed around the triangle." << endl;
    }
    else {
        cout << "The third circle cannot be circumscribed around the triangle." << endl;
    }

    // demonstrate the triangle_in method
    if (circle1.triangle_in(a, b, c)) {
        cout << "The first circle can be inscribed in the triangle." << endl;
    }
    else {
        cout << "The first circle cannot be inscribed in the triangle." << endl;
    }

    if (circle2.triangle_in(a, b, c)) {
        cout << "The second circle can be inscribed in the triangle." << endl;
    }
    else {
        cout << "The second circle cannot be inscribed in the triangle." << endl;
    }

    if (circle3.triangle_in(a, b, c)) {
        cout << "The third circle can be inscribed in the triangle." << endl;
    }
    else {
        cout << "The third circle cannot be inscribed in the triangle." << endl;
    }

    // demonstrate the check_circle method
    float r, x, y;
    cout << "Enter the radius, x coordinate and y coordinate of a circle: ";
    cin >> r >> x >> y;

    if (circle1.check_circle(r, x, y)) {
        cout << "The first circle intersects with the given circle." << endl;
    }
    else {
        cout << "The first circle does not intersect with the given circle." << endl;
    }
    if (circle2.check_circle(r, x, y)) {
        cout << "The first circle intersects with the given circle." << endl;
    }
    else {
        cout << "The first circle does not intersect with the given circle." << endl;
    }
    if (circle3.check_circle(r, x, y)) {
        cout << "The first circle intersects with the given circle." << endl;
    }
    else {
        cout << "The first circle does not intersect with the given circle." << endl;
    }
    
    return 0;
}