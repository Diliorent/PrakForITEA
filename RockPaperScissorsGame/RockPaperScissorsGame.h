//
// Created by ACER on 26.02.2024.
//

#ifndef ROCKPAPERSCISSORSGAME_ROCKPAPERSCISSORSGAME_H
#define ROCKPAPERSCISSORSGAME_ROCKPAPERSCISSORSGAME_H

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QMessageBox>
#include <QRandomGenerator>

class RockPaperScissorsGame : public QWidget {
Q_OBJECT

public:
    RockPaperScissorsGame(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Камінь, ножиці, папір");
        resize(400, 200);
        // Create buttons
        QPushButton *rockButton = new QPushButton("Камінь", this);
        QPushButton *paperButton = new QPushButton("Папір", this);
        QPushButton *scissorsButton = new QPushButton("Ножиці", this);

        // Create result label
        resultLabel = new QLabel("", this);

        // Connect buttons to slots
        connect(rockButton, &QPushButton::clicked, this, &RockPaperScissorsGame::playRock);
        connect(paperButton, &QPushButton::clicked, this, &RockPaperScissorsGame::playPaper);
        connect(scissorsButton, &QPushButton::clicked, this, &RockPaperScissorsGame::playScissors);

        // Set up layout
        QVBoxLayout *mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(new QLabel("Виберіть ваш варіант:", this));
        mainLayout->addWidget(rockButton);
        mainLayout->addWidget(paperButton);
        mainLayout->addWidget(scissorsButton);
        mainLayout->addWidget(resultLabel);
        mainLayout->setAlignment(Qt::AlignTop);

        setLayout(mainLayout);
    }

private slots:

    void playRock() { play(0); }

    void playPaper() { play(1); }

    void playScissors() { play(2); }

private:
    QLabel *resultLabel;

    void play(int playerChoice);

    QString getChoiceName(int choice);
};


#endif //ROCKPAPERSCISSORSGAME_ROCKPAPERSCISSORSGAME_H
