//
// Created by User on 14.12.2023.
//

#ifndef CAR_FACTORY_01044001_CARCOMPONENT_H
#define CAR_FACTORY_01044001_CARCOMPONENT_H

#include <string>
class CarComponent{
public:
    virtual std::string ToString() = 0;
    [[nodiscard]] virtual float getPrice() const = 0;
    virtual ~CarComponent() = default;
};

//
class Engine : public CarComponent {
};
//
class Wheels : public CarComponent {
};
//
class Frame : public CarComponent {
};
//
class Transmission : public CarComponent {
};
//
class Tank : public CarComponent {
};

class SportTransmission : public Transmission
{
public:
        std::string ToString() override
    {
        return "SportTransmission";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 15000;
    }
};

class ReinforcedFrame : public Frame
{
public:
    std::string ToString() override
    {
        return "ReinforcedFrame";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 8000;
    }
};

class V8Engine : public Engine
{
public:
    std::string ToString() override
    {
        return "V8Engine";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 20000;
    }
};

class BasicTransmission : public Transmission
{
public:
    std::string ToString() override
    {
        return "BasicTransmission";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 2000;
    }
};

class SportWheels : public Wheels
{
public:
    std::string ToString() override
    {
        return "SportWheels";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 6000;
    }
};
class BasicFrame : public Frame
{
public:
    std::string ToString() override
    {
        return "BasicFrame";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 1000;
    }
};
class V6Engine : public Engine
{
public:
    std::string ToString() override
    {
        return "V6Engine";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 5000;
    }
};

class ExtendedTank : public Tank
{
public:
    std::string ToString() override
    {
        return "ExtendedTank";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 3000;
    }
};

class StuddedTiresWheels : public Wheels
{
public:
    std::string ToString() override
    {
        return "StuddedTiresWheels";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 2000;
    }
};

class BasicTank : public Tank
{
public:
    std::string ToString() override
    {
        return "BasicTank";
    }
    [[nodiscard]] float getPrice() const override
    {
        return 1000;
    }
};
#endif //CAR_FACTORY_01044001_CARCOMPONENT_H
