#include <iostream>
#include "FirstPlayer.h"
#include "SecondPlayer.h"

int main() {
    std::cout << "Hello, and welcome to Chess_World_1.0!" << std::endl << "    First player see: " << std::endl;
    FirstPlayer board;
    board.showBoard(&board);
    SecondPlayer secondPlayer;
    std::cout << "    Second player see: " << std::endl;
//    secondPlayer.showBoard(reinterpret_cast<FirstPlayer *>(&secondPlayer));
    secondPlayer.showBoard(&board);
    return 0;
}
