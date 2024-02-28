#include "mainwindow.h"
#include <QtWidgets>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(473,503);
    ui->pushButton_NewGame->setVisible(false);
    ui->pushButton_Exit->setVisible(false);
    ui->label_Score->setVisible(true);
    ui->tableWidget->setVisible(false);
    ui->tableWidget_2->move(1000, 1000);
//    QTimer* timer = new QTimer(this); // Создание таймера

    connect(ui->pushButton_Exit, &QPushButton::clicked, this, &MainWindow::close);
//    QTimer* timer = new QTimer(this); // Создание таймера
//    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(startTimer()));
//    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer())); // Подключение сигнала к слоту
//    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (!isStarted) {
        updateTable();
//        QTimer* timer = new QTimer(this); // Создание таймера
        connect(timer, SIGNAL(timeout()), this, SLOT(onTimer())); // Подключение сигнала к слоту

        timer->start(1000 * tetrix_field.level); // Запуск таймера с интервалом 1000 миллисекунд (1 секунда)
        isStarted = true;
    }
}
void MainWindow::on_pushButton_NewGame_clicked()
{
    tetrix_field.level = 1;
    ui->pushButton_NewGame->setVisible(false);
    ui->pushButton_Exit->setVisible(false);
//    ui->label_Score->setVisible(false);

    ui->tableWidget->setVisible(true);
    ui->pushButton->setVisible(true);

    timer->start();
    tetrix_field.startNewGame();

}
void MainWindow::updateTable()
{

    timer->start(1000); // Запуск таймера с интервалом 1000 миллисекунд (1 секунда)
    ui->tableWidget->setVisible(true);
    QString styleSheet = "QTableWidget { border: 2px solid #CCCCCC; border-radius: 5px; padding: 5px; }"; // серая рамка толщиной 2px, скругленные углы и отступы

    ui->tableWidget->setStyleSheet(styleSheet);
    // Отключение любого взаимодействия с таблицей
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget_2->setFocus();
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->label->hide();
    int numRows = 20; // Кількість рядків
    int numCols = 10; // Кількість стовпців

    ui->tableWidget->setRowCount(numRows);
    ui->tableWidget->setColumnCount(numCols);

    ui->tableWidget->horizontalHeader()->hide();
    ui->tableWidget->verticalHeader()->hide();
    ui->tableWidget->verticalScrollBar();
    ui->tableWidget->horizontalScrollBar()->hide();
//    ui->tableWidget.

    // Заповнення таблиці квадратами різних кольорів
    for ( int col = 0; col < numRows; ++col ) {
        ui->tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        ui->tableWidget->verticalHeader()->setMinimumSectionSize(20);
        ui->tableWidget->setColumnWidth(col, 20);
        ui->tableWidget->setRowHeight(col, 20);
        for ( int row = 0; row < numRows; ++row ) {
            QTableWidgetItem* item = new QTableWidgetItem();
//            QColor color = QColor(rand() % 256, rand() % 256, rand() % 256);
            QColor color = QColor(Qt::lightGray);

            item->setBackground(color);
            ui->tableWidget->setItem(row, col, item);

        }
    }
    ui->tableWidget->resize(ui->tableWidget->columnCount() * 20 + 14, ui->tableWidget->rowCount() * 20 + 12);
}
void MainWindow::keyPressEvent(QKeyEvent* event)
{
//    QColor color = QColor(rand() % 256, rand() % 256, rand() % 256);
//    ui->tableWidget->item(3, 4)->setBackground(color);
    switch (event->key()) {
        case Qt::Key_Left: {
            leftCollisionCheck();
            updateField();
            ui->tableWidget->item(currentPosition[0], currentPosition[1])->setBackground(Qt::blue); // При нажатии стрелки влево меняем цвет ячейки на красный
        }
            break;
        case Qt::Key_Right: {
            rightCollisionCheck();
            updateField();
            ui->tableWidget->item(currentPosition[0], currentPosition[1])->setBackground(Qt::blue); // При нажатии стрелки вправо меняем цвет ячейки на синий
        }
            break;
        case Qt::Key_Down: {
            if( currentPosition[0] < 19 ) {
                currentPosition[0] += 1;
            }
            horizontalCollisionCheck();
            updateField();
            ui->tableWidget->item(currentPosition[0], currentPosition[1])->setBackground(Qt::blue); // При нажатии стрелки вправо меняем цвет ячейки на синий
        }
            break;
        case Qt::Key_Up: {
            if( currentPosition[0] > 0 ) {
                currentPosition[0] -= 1;
            }
            updateField();
            ui->tableWidget->item(currentPosition[0], currentPosition[1])->setBackground(Qt::blue); // При нажатии стрелки вправо меняем цвет ячейки на синий
        }
            break;
//             Обработка других клавиш
    }
}
void MainWindow::updateField() // Заповнює поле
{
    tetrix_field.checkForTetris();
    ui->label_Score->setText("Your score: " + QString::number(tetrix_field.score));
    for ( int row = 0; row < 20; ++row ) {
        for ( int col = 0; col < 10; ++col ) {
            switch (tetrix_field.field[row][col]) {
                case 0: // void
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::lightGray);
                    break;
                }
                case 1: // palka
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::blue);
                    break;
                }
                case 2: // kvadrat
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::magenta);
                    break;
                }
                case 3: // ge
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::yellow);
                    break;
                }
                case 4: // ge naoborot
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::red);
                    break;
                }
                case 5: // zyu
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::darkYellow);
                    break;
                }
                case 6: // zyu naoborot
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::darkGreen);
                    break;
                }
                case 7: // T
                {
                    ui->tableWidget->item(row, col)->setBackground(Qt::cyan);
                    break;
                }

            }
        }
    }
}
void MainWindow::onTimer()
{

//    ui->pushButton->setText(QString::number(currentPosition[0]));
    horizontalCollisionCheck();
    if( currentPosition[0] < 19 ) {
        currentPosition[0] += 1;
    }
    updateField();
    ui->tableWidget->item(currentPosition[0], currentPosition[1])->setBackground(Qt::blue); // При нажатии стрелки вправо меняем цвет ячейки на синий
}
void MainWindow::startTimer()
{
    timer->start(1000); // Запускаем таймер с интервалом 1000 миллисекунд (1 секунда) при нажатии на кнопку
}
void MainWindow::horizontalCollisionCheck()
{
    if (tetrix_field.field[currentPosition[row]+1][currentPosition[col]] != 0)
    {
        if(currentPosition[row] == 0 ){
            GAMEOVER();
            return;
        }
        tetrix_field.field[currentPosition[row]][currentPosition[col]] = 1;
        currentPosition[row] = 0;
        currentPosition[col] = 4;
    }
}
void MainWindow::leftCollisionCheck()
{
    if (currentPosition[col] > 0 && tetrix_field.field[currentPosition[row]][currentPosition[col]-1] == 0)
    {
                currentPosition[1] -= 1;
    }

}
void MainWindow::rightCollisionCheck()
{
    if( currentPosition[1] < 9 && tetrix_field.field[currentPosition[row]][currentPosition[col]+1] == 0)
    {
        currentPosition[1] += 1;
    }

}
void MainWindow::GAMEOVER()
{
//    ui->pushButton->setText("ops");
    timer->stop();
    tetrix_field.startNewGame();
    ui->tableWidget->setVisible(false);
    ui->pushButton->setVisible(false);

//    ui->label_Score->setVisible(true);
    ui->pushButton_Exit->setVisible(true);
    ui->pushButton_NewGame->setVisible(true);



}



