//
// Created by User on 15.12.2023.
//

#include <iostream>
#include "Car.h"
void Car::showCar() const
{
    std::cout << "Engine: " << engine.type << ", Body color: " << body.color << ", Wheels: " << wheels.sizeAndType << std::endl;

}
void Car::stoleWheels(Car& CarWithCoolWheels)
{
    wheels = CarWithCoolWheels.wheels;
    CarWithCoolWheels.changeWheels("No wheels :( ");
}
