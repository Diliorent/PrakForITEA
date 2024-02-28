#include <QSignalMapper>
#include <QShortcut>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "MyTableWidget.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    MyTableWidget *myTableWidget = new MyTableWidget(this);
    ui->horizontalLayout->addWidget(myTableWidget);
    myTableWidget->myResize();


    QShortcut *hotkey = new QShortcut(QKeySequence("W"), this);
    connect(hotkey, &QShortcut::activated, this, &MyWidget::changeButtonColor);


//    this->installEventFilter(this);




}

MainWindow::~MainWindow()
{
    delete ui;
}


