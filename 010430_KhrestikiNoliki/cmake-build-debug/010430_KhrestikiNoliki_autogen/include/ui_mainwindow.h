/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_22;
    QPushButton *pushButton_33;
    QPushButton *pushButton_31;
    QPushButton *pushButton_12;
    QPushButton *pushButton_32;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_21;
    QPushButton *pushButton_23;
    QPushButton *pushButtonWin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(311, 341);
        MainWindow->setMinimumSize(QSize(311, 341));
        MainWindow->setMaximumSize(QSize(311, 341));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 271, 284));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QPushButton(gridLayoutWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setMinimumSize(QSize(80, 80));
        QFont font;
        font.setPointSize(33);
        font.setBold(true);
        pushButton_22->setFont(font);

        gridLayout->addWidget(pushButton_22, 1, 1, 1, 1);

        pushButton_33 = new QPushButton(gridLayoutWidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setMinimumSize(QSize(80, 80));
        pushButton_33->setFont(font);

        gridLayout->addWidget(pushButton_33, 2, 2, 1, 1);

        pushButton_31 = new QPushButton(gridLayoutWidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setMinimumSize(QSize(80, 80));
        pushButton_31->setFont(font);

        gridLayout->addWidget(pushButton_31, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(80, 80));
        pushButton_12->setFont(font);

        gridLayout->addWidget(pushButton_12, 0, 1, 1, 1);

        pushButton_32 = new QPushButton(gridLayoutWidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setMinimumSize(QSize(80, 80));
        pushButton_32->setFont(font);

        gridLayout->addWidget(pushButton_32, 2, 1, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(80, 80));
        pushButton_13->setFont(font);

        gridLayout->addWidget(pushButton_13, 0, 2, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(80, 80));
        pushButton_11->setFont(font);

        gridLayout->addWidget(pushButton_11, 0, 0, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setMinimumSize(QSize(80, 80));
        pushButton_21->setFont(font);

        gridLayout->addWidget(pushButton_21, 1, 0, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setMinimumSize(QSize(80, 80));
        pushButton_23->setFont(font);

        gridLayout->addWidget(pushButton_23, 1, 2, 1, 1);

        pushButtonWin = new QPushButton(centralwidget);
        pushButtonWin->setObjectName(QString::fromUtf8("pushButtonWin"));
        pushButtonWin->setEnabled(true);
        pushButtonWin->setGeometry(QRect(-6, -7, 321, 331));
        pushButtonWin->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 311, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\342\227\216", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButtonWin->setText(QCoreApplication::translate("MainWindow", "Start game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
