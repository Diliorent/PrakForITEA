#include <iostream>
#include <iomanip>
 // Вести з клавіатури три опори R1, R2, R3. Обчислити значення опору R0 за формулою:
// R0 = 1/(1/R1 + 1/R2 + 1/R3).
 int main() {
    std::cout << "Hello, equation is: R0 = 1/(1/R1 + 1/R2 + 1/R3)\nEnter R1:" << std::endl;
    float R0, R1, R2, R3;
    std::cin >> R1;
    std::cout << "R1 is " << R1 << "\n Now enter R2:" << std::endl;
    std::cin >> R2;
    std::cout << "R2 is " << R1 << "\n Now enter R3:" << std::endl;
    std::cin >> R3;
    std::cout << "The equation is: R0 = (1/" << R1 << " + 1/" << R2 << " + 1/" <<
    R3 <<")" << std::endl;
    R0 = 1/(1/R1 + 1/R2 + 1/R3);

    std::cout << "R0 = " << std::setprecision(3) << R0;

    return 0;
}
