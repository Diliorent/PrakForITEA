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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_ostacha;
    QPushButton *pushButton_3;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_4;
    QPushButton *pushButton_root;
    QPushButton *pushButton_doriv;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_7;
    QPushButton *pushButton_Inert;
    QPushButton *pushButton_2;
    QPushButton *pushButton_diliti;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_8;
    QPushButton *pushButton_mnozhiti;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(571, 344);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 334, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(false);
        lineEdit->setClearButtonEnabled(false);

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 10, 0, 10);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_ostacha = new QPushButton(verticalLayoutWidget);
        pushButton_ostacha->setObjectName(QString::fromUtf8("pushButton_ostacha"));
        pushButton_ostacha->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_ostacha, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_AC = new QPushButton(verticalLayoutWidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));
        pushButton_AC->setFlat(false);

        gridLayout->addWidget(pushButton_AC, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_root = new QPushButton(verticalLayoutWidget);
        pushButton_root->setObjectName(QString::fromUtf8("pushButton_root"));
        pushButton_root->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_root, 4, 0, 1, 1);

        pushButton_doriv = new QPushButton(verticalLayoutWidget);
        pushButton_doriv->setObjectName(QString::fromUtf8("pushButton_doriv"));
        pushButton_doriv->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_doriv, 4, 3, 1, 1);

        pushButton_1 = new QPushButton(verticalLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_minus = new QPushButton(verticalLayoutWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_minus, 2, 3, 1, 1);

        pushButton_dot = new QPushButton(verticalLayoutWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_dot, 4, 2, 1, 1);

        pushButton_0 = new QPushButton(verticalLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_Inert = new QPushButton(verticalLayoutWidget);
        pushButton_Inert->setObjectName(QString::fromUtf8("pushButton_Inert"));
        pushButton_Inert->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_Inert, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_diliti = new QPushButton(verticalLayoutWidget);
        pushButton_diliti->setObjectName(QString::fromUtf8("pushButton_diliti"));
        pushButton_diliti->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_diliti, 0, 3, 1, 1);

        pushButton_plus = new QPushButton(verticalLayoutWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_plus, 3, 3, 1, 1);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_mnozhiti = new QPushButton(verticalLayoutWidget);
        pushButton_mnozhiti->setObjectName(QString::fromUtf8("pushButton_mnozhiti"));
        pushButton_mnozhiti->setStyleSheet(QString::fromUtf8("background-color: #1E90FF;"));

        gridLayout->addWidget(pushButton_mnozhiti, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 10, 181, 281));
        label->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 571, 22));
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
        lineEdit->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_ostacha->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_root->setText(QCoreApplication::translate("MainWindow", "root", nullptr));
        pushButton_doriv->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_Inert->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_diliti->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_mnozhiti->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
