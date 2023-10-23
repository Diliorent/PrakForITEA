#include <iostream>
#include <ctime>

void disp(int pInt[20], int size);

/* Заповнити два цілочислених масиви випадковим чином A[10] i B[10]. Сформувати третій масив
 * X[20], елементи якого будуть взяті з А і В в порядку:
 * чергування (a0, b0, a1, b1,...,a9, b9); Вивести масив Х на екран.
 */
int main() {
    int A[10], B[10], X[20];
    srand(time(nullptr));
    std::cout << "Hello, World!" << std::endl;

    for (int i = 0; i < 10; ++i) {
        A[i] = rand() % 10;
        B[i] = rand() % 10;
    }

    for (int j = 0; j < 10; j += 1) {
        X[j + j] = A[j];
        X[j + j + 1] = B[j];
    }
    std::cout << "A: ";
    disp(A, 10);
    std::cout << "B: ";
    disp(B, 10);
    std::cout << "X: ";
    disp(X, 20);
    return 0;
}

void disp(int *arr, int size) {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}



