//
// Created by User on 02.11.2023.
//

#include <iostream>
#include "cmath"
#include "Rhombus.h"

double Rhombus::get_side() {
    return side;
}

double Rhombus::get_angle() {
    return angle;
}

void Rhombus::set_side(double side) {
    if (side > 0) {
        this->side = side;
    } else { std::cout << "You entered negative amount of side. Side is remained unchanged.\n"; }
}

void Rhombus::set_angle(double angle) {
    if (angle > 0) {
        this->angle = angle;
    } else {
        std::cout
                << "You entered negative amount of angle, Or it is not in range 0:180 deg. Angle is remained unchanged.\n";
    }
}

double Rhombus::get_area() {
    area = side * side * sin(angle / 180 * M_PI);
    return area;
}

Rhombus::Rhombus(double s, double a) {
    if (side > 0)
        side = s;
    else side = 0;

    if (angle > 0 && a <= 180)
        angle = a;
    else {
        std::cout << "You entered negative amount of angle, Or it is not in range 0:180 deg. Setting angle in 0.\n";
        angle = 0;
    }
}

Rhombus::Rhombus() {
    side = 1;
    angle = 90;
}

void Rhombus::print(Rhombus *rhombus) {
    std::cout << "Rhombus have this characteristics:\nSide = " << rhombus->get_side() << ", angle "
              << rhombus->get_angle() << ", area = " << rhombus->get_area() << std::endl;
}
