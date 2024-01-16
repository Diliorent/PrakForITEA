#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    MainWindow w;
    w.setFixedSize(300, 150);
    w.setWindowTitle("PalindromChecker");
    w.show();




    return a.exec();
}
