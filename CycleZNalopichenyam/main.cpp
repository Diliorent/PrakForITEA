#include <iostream>
#include <limits>

//У перший день черепаха проповзла 1.5 м. Кожен наступний день вона проповзала на 20 см більше за
//попередній. Визначити загальну відстань, що проповзла черепаха за N днів. Число N треба запропонувати
//ввести користувачу з клавіатури.
int main() {
    float initSpeedPerDay = 1.5, distance = 0, totalDist = 0;
    int days;
    std::cout << "Hello, please enter number of days the turtle's been walking:" << std::endl;
    while (!(std::cin >> days) || days < 0) {
        std::cout << "Error: Wrong number of days.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    if (days == 0) {//
        std::cout << "The turtle decided not to walk.\nMetres walked: 0.";
    } else
        for (int i = 0; i < days; ++i) {
            distance += initSpeedPerDay + 0.2 * i;
            totalDist += distance;
            std::cout << "At the day " << i + 1 << ", the turtle walked: " << distance << " meters" << std::endl;
        }
    std::cout << "Total distance walked by the turtle: " << totalDist;
    return 0;
}
