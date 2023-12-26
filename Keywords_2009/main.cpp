#include <iostream>
#include <cmath>

// Відомі сталі
#define PI 3.14159
#define EULER_NUMBER 2.71828
#define G_EQUATOR 9.7805
#define G_POLE 9.8322

// Макровизначення для квадрату числа
#define SQUARE(x) ((x) * (x))

// Макровизначення для обчислення модуля числа
#define ABSOLUTE_VALUE(x) ((x) < 0 ? -(x) : (x))

double massOnEquator (const double &mass );
double massOnPole (const double &mass );

int main() {
    double number = -4.5, oneKilo = 1;

    // Використання відомих сталих
    std::cout << "Pi: " << PI << std::endl;
    std::cout << "Number e: " << EULER_NUMBER << std::endl;

    // Використання макровизначення для квадрату числа
    double square_number = SQUARE(number);
    std::cout << "Square of number " << number << " equal " << square_number << std::endl;

    // Використання макровизначення для обчислення модуля числа
    double absolute_number = ABSOLUTE_VALUE(number);
    std::cout << "ABS of number " << number << " equal " << absolute_number << std::endl;

    std::cout << "Weight of 1 kilo on equator: " << massOnEquator(oneKilo)<< " [newtons]" << std::endl;
    std::cout << "Weight of 1 kilo on pole: " << massOnPole(oneKilo) << " [newtons]" << std::endl;



    return 0;
}

double massOnEquator (const double &mass )
{
    return mass * G_EQUATOR;
}

double massOnPole (const double &mass )
{
    return mass * G_POLE;
}