//
// Created by User on 19.12.2023.
//

#ifndef BEZVINYATKIV_01042902_MYARRAY_H
#define BEZVINYATKIV_01042902_MYARRAY_H

#include <cstdlib>
#include <iostream>
class MyArray{
private:
public:
    int row;
    int col;
    int ** arr;
    MyArray(int row, int col);
    ~MyArray();

    void show_arr();
    friend bool show_result(MyArray* a1, MyArray* a2);
};

#endif //BEZVINYATKIV_01042902_MYARRAY_H
