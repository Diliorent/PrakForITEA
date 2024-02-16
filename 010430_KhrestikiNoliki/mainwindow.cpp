#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->pushButtonWin->setVisible(false);

    connect(ui->pushButton_11, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_12, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_13, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_21, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_22, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_23, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_31, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_32, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButton_33, SIGNAL(clicked(bool)), this, SLOT(placeACharOnButton()));
    connect(ui->pushButtonWin, SIGNAL(clicked(bool)), this, SLOT(startNewGame()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checkWinCondition()
{
    if((ui->pushButton_11->text() == ui->pushButton_12->text() && ui->pushButton_11->text() == ui->pushButton_13->text() && ui->pushButton_11->text() != "") ||
       (ui->pushButton_11->text() == ui->pushButton_22->text() && ui->pushButton_11->text() == ui->pushButton_33->text() && ui->pushButton_11->text() != "") ||
       (ui->pushButton_11->text() == ui->pushButton_31->text() && ui->pushButton_11->text() == ui->pushButton_31->text() && ui->pushButton_11->text() != "") ||

       (ui->pushButton_12->text() == ui->pushButton_22->text() && ui->pushButton_12->text() == ui->pushButton_32->text() && ui->pushButton_12->text() != "") ||

       (ui->pushButton_13->text() == ui->pushButton_23->text() && ui->pushButton_13->text() == ui->pushButton_33->text() && ui->pushButton_13->text() != "") ||
       (ui->pushButton_13->text() == ui->pushButton_22->text() && ui->pushButton_13->text() == ui->pushButton_31->text() && ui->pushButton_13->text() != "") ||

       (ui->pushButton_21->text() == ui->pushButton_22->text() && ui->pushButton_21->text() == ui->pushButton_23->text() && ui->pushButton_21->text() != "") ||

       (ui->pushButton_31->text() == ui->pushButton_32->text() && ui->pushButton_31->text() == ui->pushButton_33->text() && ui->pushButton_31->text() != "")) {
        if( turn == "×" ) ui->pushButtonWin->setText("\"×\" wins!");
        else ui->pushButtonWin->setText("\"◎\" wins!");
        ui->pushButtonWin->setVisible(true);
    }

}
void MainWindow::placeACharOnButton()
{
    auto* button = (QPushButton*) sender();

    button->setText(turn);
    button->setEnabled(false);
    checkWinCondition();
    if( turn == "×" ) {
        turn = "◎";
        return;
    };
    if( turn == "◎" ) {
        turn = "×";
        return;
    };

}
void MainWindow::startNewGame()
{
    ui->pushButton_11->setText("");
    ui->pushButton_11->setEnabled(true);
    ui->pushButton_12->setText("");
    ui->pushButton_12->setEnabled(true);
    ui->pushButton_13->setText("");
    ui->pushButton_13->setEnabled(true);
    ui->pushButton_21->setText("");
    ui->pushButton_21->setEnabled(true);
    ui->pushButton_22->setText("");
    ui->pushButton_22->setEnabled(true);
    ui->pushButton_23->setText("");
    ui->pushButton_23->setEnabled(true);
    ui->pushButton_31->setText("");
    ui->pushButton_31->setEnabled(true);
    ui->pushButton_32->setText("");
    ui->pushButton_32->setEnabled(true);
    ui->pushButton_33->setText("");
    ui->pushButton_33->setEnabled(true);

    ui->pushButtonWin->setVisible(false);
}

