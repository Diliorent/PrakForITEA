//
// Created by User on 19.01.2024.
//

#ifndef SPISOKSTUDENTIV_010451_STUDENT_H
#define SPISOKSTUDENTIV_010451_STUDENT_H

#include <string>
#include <QString>
class Student{
private:
    QString name;
    QString dateOfBirth;
    QString telephoneNumber;
    QString address;
    QString group;
public:
    QString getName();
    QString getDate();
    QString getTelephone();
    QString getAddress();
    QString getGroup();
    void setName(QString name);
    void setDate(QString date);
    void setTelephone(QString teleph);
    void setAddress(QString address);
    void setGroup(QString group);

};

#endif //SPISOKSTUDENTIV_010451_STUDENT_H
