//
// Created by User on 17.11.2023.
//

#include "PaleTree.h"

PaleTree::PaleTree() {
    s_name = "Unknown pale";
}

PaleTree::PaleTree(std::string paleName){
    s_name = paleName;

}
void PaleTree::showTree() {
    std::cout << s_name << ": " << std::endl
              << "   /\\ " << std::endl
              << "  /__\\  " << std::endl
              << " /_||_\\ " << std::endl
              << "/__||__\\  " << std::endl
              << "___||___" << std::endl;
}
