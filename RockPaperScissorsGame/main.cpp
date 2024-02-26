#include <QApplication>
#include "RockPaperScissorsGame.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    RockPaperScissorsGame game;
    game.show();

    return app.exec();
}

#include "main.moc"
