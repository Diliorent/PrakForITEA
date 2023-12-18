//
// Created by User on 18.12.2023.
//

#ifndef AGREGACIAOFWORKERS_006432_WORKER_H
#define AGREGACIAOFWORKERS_006432_WORKER_H

#include <string>
#include <utility>
class Worker{
protected:
    std::string name;
public:
    explicit Worker(std::string n) : name(std::move(n)){ }
    [[nodiscard]] std::string getName() const; //Видає ім'я працівника
    // решту методів допишіть самостійно
};

#endif //AGREGACIAOFWORKERS_006432_WORKER_H
