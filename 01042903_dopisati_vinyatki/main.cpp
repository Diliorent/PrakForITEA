#include <iostream>
#include "MyExeptions.h"

#include <iostream>
using namespace std;



int main() {
    Stack stk;
    try {
        for (int i = 0; i < 100; i++) {
            stk.push(i);
        }
        stk.push(8);

    }
    catch (stack_overflow& exc)
    {
        cout << "Stack replenishment: element not added." << endl;
    }
    catch (stack_bad_size& exc)
    {
        cout << "Incorrect stack size." << endl;
    }
    catch (stack_underflow& exc)
    {
        cout << "Deleting from an empty stack." << endl;
    }
    cout << stk.pop() << endl;

    try {
        Stack negSizeStack(-10); // Спроба створити стек з від'ємним розміром
    }
    catch (stack_bad_size& exc)
    {
        cout << "Incorrect stack size." << endl;
    }

    try {
        Stack emptyStack; // Порожній стек
        emptyStack.pop(); // Спроба видалити елемент з порожнього стека
    }
    catch (stack_underflow& exc)
    {
        cout << "Deletion from an empty stack." << endl;
    }

    return 0;
}
