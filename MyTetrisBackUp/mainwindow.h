#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "TetrixField.h"
#include "Brick.h"
#include <QTimer>
#include <QObject> // Для QObject::connect

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum RowCol{
      row = 0,
      col = 1
    };
    int currentPosition[2] = {0, 0};
    bool isStarted = false;
    float level = 1;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateTable();
    void updateField();
    void keyPressEvent(QKeyEvent *event) override;
    TetrixField tetrix_field;
    QTimer *timer = new QTimer(this);



private slots:
    void onTimer();
    void on_pushButton_clicked();
    void on_pushButton_NewGame_clicked();
    void startTimer();
    void horizontalCollisionCheck();
    void leftCollisionCheck();
    void rightCollisionCheck();
private:

    Ui::MainWindow *ui;
    void GAMEOVER();
};
#endif // MAINWINDOW_H
