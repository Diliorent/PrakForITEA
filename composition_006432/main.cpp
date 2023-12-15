#include <iostream>
#include "Car.h"
int main()
{
    std::cout << "Hello, I bought new car! Look at it:" << std::endl;
    Car myCar(Engine("V8 Engine"),Body("Red"),Wheels("Sport 16"));
    myCar.showCar();
    std::cout << "Week after, my neighbour bought same car" << std::endl;
    Car neighbourCar = myCar;
    neighbourCar.showCar();
    std::cout << "then, he changed color of his car to gray. " << std::endl << " His car now: \n";
    neighbourCar.changeBodyColor("gray");
    neighbourCar.showCar();
    std::cout << "One more week after, he blew out his tires" << std::endl;
    neighbourCar.changeWheels("deflated tires");
    neighbourCar.showCar();
    //--------------------------------
    neighbourCar.stoleWheels(myCar);
    std::cout << "This morning, I heard strange noises in the garage. I looked at my neighbor's car:\n";
    neighbourCar.showCar();
    std::cout << "I guessed what had happened, but I decided to double-check. Went down to the garage. OH, NO! \nMy car: ";
    myCar.showCar();
    return 0;
}
