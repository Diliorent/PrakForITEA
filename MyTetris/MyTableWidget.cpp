
#include "MyTableWidget.h"

void MyTableWidget::myResize() {

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
