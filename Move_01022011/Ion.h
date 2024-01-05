//
// Created by User on 04.01.2024.
//

#ifndef MOVE_01022011_ION_H
#define MOVE_01022011_ION_H

#include <iostream>
#include <string>

class Ion{
private:
    char charge{};    // Заряд іону ('+' або '-')
    int  valency{};    // Валентність іону (від 1 до 7)
public:
//    int  valency;    // Валентність іону (від 1 до 7)
//    char charge;    // Заряд іону ('+' або '-')
    bool isReacted = false;

    Ion(char charge, int valency);
    // Метод для зміни заряду іону
    void setCharge(char newCharge);
    // Метод для зміни валентності іону
    void setValency(int newValency);


    void displayInfo() const;

    ~Ion();
//    Ion(const Ion& otherIon);
//    Ion(Ion&& otherIon) noexcept;
//    Ion& operator=(const Ion& other);
//
    char getCharge() const {
        return charge;
    }

    int getValency() const {
        return valency;
    }

    Ion();
};
#endif //MOVE_01022011_ION_H
