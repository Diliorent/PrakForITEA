#include <iostream>
#include "array"

//Національний банк (версія 2.0 :) випустить банкноти номіналом 3000, 1000, 500,
//200, 100, 50, 25, 10, 5 та 1.
//Ваше завдання — написати програму для банкоматів, яка має знайти мінімальну
//кількість банкнот для видачі будь-якої суми клієнтам.
//Майбутній міністр фінансів України попросив, щоб ваш код видав на екран
//значення і кількість всіх типів банкнот окремо для вказаної суми.
//Також врахуйте той факт, що банкомати Вінкор-ніксдорф можуть видавати за
//один раз не більше 40 банкнот.

int main() {
    int banknotesMax = 40; // Максимальна кількість банкнот (мінімум 13!!!)
//------Вхідні дані------
    int maxMoney, money, totalBanknotes = 0;
    std::array<int, 10> banknotes = {3000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    std::array<int, 10> banknotesCount{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    maxMoney = (banknotesMax - 12) * 3000;
//------Комунікація з користувачем------
    std::cout << "Hello and greetings from the National Bank!" << std::endl
              << "Enter the amount of money you want to cash out (maximum " << maxMoney / 1000 << "'" << maxMoney % 1000
              << maxMoney % 100 << maxMoney % 10 << " UAH)" << std::endl;
    while (!(std::cin >> money) || money < 0 || money > maxMoney) {
        std::cout << "Error: ";
        if (money > maxMoney) std::cout << "the amount entered is greater than the limit." << std::endl;
        else if (money < 0) std::cout << "you can't enter negative amount." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
//------Підрахунок банкнот------
    {
        bool iSaidStop = false;
        int i = 0;
        while (!iSaidStop) {
//            std::cout << money << std::endl;
            banknotesCount[i] = money / banknotes[i];
            money %= banknotes[i];
            i++;
//            std::cout << banknotesCount[i] << std::endl;
            if (money == 0) iSaidStop = true;
        }
    }
//------Вивід даних------
    std::cout << "Number of banknotes:" << std::endl;
    for (int k = 0; k < banknotesCount.size(); ++k) {
        if (banknotesCount[k] != 0) {
            std::cout << "\"" << banknotes[k] << "\" - ";
            std::cout << banknotesCount[k] << std::endl;
        }
    }
    for (int j: banknotesCount) // for (int j = 0; j < banknotesCount.size(); ++j)
    {
        totalBanknotes += j;
    }
    std::cout << "total banknotes: " << totalBanknotes << "." << std::endl;

    return 0;
}