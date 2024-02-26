//
// Created by ACER on 26.02.2024.
//

#include "Clock.h"
#include <QPainter>
#include <QTime>
#include <QTimer>
#include <QWidget>

Clock::Clock(QWidget *parent) {
    // Створення таймера для оновлення годинника кожної секунди
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&Clock::update));
    timer->start(1000);
    setWindowTitle(tr("Аналоговий годинник"));
    resize(200, 200);
}

void Clock::paintEvent(QPaintEvent *) {
//     Визначення положення вказівників годин та хвилин
    static const QPoint hourHand[4] = {
            QPoint(5, 14),
            QPoint(-5, 14),
            QPoint(-4, -71),
            QPoint(4, -71)
    };

    static const QPoint minuteHand[4] = {
            QPoint(4, 14),
            QPoint(-4, 14),
            QPoint(-3, -89),
            QPoint(3, -89)
    };

    // Визначення кольорів для вказівників годин, хвилин та секунд
    const QColor hourColor(palette().color(QPalette::Text));
    const QColor minuteColor(palette().color(QPalette::Text));

    // Визначення розміру годинника
    int side = qMin(width(), height() - 20);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Трансформація координат для центрування годинника та зміщення на вказаний зазор для цифрового
    painter.translate(width() / 2, height() / 2 - 10);
    painter.scale(side / 200.0, side / 200.0);

    // Отримання поточного часу
    QTime time = QTime::currentTime();

    // Намалювати вказівник годин
    painter.setPen(Qt::NoPen);
    painter.setBrush(hourColor);
    painter.save();
    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
    painter.drawConvexPolygon(hourHand, 4);
    painter.restore();

    // Намалювати мітки годин
    for (int i = 0; i < 12; ++i) {
        painter.drawRect(73, -3, 16, 6);
        painter.rotate(30.0);
    }

    // Намалювати вказівник хвилин
    painter.setBrush(minuteColor);
    painter.save();
    painter.rotate(6.0 * time.minute());
    painter.drawConvexPolygon(minuteHand, 4);
    painter.restore();

    // Намалювати мітки хвилин
    painter.setPen(minuteColor);
    for (int j = 0; j < 60; ++j) {
        painter.drawLine(92, 0, 96, 0);
        painter.rotate(6.0);
    }

    // Додавання цифрового годинника
    painter.resetTransform();
    painter.translate(0, height() - 20);
    painter.setFont(QFont("Arial", 16));
    QString timeString = time.toString("hh:mm:ss");
    QRect textRect = painter.fontMetrics().boundingRect(timeString);
    textRect.moveCenter(QPoint(width() / 2, textRect.height() / 2));
    painter.drawText(textRect, timeString);
}
