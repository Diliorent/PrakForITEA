#include <iostream>
#include "limits"
#include <iomanip>

double income(const float *sumOfDeposit, const float *depositDuration, const float *interestRate, const float *tax);

int main() {
    std::cout << "Hello. This program will tell your profit of deposit. Enter the deposit amount in range "
                 "(1 000$ to 2 000 000$ ): " << std::endl;
    float sumOfDeposit;
    while (!(std::cin >> sumOfDeposit) || sumOfDeposit < 1000 || sumOfDeposit > 2000000) {
        std::cout << "Error: ";
        if (sumOfDeposit < 1000) std::cout << "you can't enter value below 1 000." << std::endl;
        else if (sumOfDeposit > 2000000) std::cout << "you can't enter value higher then 2 000 000." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Enter the deposit duration in range (1 to 15 months ): " << std::endl;
    float depositDuration;
    while (!(std::cin >> depositDuration) || depositDuration < 1 || depositDuration > 15) {
        std::cout << "Error: ";
        if (depositDuration < 1) std::cout << "you can't enter value below 1 month." << std::endl;
        else if (depositDuration > 15) std::cout << "you can't enter value higher then 15 months." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Enter the your interest rate in range (9% to 25% ): " << std::endl;
    float interestRate;
    while (!(std::cin >> interestRate) || interestRate < 9 || interestRate > 25) {
        std::cout << "Error: ";
        if (interestRate < 9) std::cout << "you can't enter value below 9%." << std::endl;
        else if (interestRate > 25) std::cout << "you can't enter value higher then 25%." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Enter the your tax in range (0.7 to 1, 0 to default 0.805): " << std::endl;
    float tax;
    while (!(std::cin >> tax) || tax < 0.7 || tax > 1) {
        if (tax == 0) {
            tax = 0.805;
            break;
        }
        std::cout << "Error: ";
        if (tax < 0.7) std::cout << "you can't enter value below 0.7." << std::endl;
        else if (tax > 1) std::cout << "you can't enter value higher then 1." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Your profit is: " << std::fixed << std::setprecision(1)
              << income(&sumOfDeposit, &depositDuration, &interestRate, &tax) << "$" << std::endl;


    return 0;
}

double income(const float *sumOfDeposit, const float *depositDuration, const float *interestRate, const float *tax) {
    double income;
    income = *sumOfDeposit * *depositDuration / 100 * *interestRate / 12 * *tax;
    return income;

}