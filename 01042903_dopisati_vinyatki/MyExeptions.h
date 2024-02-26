//
// Created by ACER on 26.02.2024.
//

#ifndef INC_01042903_DOPISATI_VINYATKI_MYEXEPTIONS_H
#define INC_01042903_DOPISATI_VINYATKI_MYEXEPTIONS_H
#include <iostream>


using namespace std;

// Виняток для помилкового розміру стека
class stack_size_error : public length_error {
public:
    explicit stack_size_error(const std::string &msg);
};

// Виняток для помилки виділення пам'яті для стека
class stack_bad_alloc : public std::bad_alloc {
public:
    explicit stack_bad_alloc(void);
};

// Виняток для переповнення стека
class stack_overflow : public std::logic_error {
public:
    explicit stack_overflow(const std::string &msg);
};

// Виняток для випадку, коли стек порожній
class stack_empty : public std::logic_error {
public:
    explicit stack_empty(const std::string &msg);
};

// Виняток для неправильного розміру стека
class stack_bad_size : public std::invalid_argument {
public:
    explicit stack_bad_size(const std::string &msg);
};

// Виняток для спроби видалити елемент з порожнього стека
class stack_underflow : public std::logic_error {
public:
    explicit stack_underflow(const std::string &msg);
};

// Конструктор винятку для помилкового розміру стека
stack_size_error::stack_size_error(const std::string &msg) : std::length_error(msg) {};

// Конструктор винятку для помилки виділення пам'яті для стека
stack_bad_alloc::stack_bad_alloc(void) : std::bad_alloc() {};

// Конструктор винятку для переповнення стека
stack_overflow::stack_overflow(const std::string &msg) : std::logic_error(msg) {};

// Конструктор винятку для випадку, коли стек порожній
stack_empty::stack_empty(const std::string &msg) : std::logic_error(msg) {};

// Конструктор винятку для неправильного розміру стека
stack_bad_size::stack_bad_size(const std::string &msg) : std::invalid_argument(msg) {};

// Конструктор винятку для спроби видалити елемент з порожнього стека
stack_underflow::stack_underflow(const std::string &msg) : std::logic_error(msg) {};

class Stack {
private:
    int *stackstore;
    int stacksize;
    int SP;
public:
    Stack(int size = 100);
    ~Stack();
    void push(int value);
    int pop(void);
};

Stack::Stack(int size) {
    if (size <= 0)
        throw stack_bad_size("The size must be positive!");
    try {
        stackstore = new int[size];
    }
    catch (std::bad_alloc ba) {
        throw stack_bad_alloc();
    }
    stacksize = size;
    SP = 0;
}

Stack::~Stack(void) {
    delete[] stackstore;
}

void Stack::push(int value) {
    if (SP == stacksize)
        throw stack_overflow("Stack overflow!");
    stackstore[SP++] = value;
}

int Stack::pop(void) {
    if (SP == 0)
        throw stack_empty("The stack is empty!");
    return stackstore[--SP];
}



#endif //INC_01042903_DOPISATI_VINYATKI_MYEXEPTIONS_H
