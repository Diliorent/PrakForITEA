//
// Created by User on 10.11.2023.
//

#include "PalmTree.h"


void PalmTree::showTree() {
    std::cout << s_name << ": " << std::endl
              << " __  __ " << std::endl
              << "/ *\\/* \\" << std::endl
              << "   ||   " << std::endl
              << "   ||   " << std::endl
              << "___||___" << std::endl;
}

PalmTree::PalmTree() {
    s_name = "Unknown palm";
}

PalmTree::PalmTree(std::string palmName) {
    s_name = palmName;
}
//
//PalmTree::PalmTree(std::string name) {
//    this->name = name;
//}
