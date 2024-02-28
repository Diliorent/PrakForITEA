//
// Created by User on 08.02.2024.
//

#include "TetrixField.h"
void TetrixField::updateField()
{

}
TetrixField::TetrixField()
{
    for ( int row = 0; row < 20; ++row ) {
        for ( int col = 0; col < 10; ++col ) {
            field[row][col] = 0;
        }
    }
    field[19][0]  = 1;
    field[18][0]  = 1;
    field[17][0]  = 1;
    field[16][0]  = 1;
    field[19][1]  = 2;
    field[19][2]  = 2;
    field[18][1]  = 2;
    field[18][2]  = 2;
    field[19][3]  = 3;
    field[18][3]  = 3;
    field[17][3]  = 3;
    field[17][4]  = 3;
    field[19][6]  = 4;
    field[18][6]  = 4;
    field[17][6]  = 4;
    field[17][5]  = 4;
    field[19][7]  = 5;
    field[19][8]  = 5;
    field[18][8]  = 5;
    field[18][9]  = 5;
    field[17][9]  = 6;
    field[17][8]  = 6;
    field[16][8]  = 6;
    field[16][7]  = 6;
    field[17][2]  = 7;
    field[16][2]  = 7;
    field[15][2]  = 7;
    field[16][3]  = 7;
}
void TetrixField::checkForTetris()
{
    for ( int row = 0; row < 20; ++row ) {
        for ( int col = 0; col < 10; ++col ) {
            if( field[row][col] == 0 ) {
                break;
            }
            if( col == 9 ) {
                clearRow(row);
            }
        }

    }

}
void TetrixField::clearRow(unsigned int clearRow)
{
    for ( int row = clearRow; row > 0; --row ) {
        for ( int col = 0; col < 10; ++col ) {
            field[row][col] = field[row - 1][col];
        }
    }
}
void TetrixField::startNewGame()
{
    for ( int row = 0; row < 20; ++row ) {
        for ( int col = 0; col < 10; ++col ) {
            field[row][col] = 0;
        }
    }
}
