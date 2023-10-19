#include <iostream>
#include <limits>
#include <cmath>

//Натуральне число називається довершеним (досконалим), якщо воно дорівнює сумі всіх
//своїх дільників, за винятком самого себе. Дано натуральне число Н. Отримати всі довершені
//числа, що менші за Н.
int main() {
    double number, perfectNumber = 2;
    std::cout << "Hello, please enter number:" << std::endl;
    while (!(std::cin >> number) || number <= 0) {
        std::cout << "Error. Wrong number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    std::cout << "Your number is " << number << ".\nAll perfect numbers less then " << number << " is:\n";
    for (int i = 1; perfectNumber < number; i++) {
        perfectNumber = 1 + (((pow(2, i) - 2) * (pow(2, i) + 1)) / 2); // формула для генерації чисел
        if (i == 31 || i == 19 || i == 17 || i == 13 || i == 7 || i == 5 || i == 3 ||
            i == 2) { // Степені, при яких існують досконалі числа
            std::cout << " " << perfectNumber << std::endl;
        }
    }
    return 0;
}
