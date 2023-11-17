//
// Created by User on 10.11.2023.
//
#include "TreeSapling.h"


void TreeSapling::showTree()
    {
        std::cout << "  *\n__|__" << std::endl;
    }

TreeSapling::TreeSapling(std::string name) {
    s_name = name;
}

std::string TreeSapling::getName() {
    return s_name;
}

TreeSapling::TreeSapling() {
    s_name = "unknown tree";

}
