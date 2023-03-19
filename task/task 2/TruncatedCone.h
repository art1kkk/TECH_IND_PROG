#ifndef TRUNCATEDCONE_H
#define TRUNCATEDCONE_H

#include <iostream>
#include "Cone.h"

class TruncatedCone : public Cone {
private:
    double topRadius;

public:
    TruncatedCone() : Cone(), topRadius(0.0) {}
    TruncatedCone(double x, double y, double z, double r, double h, double tr) : Cone(x, y, z, r, h), topRadius(tr) {}

    double surfaceArea() const override;
    double volume() const override;

    friend std::istream& operator>>(std::istream& is, TruncatedCone& c);
    friend std::ostream& operator<<(std::ostream& os, const TruncatedCone& c);

    bool operator==(const TruncatedCone& other) const;
};

#endif /* TRUNCATEDCONE_H */
