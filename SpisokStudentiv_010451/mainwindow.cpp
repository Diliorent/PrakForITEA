#include <iostream>
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);
//    ui->tableWidget->setEnabled(false);
    ui->tableWidget->setColumnWidth(0, 20);
    ui->tableWidget->setColumnWidth(1, 15);
    ui->tableWidget->setColumnWidth(2, 15);
    ui->tableWidget->setColumnWidth(3, 20);
    ui->tableWidget->setColumnWidth(4, 15);
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
    if( ui->tableWidget->rowCount() < 15) {
        ui->tableWidget->setFixedSize(ui->tableWidget->width(), ui->tableWidget->height() - 30);
        int ay = ui->pushButton_Add->y();
        ui->pushButton_Add->setGeometry(30, ay - 30, 81, 24);
        ui->pushButton_Del->setGeometry(110, ay - 30, 81, 24);
    }

}

void MainWindow::on_pushButton_Imp_clicked()
{
    updateTable();

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
void MainWindow::updateTable()
{
//    ui->tableWidget->setRowCount(testPositions.size());
    ui->tableWidget->setColumnCount(6);

    ui->tableWidget->setHorizontalHeaderLabels({"type", "position", "rate", "acc", "type", "del"});


    for ( int j = 0; j < ui->tableWidget->rowCount(); ++j ) {
        for ( int k = 0; k < ui->tableWidget->columnCount(); ++k ) {
            ui->tableWidget->setItem(j, k, new QTableWidgetItem());
        }
    }

    for ( int k = 0, j = 0; k < ui->tableWidget->rowCount(); ++k ) {
        QWidget* tempQWidget = new QWidget(ui->tableWidget->cellWidget(k, 5));

        ui->tableWidget->setCellWidget(k, 5, tempQWidget);

        QHBoxLayout* tempLayout = new QHBoxLayout(tempQWidget);
        QPushButton* tempAdd = new QPushButton("+", tempQWidget);
        QPushButton* tempRemove = new QPushButton("X", tempQWidget);

        tempAdd->setMinimumSize(50, 25);
        tempRemove->setMinimumSize(50, 25);

        tempLayout->addWidget(tempAdd);
        tempLayout->addWidget(tempRemove);

//        table->item(2,2)->row();

        QObject::connect(tempAdd, &QPushButton::clicked, this, &TPTable::insertTP);
        QObject::connect(tempRemove, &QPushButton::clicked, this, &TPTable::removeTP);
//
//        button2indexAdd.insert(dynamic_cast<QObject*>(tempAdd), j);
//        button2indexRemove.insert(dynamic_cast<QObject*>(tempRemove), j);

//        qDebug() << button2indexAdd;
//        qDebug() << button2indexRemove;
        j++;
    }



//    int a = 0;
//    for ( auto item: testPositions ) {
//        table->item(a, 1)->setText(QString::number(item->getInnerAxisParam()->getPos(), 'f', 5));
//        table->item(a, 2)->setText(QString::number(item->getInnerAxisParam()->getRate(), 'f', 5));
//        table->item(a, 3)->setText(QString::number(item->getInnerAxisParam()->getAcc(), 'f', 5));
//        table->item(a, 5)->setText(QString::number(item->getOuterAxisParam()->getPos(), 'f', 5));
//        table->item(a, 6)->setText(QString::number(item->getOuterAxisParam()->getRate(), 'f', 5));
//        table->item(a, 7)->setText(QString::number(item->getOuterAxisParam()->getAcc(), 'f', 5));
//        table->item(a, 8)->setText(QString::number(item->getTime(), 'f', 8));
//
//        if( item->getInnerAxisParam()->isRotation()) {
//            dynamic_cast<QComboBox*>(table->cellWidget(a, 0))->setCurrentIndex(1);
//        } else {
//            dynamic_cast<QComboBox*>(table->cellWidget(a, 0))->setCurrentIndex(0);
//        }
//
//        if( item->getOuterAxisParam()->isRotation()) {
//            dynamic_cast<QComboBox*>(table->cellWidget(a, 4))->setCurrentIndex(1);
//        } else {
//            dynamic_cast<QComboBox*>(table->cellWidget(a, 4))->setCurrentIndex(0);
//        }
//        a++;
//    }
}



