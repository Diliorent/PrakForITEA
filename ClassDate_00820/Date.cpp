//
// Created by User on 30.11.2023.
//

#include "Date.h"
void Date::getInfo()
{
    std::cout << day << "." << month << "." << year << std::endl;

}

Date::Date(unsigned int day, unsigned int month, unsigned int year)
{
    this->day   = day;
    this->month = month;
    this->year  = year;
    overlap();
}

Date::~Date()
{
//    std::cout << "destructed" << std::endl;
}

Date::Date() // дефолтний конструктор
{
    day   = 0;
    month = 0;
    year  = 0;
}
void Date::overlap() // Функція для перерахунку 30 днів в 1 місяць, та 12 міс в 1 рік
{
    {
        if( day > 30 ) {
            month += day / 30;
            if( month > 12 ) {
                year += month / 12;
                month %= 12;
            }
            day %= 30;
        }
        if( month > 12 ) {
            year += month / 12;
            month %= 12;
        }
    }
}
unsigned int Date::operator-(Date& secondDate) const // Перегрузка оператора "-"
{
    unsigned int res;
    res = abs((year - secondDate.year) * 12 * 30 + (month - secondDate.month) * 30 + (day - secondDate.day));
    return res;
}
Date Date::operator+(int days) // Перегрузка оператора "+"
{
    day += days;
    overlap();
    return {day, month, year};
}






