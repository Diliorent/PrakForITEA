//
// Created by User on 17.11.2023.
//

#include "Student.h"

void Student::getUniversity() {
    std::cout << "University: " << university << std::endl;
}

void Student::getSpeciality() {
    std::cout << "Speciality: " << speciality << std::endl;
}

void Student::getGroup() {
    std::cout << "Group: " << group << std::endl;
}

void Student::setUniversity(std::string university) {
    this->university = university;
}

void Student::setSpeciality(std::string speciality) {
    this->speciality = speciality;
}

void Student::setGroup(std::string group) {
    this->group = group;
}

void Student::showAll() {
    Person::showAll();
    getUniversity();
    getSpeciality();
    getGroup();
    std::cout << "_______________________________" << std::endl;
}

Student::Student() {
//    uniqueIdentifier = 1234567890;
//    name = "Ivan";
//    surname = "Ivanko";
//    passportNumber = "000012345";
//    dateOfBirth = {31, 12, 1899};
//    additionalInformation = "Additional information";
    university = "unknown";
    speciality = "unknown";
    group = "unknown";

}

Student::Student(unsigned int uniqueIdentifier, std::string name, std::string surname, std::string passportNumber,
                 std::array<int, 3> dateOfBirth, std::string additionalInformation, std::string university,
                 std::string speciality, std::string group) {
    this->uniqueIdentifier = uniqueIdentifier;
    this->name = name;
    this->surname = surname;
    this->passportNumber = passportNumber;
    this->dateOfBirth = dateOfBirth;
    this->additionalInformation = additionalInformation;
    this->university = university;
    this->speciality = speciality;
    this->group = group;

}
