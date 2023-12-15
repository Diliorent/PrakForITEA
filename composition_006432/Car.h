//
// Created by User on 15.12.2023.
//

#ifndef COMPOSITION_006432_CAR_H
#define COMPOSITION_006432_CAR_H

#include <string>
class Engine{
public:
    std::string type;
    Engine(std::string engineType) : type(std::move(engineType)){ };
};
class Body{
public:
    std::string color;
    Body(std::string bodyColor) : color(std::move(bodyColor)){ };
};
class Wheels{
public:
    std::string sizeAndType;
    Wheels(std::string sizeAndType) : sizeAndType(std::move(sizeAndType)){ };
};

class Car{
public:
    Engine engine;
    Body   body;
    Wheels wheels;;
    void changeBodyColor(const std::string& newColor)
    {
        body = Body(newColor);
    }
    void changeWheels(const std::string& newWheels)
    {
        wheels = Wheels(newWheels);
    }
    void stoleWheels(Car &CarWithCoolWheels);

public:
    Car(Engine engine_1, Body body_1, Wheels wheels_1)
            : engine(std::move(engine_1)), body(std::move(body_1)), wheels(std::move(wheels_1)){ }
    void showCar() const;

    Car(const Car& otherCar)
            : engine(otherCar.engine), body(otherCar.body), wheels(otherCar.wheels)
    {
    }
//    Car(const Car& otherCar, const std::string& newColor = "")
//            : engine(otherCar.engine), body(otherCar.body), wheels(otherCar.wheels) {
//        if (!newColor.empty()) {
//            body = Body(newColor);
//        }
//    }
};

#endif //COMPOSITION_006432_CAR_H
