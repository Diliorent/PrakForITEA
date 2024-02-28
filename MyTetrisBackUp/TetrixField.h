//
// Created by User on 08.02.2024.
//

#ifndef SCGSDF_TETRIXFIELD_H
#define SCGSDF_TETRIXFIELD_H

#include <QColor>
class TetrixField{
public:
    unsigned int field[24][10];
    unsigned int needToClear;
    int score = 0;
    float level = 1;
    TetrixField();

//    struct myCell{
//      unsigned int row;
//      unsigned int col;
//      QColor color;
//    };
//    QVector<myCell> MyField;

    void updateField();
    void checkForTetris();
    void clearRow(unsigned int clearRow);
    void startNewGame();

};

#endif //SCGSDF_TETRIXFIELD_H
