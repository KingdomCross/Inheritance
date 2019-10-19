//
// Created by alexc on 10/15/2019.
//

#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::print() const
{
    cout << "Center: ";
    pointType::print();
    cout << endl;

    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << getCircumference() << endl;
    cout << "Area: " << getArea() << endl;
}

void cylinderType::setHeight(double h) {
    height = h;
}

void cylinderType::setBaseCenter(double x, double y) {

}

void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h) {

}

double cylinderType::getHeight() const {
    return height;
}

double cylinderType::getVolume() const {
    return 3.1416 * radius * radius * height;
}

double cylinderType::getSurfaceArea() const {
    return (2 * 3.1416 * radius * radius) + (2 * 3.1416 * radius * height);
}

cylinderType::cylinderType(double x, double y, double r, double h)
        :circleType(x,y,r)
{
    height = h;
}
