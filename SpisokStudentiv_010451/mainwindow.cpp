#include <iostream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);
//    ui->tableWidget->setEnabled(false);
    ui->tableWidget->setColumnWidth(0, 200);
    ui->tableWidget->setColumnWidth(1, 150);
    ui->tableWidget->setColumnWidth(2, 150);
    ui->tableWidget->setColumnWidth(3, 200);
    ui->tableWidget->setColumnWidth(4, 150);
    this->setFixedSize(892, 600);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    ui->tableWidget->setEnabled(checked);
}

void MainWindow::on_pushButton_Add_clicked()
{
    if( ui->tableWidget->height() < this->height() - 120 ) {
        ui->tableWidget->setFixedSize(ui->tableWidget->width(), ui->tableWidget->height() + 30);
        int ay = ui->pushButton_Add->y();
        ui->pushButton_Add->setGeometry(30, ay + 30, 81, 24);
        ui->pushButton_Del->setGeometry(110, ay + 30, 81, 24);
    }
    addRow();
}

void MainWindow::on_pushButton_Del_clicked()
{
    if(ui->tableWidget->rowCount() > 2) { removeLastRow(); }
    else return;
    if( ui->tableWidget->rowCount() < 18) {
        ui->tableWidget->setFixedSize(ui->tableWidget->width(), ui->tableWidget->height() - 30);
        int ay = ui->pushButton_Add->y();
        ui->pushButton_Add->setGeometry(30, ay - 30, 81, 24);
        ui->pushButton_Del->setGeometry(110, ay - 30, 81, 24);
    }

}

void MainWindow::on_pushButton_Imp_clicked()
{

}

void MainWindow::on_pushButton_Exp_clicked()
{

}
void MainWindow::addRow()
{
//    if( ui->tableWidget->height() < this->height() - 130 )
//    { ui->tableWidget->setFixedSize(ui->tableWidget->width(), ui->tableWidget->height() + 30); }
    // Получаем количество строк в таблице
    int rowCount = ui->tableWidget->rowCount();

    // Вставляем новую строку
    ui->tableWidget->insertRow(rowCount);
}
void MainWindow::removeLastRow()
{
    // Получаем количество строк в таблице
    int rowCount = ui->tableWidget->rowCount();
    // Проверяем, есть ли строки для удаления
    if( rowCount > 0 ) {
        // Удаляем последнюю строку
        ui->tableWidget->removeRow(rowCount - 1);
    }
}



