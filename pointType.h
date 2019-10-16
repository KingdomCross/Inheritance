//
// Created by alexc on 10/15/2019.
//

#ifndef INHERITANCE_POINTTYPE_H
#define INHERITANCE_POINTTYPE_H

class pointType
{
public:
    void setPoint(double x, double y);
    void print() const;
    double getX() const;
    double getY() const;
    pointType(double x = 0.0, double y = 0.0);

protected:
    double xCoordinate;
    double yCoordinate;
};

#endif //INHERITANCE_POINTTYPE_H
