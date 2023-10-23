#include <iostream>
#include "array"

//Є масив чисел :
//{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
//Це так звана послідовність Фібоначчі.
//Створіть новий масив який складатиметься із дійсних чисел обчислених за
//формулою фібоначчі[i+1] / фібоначчі[i]. Результ виведіть на екран.

int main() {
    std::array<int, 14> fibonacci = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
    std::array<int, 13> fibonacciSecond;
    std::cout << "Fibonacci sequence:" << std::endl << "[";
    for (int i = 0; i < fibonacci.size(); ++i) {
        std::cout << fibonacci[i] << " ";
    }
    std::cout << "]" << std::endl << "The resulting array:" << std::endl << "[";
    for (int i = 0; i < fibonacciSecond.size(); ++i) {
        fibonacciSecond[i] = fibonacci[i + 1] / fibonacci[1];
        std::cout << fibonacciSecond[i] << " ";
    }
    std::cout << "]" << std::endl;
    return 0;
}


