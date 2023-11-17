//
// Created by User on 10.11.2023.
//

#ifndef POLIMORPHISM_01031500_PALMTREE_H
#define POLIMORPHISM_01031500_PALMTREE_H

#include "TreeSapling.h"

class PalmTree : public TreeSapling {

public:
    virtual void showTree();
    PalmTree();
    PalmTree(std::string palmName);
};


#endif //POLIMORPHISM_01031500_PALMTREE_H
