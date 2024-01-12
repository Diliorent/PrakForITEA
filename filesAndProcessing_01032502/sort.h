//
// Created by User on 12.01.2024.
//

#ifndef FILESANDPROCESSING_01032502_SORT_H
#define FILESANDPROCESSING_01032502_SORT_H

#include <iostream>
#include <vector>
#include <algorithm>
// -----------------Сортування за алфавітом---------------------
// Функція для обміну двох елементів
void swap(char& a, char& b)
{
    char temp = a;
    a = b;
    b = temp;
}

// Функція для визначення опорного елементу та розбиття рядка на дві частини
int partition(std::string& str, int low, int high)
{
    char pivot = str[high];
    int  i     = low - 1;

    for ( int j = low; j < high; ++j ) {
        if( str[j] <= pivot ) {
            ++i;
            swap(str[i], str[j]);
        }
    }

    swap(str[i + 1], str[high]);
    return i + 1;
}

// Функція для сортування рядка за допомогою швидкого сортування
void sortByAlphabet(std::string& str, int low, int high)
{
    if( low < high ) {
        int pivotIndex = partition(str, low, high);

        sortByAlphabet(str, low, pivotIndex - 1);
        sortByAlphabet(str, pivotIndex + 1, high);
    }
}
// -------------------Сортування за кількістю----------------
struct CharCount{
  char character;
  int  count;

  CharCount(char ch, int cnt) : character(ch), count(cnt){ }
};

// Функція для порівняння двох CharCount за кількістю
bool compareCharCount(const CharCount& a, const CharCount& b)
{
    return a.count > b.count;
}

// Функція для підрахунку кількості зустрічей кожного символу та сортування
void countAndSortChars(std::string& inputString)
{
    std::vector<CharCount> charCounts;

    for ( char ch: inputString ) {
        auto it = std::find_if(charCounts.begin(), charCounts.end(),
                               [ch](const CharCount& cc){ return cc.character == ch; });

        if( it != charCounts.end()) {
            it->count++;
        }
        else {
            charCounts.emplace_back(ch, 1);
        }
    }

    // Сортування за кількістю в спадаючому порядку
    std::sort(charCounts.begin(), charCounts.end(), compareCharCount);

    // Заміна вхідної строки відсортованими символами
    inputString.clear();
    for ( const auto& cc: charCounts ) {
        inputString.append(cc.count, cc.character);
    }
}
#endif //FILESANDPROCESSING_01032502_SORT_H
