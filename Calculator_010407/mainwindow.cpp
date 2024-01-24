#include "mainwindow.h"
#include "./ui_mainwindow.h"

#define TO_STORY ui->label->setText(ui->label->text() + ui->lineEdit->text() + "\n");
double globalVar;
MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->lineEdit->setText("");
    ui->label->setText("");
}

void MainWindow::on_pushButton_mnozhiti_clicked()
{

}

void MainWindow::on_pushButton_doriv_clicked()
{

}


void MainWindow::math_operations()
{
    globalVar = ui->lineEdit->text().toDouble();
    QPushButton* button = (QPushButton*) sender();
    double     all_numbers;
    QString    new_label;
    if( ui->lineEdit->text().contains('.') && button->text() == "0" ) {
        new_label = (ui->lineEdit->text() + button->text());
    }
    else {
        all_numbers = (ui->lineEdit->text() + button->text()).toDouble();
        new_label   = QString::number(all_numbers, 'g', 15);
    }
    ui->lineEdit->setText(new_label);

}
void MainWindow::operations()
{
    QPushButton* button = (QPushButton*) sender();
    double     all_numbers;
    QString    new_label;
    if( ui->lineEdit->text().contains('.') && button->text() == "0" ) {
        new_label = (ui->lineEdit->text() + button->text());
    }
    else {
        all_numbers = (ui->lineEdit->text() + button->text()).toDouble();
        new_label   = QString::number(all_numbers, 'g', 15);
    }
    ui->lineEdit->setText(new_label);

}
void MainWindow::on_pushButton_dot_clicked()
{
    if( !ui->lineEdit->text().contains('.')) {
        ui->lineEdit->setText(ui->lineEdit->text() + '.');
    }
}
void MainWindow::digit_numbers()
{
    QPushButton* button = (QPushButton*) sender();
    double     all_numbers;
    QString    new_label;
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
