#include <iostream>
#include <memory>
#include "Factories.h"
#include "CarComponent.h"
#include "Car.h"
#include "CarConfigurator.h"

void showCarConfiguration(const std::string& carType, const std::shared_ptr<Car>& car)
{
    std::cout << "\n======== " << carType << " ========\n";
    std::cout << "Engine: " << car->GetEngine()->ToString() << ", " << car->getEnginePrice() << "$" << std::endl;
    std::cout << "Wheels: " << car->GetWheels()->ToString() << ", " << car->getWheelPrice() << "$" << std::endl;
    std::cout << "Frame: " << car->GetFrame()->ToString() << ", " << car->getFramePrice() << "$" << std::endl;
    std::cout << "Transmission: " << car->GetTransmission()->ToString() << ", " << car->getTransmissionPrice() << "$" << std::endl;
    std::cout << "Tank: " << car->GetTank()->ToString() << ", " << car->getTankPrice() << "$" << std::endl;
    std::cout << "Total price: " << car->getPrice() << "$" << std::endl;
}

int main()
{
    std::shared_ptr<CarConfigurator> configurator = std::make_shared<CarConfigurator>();
    std::shared_ptr<Car>             car1         = std::make_shared<Car>();
    //
    configurator->SetCarFactory(std::make_shared<Factories::BetterCarFactory>());
    configurator->Configure(car1);
    showCarConfiguration("Better car", car1);
    //
    std::shared_ptr<Car> car2 = std::make_shared<Car>();
    //
    configurator->SetCarFactory(std::make_shared<Factories::RegularCarFactory>());
    configurator->Configure(car1);
    showCarConfiguration("Standard car", car1);

    return 0;
}
