//
// Created by User on 19.12.2023.
//

#ifndef LAMBDA_MAX_01042701_STUDENT_H
#define LAMBDA_MAX_01042701_STUDENT_H

#include <string>
class Student{
public:
    float       marks;
    std::string name;
    std::string surname;

    Student();
    Student(std::string name, std::string surname, float marks);
    ~Student();
    std::string getName();
    std::string getSurname();

    float getMark();
};

#endif //LAMBDA_MAX_01042701_STUDENT_H
