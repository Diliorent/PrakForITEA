#include "mainwindow.h"
#include "cmath"
#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QKeyEvent>
#include <QRegularExpression>
#include <QRegExpValidator>
#include "./ui_mainwindow.h"

#define TO_STORY ui->label->setText(" " + ui->label->text() + ui->lineEdit->text() + "\n");
#define OPERATION_TO_STORY /*ui->label->setText(ui->label->text());*/ TO_STORY operation = Stop;
double var, var2 = 0;
enum Operation{
  Stop,
  Add,
  Sub,
  Mul,
  Div,
  Rem,
//  Root
};

Operation operation;
//bool   isAdd, isSubtract, isRemnant, isMultiplication, isDivision;
MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto *validator = new QRegExpValidator(QRegExp("[0-9]*\\.?[0-9]*"), ui->lineEdit);
    ui->lineEdit->setValidator(validator);

    connect(ui->pushButton_0, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked(bool)), this, SLOT(digit_numbers()));

    connect(ui->pushButton_diliti, SIGNAL(clicked(bool)), this, SLOT(operations()));
    connect(ui->pushButton_mnozhiti, SIGNAL(clicked(bool)), this, SLOT(operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked(bool)), this, SLOT(operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked(bool)), this, SLOT(operations()));
    connect(ui->pushButton_ostacha, SIGNAL(clicked(bool)), this, SLOT(operations()));
    connect(ui->pushButton_root, SIGNAL(clicked(bool)), this, SLOT(operations()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->lineEdit->setText("0");
    ui->label->setText("");
    var = 0;
}

void MainWindow::on_pushButton_mnozhiti_clicked()
{

}

void MainWindow::on_pushButton_doriv_clicked()
{
    switch (operation) {
        case Stop: {
            break;
        }
        case Add: {
            var2 = ui->lineEdit->text().toDouble();
            ui->label->setText(ui->label->text() + QString::number(var2) + " = ");
            ui->lineEdit->setText(QString::number(var + var2));
            OPERATION_TO_STORY
            break;
        }
        case Sub: {
            var2 = ui->lineEdit->text().toDouble();
            ui->label->setText(ui->label->text() + QString::number(var2) + " = ");
            ui->lineEdit->setText(QString::number(var - var2));
            OPERATION_TO_STORY
            break;
        }
        case Mul: {
            var2 = ui->lineEdit->text().toDouble();
            ui->label->setText(ui->label->text() + QString::number(var2) + " = ");
            ui->lineEdit->setText(QString::number(var * var2));
            OPERATION_TO_STORY
            break;
        }
        case Div: {
            if (ui->lineEdit->text().toDouble() == 0) {
                ui->lineEdit->setText("Er: division by 0");
//                ui->label->setText(ui->label->text() + "\nEr: division by 0");
                break;
            }
            var2 = ui->lineEdit->text().toDouble();
            ui->label->setText(ui->label->text() + QString::number(var2) + " = ");
            ui->lineEdit->setText(QString::number(var / var2));
            OPERATION_TO_STORY
            break;
        }
        case Rem: {
            if (ui->lineEdit->text().toDouble() == 0) {
                ui->lineEdit->setText("Er: division by 0");
//                ui->label->setText(ui->label->text() + "\nEr: division by 0");
                break;
            }
            var2 = ui->lineEdit->text().toDouble();
            ui->label->setText(ui->label->text() + QString::number(var2) + " = ");
            ui->lineEdit->setText(QString::number(static_cast<int>(var) % static_cast<int>(var2)));
            OPERATION_TO_STORY
            break;
        }
    }

}

void MainWindow::operations()
{

    auto* button = (QPushButton*) sender();
    if( operation == Stop ) {
        if( button->text() == "+" ) {
            var = ui->lineEdit->text().toDouble();
            ui->lineEdit->setText("0");
            operation = Add;
            ui->label->setText(ui->label->text() + QString::number(var) + " + ");
        }
        if( button->text() == "-" ) {
            var = ui->lineEdit->text().toDouble();
            ui->lineEdit->setText("0");
            operation = Sub;
            ui->label->setText(ui->label->text() + QString::number(var) + " - ");
        }
        if( button->text() == "x" ) {
            var = ui->lineEdit->text().toDouble();
            ui->lineEdit->setText("0");
            operation = Mul;
            ui->label->setText(ui->label->text() + QString::number(var) + " x ");
        }
        if( button->text() == "/" ) {
            var = ui->lineEdit->text().toDouble();
            ui->lineEdit->setText("0");
            operation = Div;
            ui->label->setText(ui->label->text() + QString::number(var) + " / ");
        }
        if( button->text() == "%" ) {
            var = ui->lineEdit->text().toDouble();
            ui->lineEdit->setText("0");
            operation = Rem;
            ui->label->setText(ui->label->text() + QString::number(var) + " % ");
        }
        if(button->text() == "root")
        {
            var = ui->lineEdit->text().toDouble();
            ui->lineEdit->setText(QString::number(sqrt(var)));
//            operation = Root;
            ui->label->setText(ui->label->text() + "root(" + QString::number(var) + ") = " + QString::number(sqrt(var)) + "\n");
                    }
    }
}
void MainWindow::on_pushButton_dot_clicked()
{
    if( !ui->lineEdit->text().contains('.')) {
        ui->lineEdit->setText(ui->lineEdit->text() + '.');
    }
}
void MainWindow::digit_numbers()
{
    auto* button = (QPushButton*) sender();
    double  all_numbers;
    QString new_label;
    if (ui->lineEdit->text().contains('E')) {
        ui->lineEdit->setText("0");
    }
        if( ui->lineEdit->text().contains('.') && button->text() == "0" ) {
            new_label = (ui->lineEdit->text() + button->text());
        }
        else {
            all_numbers = (ui->lineEdit->text() + button->text()).toDouble();
            new_label   = QString::number(all_numbers, 'g', 15);
        }
        ui->lineEdit->setText(new_label);

}

void MainWindow::on_pushButton_Inert_clicked()
{
    double all_numbers = (ui->lineEdit->text()).toDouble() * (-1);
    ui->lineEdit->setText(QString::number(all_numbers, 'g', 15));
    TO_STORY
}

