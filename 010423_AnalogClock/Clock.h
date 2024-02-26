//
// Created by ACER on 26.02.2024.
//

#ifndef INC_010423_ANALOGCLOCK_CLOCK_H
#define INC_010423_ANALOGCLOCK_CLOCK_H

#include <QWidget>

class Clock  : public QWidget
{
    Q_OBJECT

public:
    Clock(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};


#endif //INC_010423_ANALOGCLOCK_CLOCK_H
