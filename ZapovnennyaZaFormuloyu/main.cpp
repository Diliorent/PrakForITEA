#include <iostream>
#include "array"
#include "cmath"

//Підключіть бібліотеку математика. Створіть з двадцяти п’яти елементів.
//Задайте з клавіатури ціле число. Якщо воно менше 25, то заповніть створений
//масив значеннями, обчисленими за формулою масив[i] = степінь(2,i), і виведіть
//його на екран; інакше видайте повідомлення, що введена кількість перевищує
//допустимий розмір масива.
int main() {
    std::cout
            << "Hello, enter a number that is less than 25. I will create an array with this size and fill it with 2 x elementNumber"
            << std::endl;

    std::array<int, 25> mas;
    int num;
    while (!(std::cin >> num) || num <= 0) {
        std::cout << "Error: Wrong number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    if (num > 25) {
        std::cout << "The entered amount exceeds the allowable size of the array.";
        return 0;
    }
    std::cout << "Array: [ ";
    for (int i = 0; i < num; ++i) {
        mas[i] = pow(2, i);
        std::cout << mas[i] << " ";
    }
    std::cout << "]" << std::endl;
    return 0;
}
