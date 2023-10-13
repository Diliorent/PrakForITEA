#include <iostream>

int main() {
    std::cout << "Enter you hryvnias" << std::endl;
    int hryvnias, kopyikis;
    std::cin >> hryvnias;
    std::cout << "Good\nNow enter your kopiykis\n";
    std::cin >> kopyikis;
    std::cout << "You have " << hryvnias+kopyikis/100 << " hryvnias, and " << kopyikis%100 << " kopiykis.";
    return 0;
}
