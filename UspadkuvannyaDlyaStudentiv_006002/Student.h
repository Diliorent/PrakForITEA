//
// Created by User on 17.11.2023.
//

#ifndef USPADKUVANNYADLYASTUDENTIV_006002_STUDENT_H
#define USPADKUVANNYADLYASTUDENTIV_006002_STUDENT_H
//7) навчальний заклад
//8) спеціальність
//9) група.

#include "Person.h"

class Student : Person {
private:
    std::string university;
    std::string speciality;
    std::string group;
public:
    void getUniversity();

    void getSpeciality();

    void getGroup();

    void setUniversity(std::string university);

    void setSpeciality(std::string speciality);

    void setGroup(std::string group);

    void showAll() override;

    Student();

    Student(unsigned int uniqueIdentifier,
            std::string name,
            std::string surname,
            std::string passportNumber,
            std::array<int, 3> dateOfBirth,
            std::string additionalInformation,
            std::string university,
            std::string speciality,
            std::string group);
};


#endif //USPADKUVANNYADLYASTUDENTIV_006002_STUDENT_H
