//
// Created by ACER on 28.02.2024.
//

#ifndef MYTETRIS_MYTABLEWIDGET_H
#define MYTETRIS_MYTABLEWIDGET_H


#include <QTableWidget>
#include <QTimer>
#include <QRandomGenerator>
#include <QHeaderView>


class MyTableWidget : public QTableWidget {
Q_OBJECT

public:
    explicit MyTableWidget(QWidget *parent = nullptr) : QTableWidget(parent) {
        // Создание таймера
        timer = new QTimer(this);
        // Подключение слота к таймеру
//        connect(timer, &QTimer::timeout, this, &MyTableWidget::changeCellColor);
        // Запуск таймера, чтобы он срабатывал каждую секунду
        timer->start(1000);

        QString styleSheet = "QTableWidget { border: 2px solid #CCCCCC; border-radius: 5px; padding: 5px; }"; // серая рамка толщиной 2px, скругленные углы и отступы

// Установка стиля для вашей таблицы
        this->setStyleSheet(styleSheet);
        this->setRowCount(20);
        this->setColumnCount(10);
        this->horizontalHeader()->setVisible(false);
        this->verticalHeader()->setVisible(false);
        this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        // Установить минимальный размер для всех столбцов
        this->horizontalHeader()->setMinimumSectionSize(20);
        this->verticalHeader()->setMinimumSectionSize(20);
        for (int col = 0; col < this->columnCount(); ++col) {
            this->setColumnWidth(col, 20);
        }
        for (int row = 0; row < this->rowCount(); ++row) {
            this->setRowHeight(row, 20);
        }
        this->resize(this->columnCount() * 20 + 10, this->rowCount() * 20 + 10);
        this->setFocusPolicy(Qt::NoFocus);
        this->setEnabled(false);

    }

private slots:

//    // Слот для изменения цвета ячейки
//    void changeCellColor() {
//        int row = 5; // Индекс строки
//        int column = 5; // Индекс столбца
//        QTableWidgetItem *item = this->item(row, column);
//        if (item) {
//            // Генерация случайного цвета
//            QColor color = QColor::fromRgb(QRandomGenerator::global()->bounded(256),
//                                           QRandomGenerator::global()->bounded(256),
//                                           QRandomGenerator::global()->bounded(256));
//            // Установка цвета ячейки
//            item->setBackground(color);
//        }
//    }

private:
    QTimer *timer; // Таймер для периодического изменения цвета ячейки
public:
    void myResize();
};

#endif //MYTETRIS_MYTABLEWIDGET_H
