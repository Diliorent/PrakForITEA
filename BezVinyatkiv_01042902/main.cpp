#include <iostream>
#include <ctime>
#include "MyArray.h"

using namespace std;

bool show_result(MyArray* a1, MyArray* a2);

int main()
{
    srand(time(nullptr));
    int  r1, r2, c1, c2;
    bool matrices_added = false;

    do {
        std::cout << "Number of rows in the first matrix: " << std::endl;
        std::cin >> r1;
        std::cout << "Number of columns in the first matrix: " << std::endl;
        std::cin >> c1;
        std::cout << "Number of rows in the second matrix: " << std::endl;
        std::cin >> r2;
        std::cout << "Number of columns in the second matrix: " << std::endl;
        std::cin >> c2;
        std::cout << std::endl;

        if( r1 != r2 || c1 != c2 ) {
            std::cout << "Error. Matrices must have the same dimensions!" << std::endl << std::endl;
        }
        else {
            MyArray a1(r1, c1);
            a1.show_arr();
            MyArray a2(r2, c2);
            a2.show_arr();
            matrices_added = show_result(&a1, &a2);
            if( matrices_added ) {
                std::cout << "Matrices added!" << std::endl;
            }
        }
    }
    while ( !matrices_added );

    std::cout << "End of the main program" << std::endl;
    return 0;
}


bool show_result(MyArray* a1, MyArray* a2)
{
    if( a1->row != a2->row ) {
        std::cout << "Error. Number of rows in the matrix is not equal!" << std::endl << std::endl;
        return false;
    }
    if( a1->col != a2->col ) {
        std::cout << "Error. Number of columns in the matrix is not equal!" << std::endl << std::endl;
        return false;
    }

    for ( int i = 0; i < a1->row; i++ ) {
        for ( int j = 0; j < a1->col; j++ ) {
            std::cout << a1->arr[i][j] + a2->arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return true;
}
