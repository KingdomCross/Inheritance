//
// Created by alexc on 10/15/2019.
//

#include <iostream>
#include <iomanip>
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