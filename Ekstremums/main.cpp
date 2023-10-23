#include <iostream>
#include "array"
#include "cmath"
#include <ctime>

//Створіть масив цілих чисел. А також дві змінні:
//int найбільше=масив[0];
//int найменше=масив[0];
//Використайте їх, щоб знайти найменший і найбільший елемент масива. Вхідний
//масив, його найменше і найбільше значення видайте на екран.

int main() {
    //______Генерація масива______
    srand(time(nullptr));
    static const int size = 100; // static const, для того щоб не ругався масив
    std::array<int, size> A;
    std::cout << "A:\n[";
    for (int i = 0; i < size; ++i) {
        if (i % 10 == 0 && i != 0)
            std::cout << std::endl;
        A[i] = rand() % size - size / 2;
        std::cout << A[i] << "\t";
    }
    std::cout << "]" << std::endl;
    //______Знаходження екстремумів______
    //todo додати, коли є декілька мін і мах
    int min = size / 2 + 1, max = -size / 2 - 1, minNum, maxNum;
    for (int j = 0; j < size; ++j) {
        if (min > A[j]) {
            min = A[j];
            minNum = j;
        }
        if (max < A[j]) {
            max = A[j];
            maxNum = j;
        }
    }
    std::cout << "Minimum in A is element number " << minNum << " = " << min << std::endl;
    std::cout << "Maximum in A is element number " << maxNum << " = " << max << std::endl;

    return 0;
}
