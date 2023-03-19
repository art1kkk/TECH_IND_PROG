#ifndef CIRCLE_H
#define CIRCLE_H

class circle {
public:
    circle(float r = 0, float x = 0, float y = 0);
    void set_circle(float r, float x, float y);
    float square();
    bool triangle_around(float a, float b, float c);
    bool triangle_in(float a, float b, float c);
    bool check_circle(float r, float x_cntr, float y_cntr);
    ~circle();

private:
    float radius;
    float x_center;
    float y_center;
};

#endif // CIRCLE_H