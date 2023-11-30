//
// Created by User on 30.11.2023.
//

#ifndef CLASSDATE_00820_DATE_H
#define CLASSDATE_00820_DATE_H
#include <iostream>
class Date{
private:
    void overlap();
    unsigned int day = 0, month = 0, year = 0;
public:
    Date();
    Date(    unsigned int dayC, unsigned int monthC, unsigned int yearC);
    ~Date();
    void getInfo();
    unsigned int operator - (Date &secondDate) const;
    Date operator + (int days);
};

#endif //CLASSDATE_00820_DATE_H
