#include <iostream>
#include "limits"
#include "array"
#include "cmath"

bool isASimple(int number);

int main() {
    std::cout << "Hello, I will say you if your number is simple!" << std::endl << "Enter your number: " << std::endl;
    int num;

    while (!(std::cin >> num) || num < 1) {
        std::cout << "Error: ";
        if (num < 0) std::cout << "you can't enter negative amount." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    std::cout << isASimple(num);
    return 0;
}

bool isASimple(int number) {
    std::array<int, 12> firstSimpleNumbers = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    int i = 0, n = 1, numberAfter41 = 41;
    bool yes = false;
    for (int firstSimpleNumber: firstSimpleNumbers) {
        yes = number == firstSimpleNumber;
        if (yes) return true;
    }
    while (numberAfter41 < number) {
//      pow(n,2)-n+41  // формула Эйлера. Окрім n = 41. На жаль не точна формула.
        numberAfter41 = pow(n, 2) - n + 41;
        n++;
//        std::cout << "numberAfter41 = " << numberAfter41 << ", n =" << n << std::endl;
        if (numberAfter41 == number) return true;
    }
    return false;

}