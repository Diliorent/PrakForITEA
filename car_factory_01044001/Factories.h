//
// Created by User on 14.12.2023.
//
#pragma once
#ifndef CAR_FACTORY_01044001_FACTORIES_H
#define CAR_FACTORY_01044001_FACTORIES_H

#include <memory>
#include "CarComponent.h"

class Factories{
public:
    class CarFactory{
    public:
        virtual std::shared_ptr<Engine> createEngine() = 0;
        virtual std::shared_ptr<Wheels> createWheels() = 0;
        virtual std::shared_ptr<Frame> createFrame() = 0;
        virtual std::shared_ptr<Transmission> createTransmission() = 0;
        virtual std::shared_ptr<Tank> createTank() = 0;
//        virtual ~CarFactory(){ }
    };

// Конкретні фабрики
    class BetterCarFactory : public CarFactory{
    public:
        std::shared_ptr<Engine> createEngine() override
        {
            return std::make_shared<V8Engine>();
        }

        std::shared_ptr<Wheels> createWheels() override
        {
            return std::make_shared<SportWheels>();
        }

        std::shared_ptr<Frame> createFrame() override
        {
            return std::make_shared<ReinforcedFrame>();
        }
        std::shared_ptr<Transmission> createTransmission() override
        {
            return std::make_shared<SportTransmission>();
        }
        std::shared_ptr<Tank> createTank() override
        {
            return std::make_shared<ExtendedTank>();
        }

    };

    class RegularCarFactory : public CarFactory{
    public:
        std::shared_ptr<Engine> createEngine() override
        {
            return std::make_shared<V6Engine>();
        }

        std::shared_ptr<Wheels> createWheels() override
        {
            return std::make_shared<StuddedTiresWheels>();
        }

        std::shared_ptr<Frame> createFrame() override
        {
            return std::make_shared<BasicFrame>();
        }
        std::shared_ptr<Transmission> createTransmission() override
        {
            return std::make_shared<BasicTransmission>();
        }
        std::shared_ptr<Tank> createTank() override
        {
            return std::make_shared<BasicTank>();
        }

    };
};

#endif //CAR_FACTORY_01044001_FACTORIES_H
