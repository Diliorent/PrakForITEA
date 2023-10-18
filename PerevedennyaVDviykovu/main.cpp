#include <iostream>

int main() {
//    std::cout << "Hello, enter number between \"0\" and \"255\": " << std::endl;
    std::cout << R"(Hello, enter number between "0" and "255": )" << std::endl;
    int num;
    std::cin >> num;
    std::cout << "Your number \"" << num << "\", is \"";

    for (int i = 128; i >= 1; i = i / 2) {
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
