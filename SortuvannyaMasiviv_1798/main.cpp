#include <iostream>
#include "array"
#include <ctime>
//Створіть масив символів, де буде від 25 до 33 букв. Впорядкуйте всі непарні елементи за абеткою.
// Завдання виконати за допомогою вказівників.

const int sizeOfArray = 26;

void showArray(std::array<char, sizeOfArray> &array2Show);

void replaceOdds(std::array<char, sizeOfArray> *array2Odd);

int main() {
//    const int sizeOfArray = 25;
    std::cout << "Hello. I will create an array of characters with 25 to 33 letters and sort "
                 "all odd elements in alphabetical order. "
              << std::endl;
    std::srand(time(nullptr));

    std::array<char, sizeOfArray> arrayOfChar;
    for (int i = 0; i < sizeOfArray; ++i) {
        arrayOfChar[i] = std::rand() % sizeOfArray + 97;
    }

    //Для перевірки
//    arrayOfChar = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm',
//                   'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};


    std::cout << "Init array:" << std::endl;
    showArray(arrayOfChar);
    std::cout << "Replaced array: " << std::endl;
    replaceOdds(&arrayOfChar);
    showArray(arrayOfChar);
    return 0;
}

void showArray(std::array<char, sizeOfArray> &array2Show) //Зроблено через адресу
{
    std::cout << "[";
    for (int j = 0; j < sizeOfArray; ++j) {
//        array2Show[j] = 100;
        std::cout << array2Show[j] << " ";
    }
    std::cout << "]" << std::endl;
}

void replaceOdds(std::array<char, sizeOfArray> *array2Odd) // Зроблено через вказівник
{
    for (int i = 0; i < sizeOfArray - 1; i += 2) {
        for (int j = 0; j < sizeOfArray - i - 2; j += 2) { // j = 1, для парних
            if ((*array2Odd)[j] > (*array2Odd)[j + 2]) {
                // Обмін елементів
                char temp = (*array2Odd)[j];
                (*array2Odd)[j] = (*array2Odd)[j + 2];
                (*array2Odd)[j + 2] = temp;
//                showArray(*array2Odd);
            }
        }
    }
}

