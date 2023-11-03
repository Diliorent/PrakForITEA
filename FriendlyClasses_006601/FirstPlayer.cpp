//
// Created by User on 03.11.2023.
//

#include <iostream>
#include "FirstPlayer.h"

void FirstPlayer::showBoard(FirstPlayer *board) {
    for (int i = 0; i < 10; ++i) {
        std::cout << "| ";
        for (int j = 0; j < 10; ++j) {
            std::cout << board->CoordinatesOfFigures[i][j][0];
            std::cout << board->CoordinatesOfFigures[i][j][1];
            std::cout << "| ";
        }
        std::cout << std::endl;
    }

}

FirstPlayer::FirstPlayer() {
    //Fill Заповнюємо пробілами
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            CoordinatesOfFigures[i][j][0] = ' ';
            CoordinatesOfFigures[i][j][1] = ' ';
        }
    }

    //Coordinates називаємо та заповнюємо осі(?)
    for (int i = 1; i < 9; ++i) {
        CoordinatesOfFigures[0][i][0] = i + 96;
        CoordinatesOfFigures[9][i][0] = i + 96;
        CoordinatesOfFigures[i][0][0] = i + 48;
        CoordinatesOfFigures[i][9][0] = i + 48;
    }

    //Tales Заливаємо поле чорними та білими комірками. "#" -- для білих
    char blackTale = ' ', whiteTale = '#';
    int black = 1;
    for (int i = 3; i < 7; ++i) {
        ++black;
        for (int j = 1; j < 9; ++j) {
            if (black % 2) {
                CoordinatesOfFigures[i][j][0] = whiteTale;
            } else {
                CoordinatesOfFigures[i][j][0] = blackTale;
            }
            ++black;
        }
    }

    //Figures задаємо колір фігур, та виставляємо пішаків
    for (int f1 = 1; f1 < 9; ++f1) {
        CoordinatesOfFigures[1][f1][0] = 'b';
        CoordinatesOfFigures[2][f1][0] = 'b';
        CoordinatesOfFigures[2][f1][1] = 'p';
        CoordinatesOfFigures[8][f1][0] = 'w';
        CoordinatesOfFigures[7][f1][0] = 'w';
        CoordinatesOfFigures[7][f1][1] = 'p';
    }
    for (int i = 0; i < 8; ++i) {
        if (i == 1) {
            CoordinatesOfFigures[8][1][1] = 'r';
            CoordinatesOfFigures[1][1][1] = 'r';
        }
    }
    //Rooks Башти
    CoordinatesOfFigures[1][1][1] = 'r';
    CoordinatesOfFigures[1][8][1] = 'r';
    CoordinatesOfFigures[8][1][1] = 'r';
    CoordinatesOfFigures[8][8][1] = 'r';
    //Knights Коні
    CoordinatesOfFigures[1][2][1] = 'k';
    CoordinatesOfFigures[1][7][1] = 'k';
    CoordinatesOfFigures[8][2][1] = 'k';
    CoordinatesOfFigures[8][7][1] = 'k';
    //Bishop Слони
    CoordinatesOfFigures[1][3][1] = 'b';
    CoordinatesOfFigures[1][6][1] = 'b';
    CoordinatesOfFigures[8][3][1] = 'b';
    CoordinatesOfFigures[8][6][1] = 'b';
    //Kings Королі
    CoordinatesOfFigures[1][4][1] = 'K';
    CoordinatesOfFigures[8][4][1] = 'K';
    //Queens Королеви
    CoordinatesOfFigures[1][5][1] = 'Q';
    CoordinatesOfFigures[8][5][1] = 'Q';
}
