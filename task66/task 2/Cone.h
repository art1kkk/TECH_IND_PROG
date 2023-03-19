#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double x;
    double y;
    double z;
    double radius;
    double height;

public:
    Cone();
    Cone(double xCoord, double yCoord, double zCoord, double r, double h);
    Cone(double r, double h);
    void input();
    void output();
    virtual double surfaceArea() const;
    virtual double volume() const;
    double getHeight() const;
    double getRadius() const;
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif // CONE_H
