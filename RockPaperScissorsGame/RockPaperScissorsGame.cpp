//
// Created by ACER on 26.02.2024.
//

#include "RockPaperScissorsGame.h"


void RockPaperScissorsGame::play(int playerChoice) {
    // Generate computer's choice
    int computerChoice = QRandomGenerator::global()->bounded(3); // 0: Rock, 1: Paper, 2: Scissors

    // Determine the winner
    QString result;
    if (playerChoice == computerChoice)
        result = "Нічия!";
    else if ((playerChoice == 0 && computerChoice == 2) ||
             (playerChoice == 1 && computerChoice == 0) ||
             (playerChoice == 2 && computerChoice == 1))
        result = "Ви виграли!";
    else
        result = "Ви програли!";

    // Display result
    QString message = QString("Ваш вибір: %1\nВибір комп'ютера: %2\nРезультат: %3")
            .arg(getChoiceName(playerChoice))
            .arg(getChoiceName(computerChoice))
            .arg(result);
    resultLabel->setText(message);
}

QString RockPaperScissorsGame::getChoiceName(int choice) {
    switch (choice) {
        case 0:
            return "Камінь";
        case 1:
            return "Папір";
        case 2:
            return "Ножиці";
        default:
            return "";
    }
}
