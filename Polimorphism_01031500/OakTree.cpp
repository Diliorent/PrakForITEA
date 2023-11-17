//
// Created by User on 17.11.2023.
//

#include "OakTree.h"

void OakTree::showTree() {
    std::cout << s_name << ": " << std::endl
              << "  ______ " << std::endl
              << " /      \\  " << std::endl
              << "|        | " << std::endl
              << "|   ||   | " << std::endl
              << " \\__||__/  " << std::endl
              << "____||____" << std::endl;
}

OakTree::OakTree() {
    s_name = "Unknown oak";

}

OakTree::OakTree(std::string paleName) {
    s_name = paleName;
}
