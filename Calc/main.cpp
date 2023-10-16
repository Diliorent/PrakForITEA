#include <iostream>
int main() {
    std::cout << "MENU:\n0 - Exit\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - "
                 "Division\n5 - Remainder\nChoose!" << std::endl;
    int action;
    float A, B, C;
//    char sure;
    std::cin >> action;

    if (action == 0)
        return 0;

    if (action == 1)
    {
//        std::cout << "You chose Addition. Are you sure you want to add? (y/n)";
//        std::cin >> sure;
//        if (sure == n)
        std::cout << "You chose Addition.\nEnter A: " << std::endl;
        std::cin >> A;
        std::cout << "Enter B: " << std::endl;
        std::cin >> B;
        C = A + B;
        std::cout << "C = " << C;
    }

    if (action == 2)
    {
        std::cout << "You chose Subtraction.\nEnter A: " << std::endl;
        std::cin >> A;
        std::cout << "Enter B: " << std::endl;
        std::cin >> B;
        C = A - B;
        std::cout << "C = " << C;
    }

    if (action == 3)
    {
        std::cout << "You chose Multiplication.\nEnter A: " << std::endl;
        std::cin >> A;
        std::cout << "Enter B: " << std::endl;
        std::cin >> B;
        C = A * B;
        std::cout << "C = " << C;
    }

    if (action == 4)
    {
        std::cout << "You chose Division. (Remember! DO NOT DIVIDE BY 0!!!)\nEnter A: " << std::endl;
        std::cin >> A;
        std::cout << "Enter B: " << std::endl;
        std::cin >> B;
        if (B == 0)
        {
            std::cout << "Ah. I warned you. DO NOT DIVIDE BY 0!!!\nTry again";
            std::cin >> B;
        }
        C = A / B;
        std::cout << "C = " << C;
    }

    if (action == 5)
    {
        int intA, intB, intC;
        std::cout << "You chose Remainder.\nEnter A: " << std::endl;
        std::cin >> intA;
        std::cout << "Enter B: " << std::endl;
        std::cin >> intB;
        intC = intA % intB;
        std::cout << "C = " << intC;
    }

    return 0;
}
