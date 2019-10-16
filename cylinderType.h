//
// Created by alexc on 10/15/2019.
//

//Class cylinderType

#ifndef INHERITANCE_CYLINDERTYPE_H
#define INHERITANCE_CYLINDERTYPE_H

#include "circleType.h"

class cylinderType: public circleType
{
public:
    void print() const;

    void setHeight(double h);
    void setBaseCenter(double x, double y);
    void setCenterRadiusHeight(double x, double y,
                               double r, double h);

    double getHeight() const;
    double getVolume() const;
    double getSurfaceArea() const;
    cylinderType(double x = 0.0, double y = 0.0,
                 double r = 0.0, double h = 0.0);

protected:
    double height;
};


#endif //INHERITANCE_CYLINDERTYPE_H
