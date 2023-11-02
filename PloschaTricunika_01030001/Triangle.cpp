//
// Created by User on 02.11.2023.
//

#include <iostream>
#include "Triangle.h"

double Triangle::get_side() {
    return side;
}

double Triangle::get_height() {
    return height;
}

void Triangle::set_side(double side) {
    if (side > 0) {
        this->side = side;
    } else { std::cout << "You entered negative amount of side. Side is remained unchanged.\n"; }
}

void Triangle::set_height(double height) {
    if (height > 0 || height > side) { this->height = height; }
    else {
        std::cout
                << "You entered negative amount of height, or height is smaller then side. Height is remained unchanged.\n";
    }

}

double Triangle::get_area() {
    area = side * height / 2;
    return area;
}

Triangle::Triangle(double s, double h) {
    if (side > 0)
        side = s;
    else side = 0;

    if (height > 0 && h < s)
        height = h;
    else {
        std::cout << "You entered negative amount of height, or height is bigger or equal side. Setting all in 0.\n";
        side = 0;
        height = 0;
    }
}

void Triangle::print(Triangle *triangle) {
    {
        std::cout << "Triangle have this characteristics:\nSide = " << triangle->get_side() << ", height "
                  << triangle->get_height() << ", area = "
                  << triangle->get_area() << std::endl;
    }

}

Triangle::Triangle() {
    side = 1;
    height = 1;
}




