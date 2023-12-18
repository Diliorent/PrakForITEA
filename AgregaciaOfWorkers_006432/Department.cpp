//
// Created by User on 18.12.2023.
//

#include <iostream>
#include <utility>
#include "Department.h"
void Department::add(Worker* worker)
{
    std::cout << "Department \"" << this->name << "\" welcomes a new employee: " << worker->getName() << std::endl;
    team.push_back(worker);
}
Department::Department()
{
    name = "Unnamed Dep";
}

Department::Department(std::string name)
{
    this->name = std::move(name);
    std::cout << "New department \"" << this->name << "\" is open and recruits new employees" << std::endl;
}
Department::~Department()
{
    std::cout << "The department \"" << this->name << "\" is closing. All the workers have scattered." << std::endl;
}

void Department::workerMoveFrom(Department& fromDep, unsigned int worker)
{
    if( worker > fromDep.team.size()) { // Перевірка на те, що не вийти за межі вектору
        std::cout << "There is no such worker" << std::endl;
        return;
    }
    std::cout << "From department \"" << fromDep.name << "\", worker " << fromDep.team[worker]->getName()
              << " is moved to departament named: \"" << name << "\"" << std::endl;

    team.push_back(fromDep.team[worker]); //Копіюємо значення до нового відділу
    fromDep.team.erase(fromDep.team.begin() + worker); //Видаляємо минуле
    fromDep.team.shrink_to_fit(); // Зменшення розміру вектора або контейнера до його фактичного розміру
    team.shrink_to_fit();
}

void Department::showDep()
{
    std::cout << name << "\'s team: ";
    for ( auto& i: team ) {
        std::cout << i->getName() << " ";
    }
    std::cout << std::endl;

}

