#include "equations.h"

int main() {
    EquationType3 equation3(5);
    equation3.show();
    equation3.Get_answer();

    EquationType4 equation4(2, -3);
    equation4.show();
    equation4.Get_answer();

    return 0;
}