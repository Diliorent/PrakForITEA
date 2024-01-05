#include <iostream>
#include <vector>
#include "Ion.h"
#include "IonPointer.h"

//Напишіть клас із методами, який описуватиме іони. Кожен іон
//характеризується зарядом “+” або ”-”;
//валентністю: ціле значення від 1 до 7.
//В цьому класі передбачте явно:
//Конструктор і деструктор;
//Конструктор переміщення;
//Перевантажений оператор =
//Створіть масив таких іонів: потім визначте перелік іонів, які
//вступлять в реакцію (в реакцію вступають іони з протилежними
//знаками і однаковою валентністю) і перелік, які в реакцію не
//вступлять. Іони, які вступили в реакцію перемістіть за допомогою
//конструктора переміщення.

IonPointer generateIon(char charge, int valency)
{
    IonPointer ion(new Ion(charge, valency));
    return ion;
}

int main()
{
    std::vector<IonPointer> reactingIons;
    std::vector<IonPointer> nonReactingIons;
    {
        std::vector<IonPointer> ions(6);
        ions[0] = generateIon('-', 7); // Вступить в реакцію
        ions[1] = generateIon('+', 5); // Вступить в реакцію
        ions[2] = generateIon('-', 3); // Не вступить в реакцію
        ions[3] = generateIon('-', 5); // Вступить в реакцію
        ions[4] = generateIon('+', 7); // Вступить в реакцію
        ions[5] = generateIon('-', 1); // Не вступить в реакцію


        for ( int ionFirst = 0; ionFirst < ions.size() - 1; ++ionFirst ) {
//        std::cout << ions[ionFirst]->getValency() << std::endl;

            for ( int ionSecond = ionFirst + 1; ionSecond < ions.size(); ++ionSecond ) {
                if( ions[ionSecond]->isReacted ) {
//                    std::cout << "This ion reacted, continue" << std::endl;
                    continue;
                }
                if( ions[ionFirst]->getValency() == ions[ionSecond]->getValency()) {
                    if( ions[ionFirst]->getCharge() != ions[ionSecond]->getCharge()) {
                        ions[ionFirst]->isReacted  = true;
                        ions[ionSecond]->isReacted = true;
                        break;
                    }
                }
            }
        }
        std::cout << "Start moving ions to reacting and nonReacting vectors" << std::endl;
        for ( auto& otherIon: ions ) {
            if( otherIon->isReacted ) reactingIons.push_back(std::move(otherIon));
            else nonReactingIons.push_back(std::move(otherIon));
//            std::cout << "second for\n";
        }
//        std::cout << "Ions size: " << ions.size() << std::endl;
    }
    std::cout << "reactingIons size: " << reactingIons.size() << std::endl;
    std::cout << "nonReactingIons size: " << nonReactingIons.size() << std::endl;
    return 0;
}
