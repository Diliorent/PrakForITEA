//
// Created by User on 15.11.2023.
//
//1) унікальний ідентифікатор можна зробити за прикладом РНОКПП ;
//2) ім’я;
//3) прізвище;
//4) номер паспорта;
//5) дата народження;
//6) додаткові відомості;

#ifndef USPADKUVANNYADLYASTUDENTIV_006002_PERSON_H
#define USPADKUVANNYADLYASTUDENTIV_006002_PERSON_H

#include "string"
#include "array"
#include "iostream"

class Person {
protected:
    unsigned int uniqueIdentifier;      // 1) унікальний ідентифікатор можна зробити за прикладом РНОКПП ;
    std::string name;                   // 2) ім’я;
    std::string surname;                // 3) прізвище;
    std::string passportNumber;         // 4) номер паспорта;
    std::array<int, 3> dateOfBirth{};   // 5) дата народження;
    std::string additionalInformation;  // 6) додаткові відомості;
public:
    ///todo по хорошому, потрібно було щоб всі гетери повертали свій тип данних, але тут я спростив для спрощення перевірок
    void getUniqueIdentifier();

    void getName();

    void getSurname();

    void getPassportNumber();

    void getDateOfBirth();

    void getAdditionalInformation();

    void showAll();

    void setUniqueIdentifier(unsigned int uniqueIdentifier);

    void setName(std::string name);

    void setSurname(std::string surname);

    void setPassportNumber(std::string passportNumber);

    void setDateOfBirth(std::array<int, 3> dateOfBirth);

    void setAdditionalInformation(std::string additionalInformation);

    Person();
};


#endif //USPADKUVANNYADLYASTUDENTIV_006002_PERSON_H
