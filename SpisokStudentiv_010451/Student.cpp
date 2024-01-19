//
// Created by User on 19.01.2024.
//

#include "Student.h"

#include <utility>
QString Student::getName()
{
    return name;
}
QString Student::getDate()
{
    return dateOfBirth;
}
QString Student::getTelephone()
{
    return telephoneNumber;
}
QString Student::getAddress()
{
    return address;
}
QString Student::getGroup()
{
    return group;
}
void Student::setName(QString name)
{
    this->name = std::move(name);

}
void Student::setDate(QString date)
{
    this->dateOfBirth = std::move(date);
}
void Student::setTelephone(QString teleph)
{
    this->telephoneNumber = std::move(teleph);
}
void Student::setAddress(QString address)
{
    this->address = std::move(address);
}
void Student::setGroup(QString group)
{
    this->group = std::move(group);
}
