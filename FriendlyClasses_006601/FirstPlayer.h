//
// Created by User on 03.11.2023.
//

#ifndef FRIENDLYCLASSES_006601_FIRSTPLAYER_H
#define FRIENDLYCLASSES_006601_FIRSTPLAYER_H


class FirstPlayer {
    friend class SecondPlayer; //Додаємо друга, щоб він мав доступ до дошки
private:
    char CoordinatesOfFigures[10][10][2]; //Третій вимір для визначення кольору та рангу фігури
public:
    static void showBoard(FirstPlayer *board); //Метод, який виводить у консоль теперішню ситуацію на дошці
    explicit FirstPlayer(); // Конструктор, який заповнює дошку початковими положеннями фігур
};


#endif //FRIENDLYCLASSES_006601_FIRSTPLAYER_H
