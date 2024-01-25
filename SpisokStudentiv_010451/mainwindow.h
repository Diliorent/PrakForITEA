#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include "./ui_mainwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_radioButton_toggled(bool checked);

    void on_pushButton_Add_clicked();

    void on_pushButton_Del_clicked();

    void on_pushButton_Imp_clicked();

    void on_pushButton_Exp_clicked();

    void addRow();

    void removeLastRow();

    void updateTable();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
