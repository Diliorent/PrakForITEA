#include <iostream>
#include "Date.h"
//Створіть клас Дата, який буде містити інформацію про дату (день, місяць, рік).
//Визначте оператор різниці між двома датами (результат — це кількість днів між
//датами), а також оператор збільшення дати на певну кількість днів.

int main()
{
    Date date_1{29,11,2023};
    std::cout << "date_1: ";
    date_1.getInfo();
    Date date_2{27,12,2023};
    std::cout << "date_2: ";
    date_2.getInfo();
    std::cout << "date_1 - date_2 = " << date_1 - date_2 << " [days]"<< std::endl;
    std::cout << "date_2 + 65 days is: ";
    date_2 + 65;
    date_2.getInfo();


    return 0;
}
