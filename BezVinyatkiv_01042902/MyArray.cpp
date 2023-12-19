//
// Created by User on 19.12.2023.
//

#include "MyArray.h"

MyArray::MyArray(int row, int col)
{
    this->row = row;
    this->col = col;
    arr = new int* [row];
    for ( int i = 0; i < row; i++ ) {
        arr[i] = new int[col];
    }
    for ( int i = 0; i < row; i++ ) {
        for ( int j = 0; j < col; j++ ) {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}

MyArray::~MyArray()
{
    for ( int i = 0; i < row; i++ ) {
        delete[] arr[i];
        std::cout << "Freed memory for row !" << std::endl;
    }
    delete[] arr;
    std::cout << "Freed memory for array of pointers !" << std::endl;
}
void MyArray::show_arr()
{
    for ( int i = 0; i < row; i++ ) {
        for ( int j = 0; j < col; j++ ) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



