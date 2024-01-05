//
// Created by User on 04.01.2024.
//

#include "Ion.h"
Ion::Ion(char charge, int valency)
{

    // Перевірка допустимості заряду
    if (charge == '+' || charge == '-') {
        this->charge = charge;
    } else {
        std::cout << "Invalid charge. Setting default value '-'" << std::endl;
        this->charge = '-';
    }

    // Перевірка допустимості валентності
    if (valency >= 1 && valency <= 7) {
        this->valency = valency;
    } else {
        std::cout << "Invalid valency. Setting default value 1" << std::endl;
        this->valency = 1;
    }
    std::cout << "Constructing ion: ";
    displayInfo();
}
void Ion::setCharge(char newCharge)
{
    // Перевірка допустимості нового заряду
    if( newCharge == '+' || newCharge == '-' ) {
        charge = newCharge;
    }
    else {
        std::cout << "Charge should be '+' or '-'" << std::endl;
    }
}
void Ion::setValency(int newValency)
{
    // Перевірка допустимості нової валентності
    if( newValency >= 1 && newValency <= 7 ) {
        valency = newValency;
    }
    else {
        std::cout << "Valency should be between 1 and 7." << std::endl;
    }
}
void Ion::displayInfo() const
{
    std::cout << "charge: " << charge << ", valency: " << valency << std::endl;
}
Ion::~Ion()
{
    std::cout << "Destructing Ion: ";
    displayInfo();
}

Ion::Ion()
{
    charge = '-';
    valency = 1;

}
