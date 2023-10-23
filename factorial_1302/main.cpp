#include <iostream>
#include "limits"

unsigned long factorial(int n);

int main() {
    std::cout << "Hello. This program will calculate the integral! Enter your number: " << std::endl;
int number;
    while (!(std::cin >> number) || number < 0) {
        std::cout << "Error: ";
        if (number < 0) std::cout << "you can't enter negative amount." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }

    std::cout << "factorial of " << number << " = " << factorial(number) << "." << std::endl;

    return 0;
}

unsigned long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
