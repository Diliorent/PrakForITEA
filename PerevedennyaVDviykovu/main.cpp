#include <iostream>
#include <limits>

int main() {
    std::cout << "Hello, I will turn your number into binary system" << std::endl;
    int num, dva = 1;
    std::cin >> num;
    while (!(std::cin >> num) || num < 0) {
        std::cout << "Error: Wrong number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    std::cout << "Your number \"" << num << "\" is: \"";

    while (num > dva)
    {
        dva *= 2;
//        std::cout << dva << std::endl;
    }

    for (int i = dva; i >= 1; i = i / 2) {
        if (num >= i) {
            std::cout << 1;
            num -= i;
        } else{
            std::cout << 0;
        }
    }
    std::cout << "\" in binary system.";
    return 0;
}
