//
// Created by User on 14.12.2023.
//

#ifndef CAR_FACTORY_01044001_CAR_H
#define CAR_FACTORY_01044001_CAR_H
#include <memory>
#include <iostream>
#include "CarComponent.h"

class Car{
    std::shared_ptr<Engine>       engine;
    std::shared_ptr<Wheels>       wheels;
    std::shared_ptr<Frame>        frame;
    std::shared_ptr<Transmission> transmission;
    std::shared_ptr<Tank>         tank;
//    float price = 0;
public:
    Car();
    virtual ~Car();
    //---Getters
    std::shared_ptr<Engine> GetEngine();
    std::shared_ptr<Wheels> GetWheels();
    std::shared_ptr<Frame> GetFrame();
    std::shared_ptr<Transmission> GetTransmission();
    std::shared_ptr<Tank> GetTank();
    //---Setters
    void SetEngine(std::shared_ptr<Engine> engine_1);
    void SetWheels(std::shared_ptr<Wheels> wheels_1);
    void SetFrame(std::shared_ptr<Frame> frame_1);
    void SetTransmission(std::shared_ptr<Transmission> transmission_1);
    void SetTank(std::shared_ptr<Tank> tank_1);
    float getPrice();
    float getEnginePrice();
    float getWheelPrice();
    float getFramePrice();
    float getTransmissionPrice();
    float getTankPrice();

};

#endif //CAR_FACTORY_01044001_CAR_H
