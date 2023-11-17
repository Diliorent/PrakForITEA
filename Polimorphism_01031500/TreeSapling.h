//
// Created by User on 10.11.2023.
//

#ifndef POLIMORPHISM_01031500_TREESAPLING_H
#define POLIMORPHISM_01031500_TREESAPLING_H


#include <string>
#include <iostream>
#include <utility>

class TreeSapling {
protected:
    std::string s_name;

public:
   virtual std::string getName();

//    virtual const char *showTree()
    virtual void showTree();


    TreeSapling();
    TreeSapling(std::string name);
};

#endif //POLIMORPHISM_01031500_TREESAPLING_H
