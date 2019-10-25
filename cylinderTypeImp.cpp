//
// Created by alexc on 10/15/2019.
//

#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::print() const
{
    /*cout << "Center: ";
    pointType::print();
    cout << endl;

    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << getCircumference() << endl;
    cout << "Area: " << getArea() << endl;
*/
    circleType::print();

    cout << "Cylinder height: " << height << endl;
    cout << "Cylinder surface area: " << getSurfaceArea() << endl;
    cout << "Cylinder volume: " << getVolume() << endl;
}

void cylinderType::setHeight(double h) {
    height = h;
}

void cylinderType::setBaseCenter(double x, double y) {
    xCoordinate = x;
    yCoordinate = y;
}

void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h) {
    xCoordinate = x;
    yCoordinate = y;
    radius = r;
    height = h;
}

double cylinderType::getHeight() const {
    return height;
}

double cylinderType::getVolume() const {
    return getArea() * height;
    //return 3.1416 * radius * radius * height;
}

double cylinderType::getSurfaceArea() const {
    return getCircumference() * height + getArea() * 2;
}

cylinderType::cylinderType(double x, double y, double r, double h)
        :circleType(x,y,r)
{
    height = h;
}
