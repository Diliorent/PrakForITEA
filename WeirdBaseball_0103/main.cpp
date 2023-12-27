#include <iostream>
#include <sstream>
#include <vector>
#include <numeric>

template<typename T>

// Функція для відображення вектора будь-якого типу
void showVector(const std::vector<T>& vec)
{
    std::cout << "[";
    for ( const auto& elem: vec ) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}
int main()
{
    // ------Запит користувача ввести дані та пояснення до програми------

    std::string input;
    std::cout << "Welcome to Weird baseball v1.0" << std::endl;
    std::cout << "You can enter maximum 1000 elements" << std::endl
              << "\tNumbers should be in range -333...333" << std::endl
              << "\t\"m\" to multiply number last number" << std::endl
              << "\t\"d\" to delete last number )" << std::endl
              << "\t\"+\" to add two last numbers )" << std::endl
              << "To perform the \"+\" operation, there must be at least two previous numbers.\n"
                 "For \"d\" and \"m\", at least 1 entry." << std::endl;
    std::cout << "Enter a string of items separated by spaces: ";
    std::getline(std::cin, input);

    // ------Розбиття рядка на окремі елементи та перевірка обмежень на кількість елементів------

    std::istringstream       iss(input);
    std::vector<std::string> elements;
    std::string element;
    while ( iss >> element ) {
        elements.push_back(element);
        if( elements.size() > 1000 ) {
            std::cout << "Entered more then 1000 elements";
            return 0;
        }
    }

    // ------Фільтрація введених елементів------

    std::vector<std::string> filteredVector;
    unsigned int             numberCounter = 0;
    std::cout << "Filtered vector: ";
    for ( const auto& elem: elements ) {
        if( elem == "+" ) {
            if( numberCounter >= 2 ) {
                numberCounter++;
                filteredVector.push_back(elem);
            }
        }
        else if( elem == "m" ) {
            if( numberCounter > 0 ) {
                numberCounter++;
                filteredVector.push_back(elem);
            }
        }
        else if( elem == "d" ) {
            if( numberCounter > 0 ) {
                numberCounter--;
                filteredVector.push_back(elem);
            }
        }
        else {
            try {
                if( stoi(elem) >= -333 && stoi(elem) <= 333 ) {
                    numberCounter++;
                    filteredVector.push_back(elem);
                }
            }
            catch (const std::exception& e) {
//            std::cout << "Conversion error: " << e.what() << std::endl;
            }
        }

    }

    // ------Показ фільтрованого вектора------

    showVector(filteredVector);

    // ------Виконання обчислень на фільтрованому векторі------

    std::vector<double> resultVector;
    for ( const auto& elem: filteredVector ) {
        if( elem == "+" ) {
            resultVector.push_back
                    (
                            resultVector[resultVector.size() - 1] +
                            resultVector[resultVector.size() - 2]);
        }
        else if( elem == "m" ) {
//                std::cout << "m";
            resultVector.push_back(resultVector[resultVector.size() - 1] * 2);
        }
        else if( elem == "d" ) {
//                std::cout << "d";
            resultVector.pop_back();
            resultVector.shrink_to_fit();
        }
        else resultVector.push_back(stoi(elem));
    }

    // ------Обчислення суми елементів у векторі та виведення результату------

    std::cout << "Result vector: ";
    showVector(resultVector);
    double totalSum = std::accumulate(resultVector.begin(), resultVector.end(), 0);
    std::cout << "The sum : " << totalSum << std::endl;

    return 0;
}


