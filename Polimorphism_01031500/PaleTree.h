//
// Created by User on 17.11.2023.
//

#ifndef POLIMORPHISM_01031500_PALETREE_H
#define POLIMORPHISM_01031500_PALETREE_H

#include "TreeSapling.h"

class PaleTree : public TreeSapling {

public:
    virtual void showTree();
    PaleTree();
    PaleTree(std::string paleName);
};


#endif //POLIMORPHISM_01031500_PALETREE_H
