#ifndef FIGURE_H
#define FIGURE_H

class Figure {
private:
    float x1, x2, x3, x4; // x coordinates of the vertices
    float y1, y2, y3, y4; // y coordinates of the vertices
    float S; // area of the quadrilateral
    float P; // perimeter of the quadrilateral

public:
    Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4); // constructor
    void show(); // displays the parameters of the quadrilateral
    bool is_prug(); // returns true if the quadrilateral is a rectangle and false otherwise
    bool is_square(); // returns true if the quadrilateral is square and false otherwise
    bool is_romb(); // returns true if the quadrilateral is a rhombus and false otherwise
    bool is_in_circle(); // returns true if the quadrilateral can fit into a circle and false otherwise
    bool is_out_circle(); // returns true if a circle can be inscribed in the quadrilateral and false otherwise
    ~Figure();
};

#endif /* FIGURE_H */