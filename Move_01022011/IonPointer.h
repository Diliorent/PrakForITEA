//
// Created by User on 04.01.2024.
//

#ifndef MOVE_01022011_IONPOINTER_H
#define MOVE_01022011_IONPOINTER_H

#include "Ion.h"
class IonPointer
{
    Ion* m_ptr;
public:
    explicit IonPointer(Ion* ptr = nullptr);

    ~IonPointer();

    // Конструктор копіювання, який виконує глибоке копіювання x.m_ptr в m_ptr
    IonPointer(const IonPointer& x);

    // Конструктор переміщення, який передає право власності на x.m_ptr в m_ptr
    IonPointer(IonPointer&& x) noexcept ;

    // Оператор присвоювання копіюванням, який виконує глибоке копіювання x.m_ptr в m_ptr
    IonPointer& operator=(const IonPointer& x);

    // Оператор присвоювання переміщенням, який передає право власності на x.m_ptr в m_ptr
    IonPointer& operator=(IonPointer&& x);

    Ion& operator*() const { return *m_ptr; }
    Ion* operator->() const { return m_ptr; }
    bool isNull() const { return m_ptr == nullptr; }
};

#endif //MOVE_01022011_IONPOINTER_H
