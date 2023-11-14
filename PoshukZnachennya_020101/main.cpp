#include <iostream>
#include "vector"
#include "ctime"

// Створити вектор, у якому буде від 1 до 366 елементів. Вектор заповнити значеннями 0 і 1. Знайти позицію
// першого елемента зліва, який дорівнює 1. Вивести її на екран.

void showVector(std::vector<int> &A);

int main() {
    std::srand(time(nullptr));
    int size = std::rand() % 366;
    std::cout << "Size of vector: " << size << " elements";
    std::vector<int> A;
    A.resize(size);
//    std::cout << A.size();
    for (int i = 0; i < A.size(); ++i) {
        A[i] = std::rand() % 2;
    }
    showVector(A);
    bool founded_1 = false;
    int o = 0;
    while (!founded_1) {
        if (A[o] == 1)
            founded_1 = true;
        o++;
    }
    std::cout << "\"1\" founded in position of vector: " << o - 1;
    return 0;
}

void showVector(std::vector<int> &A) {
    for (int i = 0; i < A.size(); ++i) {
        if (i % 10 == 0) std::cout << std::endl;
        std::cout << A[i] << "\t";
    }
    std::cout << std::endl;
}

