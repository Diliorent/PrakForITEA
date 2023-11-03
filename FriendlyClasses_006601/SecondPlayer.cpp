//
// Created by User on 03.11.2023.
//

#include <iostream>
#include "SecondPlayer.h"

void SecondPlayer::showBoard(FirstPlayer *secondPlayerBoard) {
    for (int i = 9; i >= 0; --i) {
        std::cout << "| ";
        for (int j = 9; j >= 0; --j) {
            std::cout << secondPlayerBoard->CoordinatesOfFigures[i][j][0];
            std::cout << secondPlayerBoard->CoordinatesOfFigures[i][j][1];
//                std::cout << secondPlayerBoard->CoordinatesOfFigures[i][j][1];
            std::cout << "| ";
        }
        std::cout << std::endl;
    }

}