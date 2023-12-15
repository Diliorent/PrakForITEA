//
// Created by User on 14.12.2023.
//

#include "Car.h"

#include <utility>

Car::Car()
{
    engine       = nullptr;
    wheels       = nullptr;
    frame        = nullptr;
    transmission = nullptr;
    tank         = nullptr;
    std::cout << "\"Car\" constructed" << std::endl;

}
Car::~Car()
{
    std::cout << "\"Car\" destructed" << std::endl;
}
std::shared_ptr<Engine> Car::GetEngine()
{
    return (engine);
}
std::shared_ptr<Wheels> Car::GetWheels()
{
    return (wheels);
}
std::shared_ptr<Frame> Car::GetFrame()
{
    return (frame);
}
std::shared_ptr<Transmission> Car::GetTransmission()
{
    return (transmission);
}
std::shared_ptr<Tank> Car::GetTank()
{
    return (tank);
}
void Car::SetEngine(std::shared_ptr<Engine> engine_1)
{
    engine = std::move(engine_1);
}
void Car::SetWheels(std::shared_ptr<Wheels> wheels_1)
{
    wheels = std::move(wheels_1);
}
void Car::SetFrame(std::shared_ptr<Frame> frame_1)
{
    frame = std::move(frame_1);
}
void Car::SetTransmission(std::shared_ptr<Transmission> transmission_1)
{
    transmission = std::move(transmission_1);
}
void Car::SetTank(std::shared_ptr<Tank> tank_1)
{
    tank = std::move(tank_1);
}
float Car::getPrice()
{
    float price = engine->getPrice() +
                  wheels->getPrice() +
                  frame->getPrice() +
                  transmission->getPrice() +
                  tank->getPrice();
    return price;
}
float Car::getEnginePrice()
{
    return engine->getPrice();
}
float Car::getWheelPrice()
{
    return wheels->getPrice();
}
float Car::getFramePrice()
{
    return frame->getPrice();
}
float Car::getTransmissionPrice()
{
    return transmission->getPrice();
}
float Car::getTankPrice()
{
    return tank->getPrice();
}


