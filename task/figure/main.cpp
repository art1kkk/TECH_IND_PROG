#include <iostream>
#include "figure.h"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Enter the x and y coordinates of the first quadrilateral: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure quad1(x1, x2, x3, x4, y1, y2, y3, y4);

    cout << "Enter the x and y coordinates of the second quadrilateral: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure quad2(x1, x2, x3, x4, y1, y2, y3, y4);

    cout << "Enter the x and y coordinates of the third quadrilateral: " << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    Figure quad3(x1, x2, x3, x4, y1, y2, y3, y4);

    cout << "Parameters of the first quadrilateral:" << endl;
    quad1.show();
    if (quad1.is_prug())
        cout << "This is a rectangle." << endl;
    else if (quad1.is_square())
        cout << "This is a square." << endl;
    else if (quad1.is_romb())
        cout << "This is a rhombus." << endl;
    else
        cout << "This is neither a rectangle, a square, nor a rhombus." << endl;
    if (quad1.is_in_circle())
        cout << "This quadrilateral can fit into a circle." << endl;
    else
        cout << "This quadrilateral cannot fit into a circle." << endl;
    if (quad1.is_out_circle())
        cout << "A circle can be inscribed in this quadrilateral." << endl;
    else
        cout << "A circle cannot be inscribed in this quadrilateral." << endl;
    cout << endl;

    cout << "Parameters of the second quadrilateral:" << endl;
    quad2.show();
    if (quad2.is_prug())
        cout << "This is a rectangle." << endl;
    else if (quad2.is_square())
        cout << "This is a square." << endl;
    else if (quad2.is_romb())
        cout << "This is a rhombus." << endl;
    else
        cout << "This is neither a rectangle, a square, nor a rhombus." << endl;
    if (quad2.is_in_circle())
        cout << "This quadrilateral can fit into a circle." << endl;
    else
        cout << "This quadrilateral cannot fit into a circle." << endl;
    if (quad2.is_out_circle())
        cout << "A circle can be inscribed in this quadrilateral." << endl;
    else
        cout << "A circle cannot be inscribed in this quadrilateral." << endl;
    cout << endl;

    cout << "Parameters of the third quadrilateral:" << endl;
    quad3.show();
    if (quad3.is_prug())
        cout << "This is a rectangle." << endl;
    else if (quad3.is_square())
        cout << "This is a square." << endl;
    else if (quad3.is_romb())
        cout << "This is a rhombus." << endl;
    else
        cout << "This is neither a rectangle, a square, nor a rhombus." << endl;
    if (quad3.is_in_circle())
        cout << "This quadrilateral can fit into a circle." << endl;
    else
        cout << "This quadrilateral cannot fit into a circle." << endl;
    if (quad3.is_out_circle())
        cout << "A circle can be inscribed in this quadrilateral." << endl;
    else
        cout << "A circle cannot be inscribed in this quadrilateral." << endl;
    cout << endl;

    return 0;
}