//
// Created by alexc on 10/15/2019.
//

//Class circleType

#ifndef INHERITANCE_CIRCLETYPE_H
#define INHERITANCE_CIRCLETYPE_H

#include "pointType.h"

class circleType: public pointType
{
public:
    void print() const;
    void setRadius(double r);
    double getRadius() const;
    double getCircumference() const;
    double getArea() const;
    circleType(double x = 0.0, double y = 0.0, double r = 0.0);

protected:
    double radius;
};

#endif //INHERITANCE_CIRCLETYPE_H
