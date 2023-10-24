#include <iostream>
#include "limits"
#include "array"
#include "cmath"

bool isSimple(int number);

int main() {
    std::cout << "Hello, I will say you if your number is simple!" << std::endl << "Enter your number after 1: " << std::endl;
    int num;

    while (!(std::cin >> num) || num < 2) {
        std::cout << "Error: ";
        if (num < 2) std::cout << "your number is smaller than 2." << std::endl;
        else std::cout << "not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    if (isSimple(num))
    std::cout << "Your number is simple." << std::endl;
    else
        std::cout << "Your number is not simple." << std::endl;
    return 0;
}

bool isSimple(int number) {
    std::array<int, 12> firstSimpleNumbers = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    int n = 1, numberAfter41 = 41;
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
