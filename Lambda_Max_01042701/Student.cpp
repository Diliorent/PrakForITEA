//
// Created by User on 19.12.2023.
//

#include "Student.h"

#include <utility>
std::string Student::getName()
{
    return name;
}
Student::Student()
{
    name    = "Unnamed";
    surname = "Unsurnamed";
    marks   = 0;
}
Student::Student(std::string name, std::string surname, float marks)
{
    this->name    = std::move(name);
    this->surname = std::move(surname);
    this->marks   = marks;
}
std::string Student::getSurname()
{
    return surname;
}
float Student::getMark()
{
    return marks;
}
Student::~Student()
= default;
