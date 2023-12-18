//
// Created by User on 18.12.2023.
//

#ifndef AGREGACIAOFWORKERS_006432_DEPARTMENT_H
#define AGREGACIAOFWORKERS_006432_DEPARTMENT_H

#include <vector>
#include "Worker.h"
class Department{
protected:
    std::string name;
public:
    // вміст класу допишіть самостійно
    std::vector<Worker*> team;
    Department();
    explicit Department(std::string name);
    ~Department();
    void add(Worker* worker); // Функція додає працівника до відділу
    void workerMoveFrom(Department& fromDep, unsigned int worker); //Функція для переведення одного працівника до іншого відділу
    void showDep(); //Показує всіх працівників які працюють у цьому відділі

};
#endif //AGREGACIAOFWORKERS_006432_DEPARTMENT_H
