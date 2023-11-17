//
// Created by User on 15.11.2023.
//

#include "Person.h"

void Person::getUniqueIdentifier() {
    std::cout << "Unique identifier: " << uniqueIdentifier << std::endl;
}

void Person::getName() {
    std::cout << "Name: " << name << std::endl;
}

void Person::getSurname() {
    std::cout << "Surname: " << surname << std::endl;
}

void Person::getPassportNumber() {
    std::cout << "Passport number: " << passportNumber << std::endl;
}

void Person::getDateOfBirth() {
    std::cout << "Date of birth: " << dateOfBirth[0] << "." << dateOfBirth[1] << "." << dateOfBirth[2] << std::endl;
}

void Person::getAdditionalInformation() {
    if (additionalInformation != "") {
        std::cout << "Additional  information: " << additionalInformation << std::endl;
    }
}

void Person::setUniqueIdentifier(unsigned int uniqueIdentifier) {
    this->uniqueIdentifier = uniqueIdentifier;
}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::setSurname(std::string surname) {
    this->surname = surname;
}

void Person::setPassportNumber(std::string passportNumber) {
    this->passportNumber = passportNumber;
}

void Person::setDateOfBirth(std::array<int, 3> dateOfBirth) {
    this->dateOfBirth = dateOfBirth;
}

void Person::setAdditionalInformation(std::string additionalInformation) {
    this->additionalInformation = additionalInformation;
}

Person::Person() {
//    std::cout << "Constructor constructed" << std::endl;
    uniqueIdentifier = 1234567890;
    name = "Ivan";
    surname = "Ivanko";
    passportNumber = "000012345";
    dateOfBirth = {31, 12, 1899};
    additionalInformation = "";
}
//
//Person::Person(unsigned int uniqueIdentifier, std::string name, std::string surname, std::string passportNumber,
//               std::array<int, 3> (*dateOfBirth)(), std::string additionalInformation) {
//    this->uniqueIdentifier = uniqueIdentifier;
//    this->name = name;
//    this->surname = surname;
//    this->passportNumber = passportNumber;
//    this->dateOfBirth = dateOfBirth();
//    this->additionalInformation = additionalInformation;
//
//}

void Person::showAll() {
    getUniqueIdentifier();
    getName();
    getSurname();
    getPassportNumber();
    getDateOfBirth();
    getAdditionalInformation();
}

Person::Person(unsigned int uniqueIdentifier, std::string name, std::string surname, std::string passportNumber,
               std::array<int, 3> dateOfBirth, std::string additionalInformation) {
    this->uniqueIdentifier = uniqueIdentifier;
    this->name = name;
    this->surname = surname;
    this->passportNumber = passportNumber;
    this->dateOfBirth = dateOfBirth;
    this->additionalInformation = additionalInformation;
}


