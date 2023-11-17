#include <iostream>
#include <string>
#include "TreeSapling.h"
#include "PalmTree.h"
#include "PaleTree.h"
#include "OakTree.h"

//    Напишіть чотири класи для реалізації друку різних видів дерев з дуже простих символів тобто
// (ASCII, '+', '*', '/' і '\'). . — Один з класів є базовим для трьох інших У базовому класі треба створити метод
// малювання хай це буде єдиний метод цього класу і це буде віртуальний метод
//    Далі у похідних класах реалізуйте цей метод за допомогою трьох різних версій малювання
//    В основній функції створіть масив з трьома вказівниками на об'єкти базового класу Потім створіть три об'єкти
// дерев різних видів і призначте вказівники на них з комірок масива Після цього в циклі викличте кожен метод малювання for.

int main() {
    TreeSapling tree{"Supling"};
    std::cout << tree.getName() << std::endl;
    tree.showTree();

    PalmTree palm{"I am Palm"};
    PaleTree pale{"I am Pale"};
    OakTree oak{"I am Oak"};
    std::cout << "Manually:" << std::endl;
    palm.showTree();
    pale.showTree();
    oak.showTree();

    TreeSapling *trees[3]{};
    trees[0] = &palm;
    trees[1] = &pale;
    trees[2] = &oak;
//    std::cout << trees[0]->getName();
    std::cout << "---------------\n"
                 "From for cycle:\n";
    for (int i = 0; i < 3; ++i) {
        trees[i]->showTree();
    }

}