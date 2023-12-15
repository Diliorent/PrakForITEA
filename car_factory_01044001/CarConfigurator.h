//
// Created by User on 15.12.2023.
//
#pragma once
#ifndef CAR_FACTORY_01044001_CARCONFIGURATOR_H
#define CAR_FACTORY_01044001_CARCONFIGURATOR_H
#include <iostream>
#include <memory>
#include <utility>
#include "Car.h"
#include "CarComponent.h"
#include "Factories.h"
class CarConfigurator{
    std::shared_ptr<Factories::CarFactory> carFactory;
public:
    CarConfigurator()
    {
        carFactory = nullptr;
    }
    virtual ~CarConfigurator() = default;

    std::shared_ptr<Factories::CarFactory> GetCarFactory()
    {
        return (carFactory);
    }
    void SetCarFactory(std::shared_ptr<Factories::CarFactory> carCurrentFactory)
    {
        carFactory = (std::move(carCurrentFactory));
    }

    void Configure(const std::shared_ptr<Car>& car)
    {
        car->SetEngine(carFactory->createEngine());
        car->SetWheels(carFactory->createWheels());
        car->SetFrame(carFactory->createFrame());
        car->SetTransmission(carFactory->createTransmission());
        car->SetTank(carFactory->createTank());
    }
};

#endif //CAR_FACTORY_01044001_CARCONFIGURATOR_H
