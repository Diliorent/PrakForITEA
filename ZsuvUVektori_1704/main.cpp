#include <iostream>
#include "vector"
#include "ctime"

// Дано вектор A, що складається з N цілих чисел. Зсув означає, що кожен елемент зміщується вправо на один індекс,
// а останній елемент переміщується на перше місце. Наприклад, зсув вектора
//A = [3, 8, 9, 0, 7, 6, 8, 9] на 1 дорівнює [9, 3, 8, 9, 0, 7, 6, 8] (елементи зміщуються вправо на один індекс,
// а останній переміщується на перше місце).
//Завдання: написати функцію:
//vector<int>& solution(vector<int> &A, int K);
//що K разів зсуватиме вектор A (тобто кожен елемент A буде зміщений вправо K разів) і повертатиме значення
// зсунутого вектора. Тобто функція має приймати як параметр адресу вектора і розмір зміщення, а повертати
// оновлений вектор зі зсувом за допомогою return. Вважаємо, що:
//N і K — цілі числа в межах [0..100];
//кожен елемент вектора A є цілим числом в межах [-100..100].
std::vector<int> &solution(std::vector<int> &A, int K);
void showVector(std::vector<int> &A);

int main() {
    int size, zsuv;
    const int maxNum = 100;
    std::cout << "Enter size of vector\n";
    while (!(std::cin >> size) || size < 0 || size > maxNum) {
        std::cout << "Error: ";
        if (size > maxNum) std::cout << "the number entered is greater than the limit." << std::endl;
        else if (size < 0) std::cout << "you can't enter negative number." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    std::cout << "Enter shift of vector\n";
    while (!(std::cin >> zsuv) || zsuv < 0 || zsuv > maxNum) {
        std::cout << "Error: ";
        if (zsuv > maxNum) std::cout << "the number entered is greater than the limit." << std::endl;
        else if (zsuv < 0) std::cout << "you can't enter negative number." << std::endl;
        else std::cout << "Not a number." << std::endl;
        std::cout << "Try again:" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Видалення символів, для
        // уникнення нескінченного циклу
    }
    const int sizeOfVector = size, K = zsuv;
//___________________Creation of vector_______________
    std::vector<int> A;
    int temp;
    std::srand(time(nullptr));
    for (int i = 0; i < sizeOfVector; ++i) {
        A.push_back(std::rand() % 200 - 100);
    }
    std::cout << "Vector A: ";
    showVector(A);
//_____________________________________________________
    std::cout << "Vector A, but shifted: "<< std::endl;
    showVector(solution(A,K));
    return 0;
}


std::vector<int> &solution(std::vector<int> &A, int K) {
    int temp;
    for (int i = 0; i < K; ++i) {
        temp = A[i];
        A.erase(A.begin());
        A.push_back(temp);
    }
    return A;
}

void showVector(std::vector<int> &A)
{
    for (int i = 0; i < A.size(); ++i) {
        if (i % 10 == 0) std::cout << std::endl;
        std::cout << A[i] << "\t";
    }
    std::cout << std::endl;
}

