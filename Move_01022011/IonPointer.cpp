//
// Created by User on 04.01.2024.
//

#include "IonPointer.h"

IonPointer::IonPointer(Ion* ptr)
{
//    std::cout << "IonPointer constructed\n";
    m_ptr = ptr;
}
IonPointer::~IonPointer()
{
//    std::cout << "IonPointer destructed\n";
    delete m_ptr;
}
IonPointer::IonPointer(const IonPointer& x)
{
    m_ptr = new Ion;
    *m_ptr = *x.m_ptr;
}
IonPointer::IonPointer(IonPointer&& x) noexcept
{
    m_ptr = x.m_ptr;
    {
        x.m_ptr = nullptr; // ми поговоримо про це трішки пізніше
    }
}
IonPointer& IonPointer::operator=(const IonPointer& x)
{
    // Перевірка на самоприсвоювання
    if (&x == this)
        return *this;

    // Видаляємо все, що до цього моменту може зберігати вказівник
    delete m_ptr;

    // Копіюємо переданий об'єкт
    m_ptr = new Ion;
    *m_ptr = *x.m_ptr;

    return *this;
}
IonPointer& IonPointer::operator=(IonPointer&& x)
{
    // Перевірка на самоприсвоювання
    if (&x == this)
        return *this;

    // Видаляємо все, що до цього моменту може зберігати вказівник
    delete m_ptr;

    // Передаємо право власності на x.m_ptr в m_ptr
    m_ptr = x.m_ptr;
    x.m_ptr = nullptr; // ми поговоримо про це трішки пізніше

    return *this;
}

