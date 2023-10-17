#include <iostream>

void AddZero(int time);

//Користувач, вводить час, виражений у секундах, що минули з початку доби.
//Треба відобразити поточний час у годинах, хвилинах і секундах. Розрахуйте,
//скільки годин, хвилин і секунд залишилося до півночі, врахувавши те, що могло
//пройти більше, ніж 0 діб. Якщо користувач увів від’ємне значення, то видати на
//екран повідомлення і не виконувати розрахунки.

int main() {
    std::cout << "Hello. I will tell you current time and time till midnight.\nEnter seconds from start of the day." << std::endl;
    static const int day = 24*60*60;  // кількість секунд в одній добі
    int innerSec, sec, min, hour, daysGone;
    char zero;
    std::cin >> innerSec;
    if (innerSec < 0)
    {
        std::cout << "You entered wrong number of seconds";
        return 0;
    }
    daysGone = innerSec / day;
    if (daysGone > 0)
        std::cout << "Days gone: " << daysGone << "." << std::endl;
    hour = innerSec / 3600 % 24;
    sec = innerSec % 3600;
    min = sec / 60;
    sec = sec % 60;
    if (hour < 10) zero = '0';
    else zero = '\0';
    std::cout << "Current time: " << zero << hour << " : ";
    if (min < 10) zero = '0';
    else zero = '\0';
    std::cout << zero << min << " : ";
    if (sec < 10) zero = '0';
    else zero = '\0';
    std::cout << zero << sec << "." << std::endl;
    //_________________Midnight part_______________
    innerSec = day - (innerSec % day);
    hour = innerSec / 3600 % 24;
    sec = innerSec % 3600;
    min = sec / 60;
    sec = sec % 60;
    std::cout << "Time till midnight: ";
    AddZero(hour);
    std::cout << " : ";
    AddZero(min);
    std::cout << " : ";
    AddZero(sec);
    std::cout << ".";
    return 0;
}

void AddZero(int time) // Додає до вивода числа в консоль "0", якщо число меньше 10
{
    char zero;
    if (time == 60)
        std::cout << "00";
    else
    {
        if (time < 10) zero = '0';
        else zero = '\0';
        std::cout << zero << time;
    }
}
