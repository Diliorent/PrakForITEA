#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString palindrom = ui->lineEdit->text();
    bool isPalindrom = true;
    for (int var = 0; var < palindrom.size()/2; ++var) {
        if (palindrom[var] != palindrom[palindrom.size()-1-var])
        {
            isPalindrom = false;
            break;
        }

    }
    if (isPalindrom) ui->label->setText("It is a palindrom");
    else ui->label->setText("It is not a palindrom");




    // ui->label->setText(ui->lineEdit->text());
}

