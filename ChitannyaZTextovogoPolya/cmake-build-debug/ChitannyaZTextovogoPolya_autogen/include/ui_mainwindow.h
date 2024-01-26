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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *blackTextButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 771, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        blackTextButton = new QPushButton(horizontalLayoutWidget);
        blackTextButton->setObjectName(QString::fromUtf8("blackTextButton"));

        horizontalLayout->addWidget(blackTextButton);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 771, 501));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", " \320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\201\320\273\320\276\320\262\320\276 \320\264\320\273\321\217 \320\277\320\276\321\210\321\203\320\272\321\203:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\320\260\321\202\320\270 \320\277\320\276\321\210\321\203\320\272", nullptr));
        blackTextButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\321\200\320\260\321\202\320\270 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\217", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; font-weight:700; color:#3a3a3c;\">	\320\232\320\275\320\270\320\263\320\260 \320\241\321\203\320\275\321\214-\320\264\320\267\320\270 \342\200\234\320\234\320\270\321\201\321\202\320\265\321\206\321\202\320\262\320\276 \320\262\321\226\320\271\320\275\320\270\342\200\235 \320\262\320\266\320\265 \320\264\320\260\320\262\320\275\320\276 \321\201\321\202\320\260\320\273\320\260 \320\272\321\203\320\273\321\214\321\202\320\276\320\262\320\276\321"
                        "\216.\302\240\320\220\320\273\320\265 \320\262 \320\274\320\276\321\227 \321\200\321\203\320\272\320\270 \320\277\320\276\321\202\321\200\320\260\320\277\320\270\320\273\320\260 \320\262\321\226\320\264\320\275\320\276\321\201\320\275\320\276 \320\275\320\265\320\264\320\260\320\262\320\275\320\276. &quot;\320\222\320\270\320\264\320\260\320\262\320\275\320\270\321\206\321\202\320\262\320\276 \320\241\321\202\320\260\321\200\320\276\320\263\320\276 \320\233\320\265\320\262\320\260&quot; \320\262\320\270\320\264\320\260\320\273\320\276 \321\217\320\272\321\226\321\201\320\275\320\270\320\271 \321\203\320\272\321\200\320\260\321\227\320\275\321\201\321\214\320\272\320\270\320\271 \320\277\320\265\321\200\320\265\320\272\320\273\320\260\320\264 \321\226 \321\217 \320\275\320\265 \321\201\321\202\321\200\320\270\320\274\320\260\320\262\321\201\321\217, \321\211\320\276\320\261 \320\275\320\265 \320\277\321\200\320\276\321\207\320\270\321\202\320\260\321\202\320\270.\302\240\320\242\320\276\320\274\321\203 \321\203"
                        " \321\206\321\214\320\276\320\274\321\203 \320\267\320\260\320\277\320\270\321\201\321\226 \321\217 \320\264\321\226\320\273\321\216\321\201\321\214 \321\201\321\226\320\274\320\276\320\274\320\260 \321\206\320\270\321\202\320\260\321\202\320\260\320\274\320\270 \320\267 \320\272\320\275\320\270\320\263\320\270 \321\226 \321\202\321\200\321\214\320\276\320\274\320\260 \321\203\321\200\320\276\320\272\320\260\320\274\320\270, \321\217\320\272\321\226 \320\267\320\260\320\275\320\276\321\202\321\203\320\262\320\260\320\262 \321\201\320\276\320\261\321\226 \321\203 \342\200\234\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\266\320\270\321\202\321\202\321\217\342\200\235.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p align=\"center\" style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; font-weight:700; color:#3a3a3c;\">7 \321\206\320\270\321\202\320\260\321\202 \320\267 \320\272\320\275\320\270\320\263\320\270 \320\241\321\203\320\275\321\214-\320\224\320\267\320\270 \342\200\234\320\234\320\270\321\201\321\202\320\265\321\206\321\202\320\262\320\276 \320\262\321\226\320\271\320\275\320\270\342\200\235</span><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">1. \320\222\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\276\320\262\321\203\320\262\320\260\321\202\320\270 \321\201\320\277\321"
                        "\200\320\270\321\217\321\202\320\273\320\270\320\262\321\226 \321\203\320\274\320\276\320\262\320\270 \320\264\320\273\321\217 \320\267\320\264\320\276\320\261\321\203\321\202\321\202\321\217 \320\275\320\260\320\271\320\261\321\226\320\273\321\214\321\210\320\276\321\227 \321\201\320\270\320\273\320\270 \321\226 \320\262\320\277\320\273\320\270\320\262\320\262\321\203, \320\262\320\270\321\205\320\276\320\264\321\217\321\207\320\270 \320\267 \321\201\320\270\321\202\321\203\320\260\321\206\321\226\321\227, \342\200\223 \321\206\320\265 \321\217 \320\275\320\260\320\267\320\270\320\262\320\260\321\216 \321\201\321\202\321\200\320\260\321\202\320\265\320\263\321\226\321\207\320\275\320\276\321\216 \320\277\320\265\321\200\320\265\320\262\320\260\320\263\320\276\321\216.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a"
                        "3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">2. \320\242\320\276\320\271 \321\205\321\202\320\276 \320\267\320\264\320\276\320\261\321\203\320\264\320\265 \321\201\321\202\320\276 \320\277\320\265\321\200\320\265\320\274\320\276\320\263 \321\203 \321\201\321\202\320\260 \320\277\320\276\321\224\320\264\320\270\320\275\320\272\320\260\321\205 \342\200\223 \320\275\320\265 \320\263\320\265\321\200\320\276\320\271; \320\263\320\265\321\200\320\276\320\271\321\201\321\202\320\262\320\276 \342\200\224 \320\277\321\226\320\264\320\272\320\276\321\200\320\270\321\202\320\270 \320\260\320\275\321\202\320\260\320\263\320\276\320\275\321\226\321\201\321\202\321\201\321\214\320\272\320\265 \320\262\321\226\320\271\321\201\321\214\320\272\320\276 \320\262\320\267\320\260\320\263"
                        "\320\260\320\273\321\226 \320\261\320\265\320\267 \320\261\320\276\321\200\320\276\321\202\321\214\320\261\320\270.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">3. \342\200\246 \320\275\320\265\320\277\320\265\321\200\320\265\320\262\320\265\321\200\321\210\320\265\320\275\320\260 \320\262\321\226\320\271\321\201\321\214\320\272\320\276\320\262\320\260 \321\201\321\202\321\200\320\260\321\202\320\265\320\263\321\226\321\217 \342\200\223 \320\267\321\200\321\203\320\271\320\275\321\203\320\262\320\260\321\202\320\270 \320\277\320"
                        "\273\320\260\320\275\320\270 \320\271 \321\201\321\202\321\200\320\260\321\202\320\265\320\263\321\226\321\227 \321\201\321\203\320\277\321\200\320\276\321\202\320\270\320\262\320\275\320\270\320\272\320\260, \320\264\320\265\321\211\320\276 \321\201\320\273\320\260\320\261\321\210\320\260 \342\200\223 \320\260\321\202\320\260\320\272\321\203\320\262\320\260\321\202\320\270 \320\262\320\276\321\200\320\276\320\266\321\226 \321\201\320\276\321\216\320\267\320\270 \321\202\320\260 \321\201\321\203\320\262\342\200\231\321\217\320\267\321\226; \321\211\320\265 \320\263\321\226\321\200\321\210\320\260 \342\200\223 \320\275\320\260\320\277\320\260\320\264\320\260\321\202\320\270 \320\275\320\260 \320\260\321\200\320\274\321\226\321\216 \320\262\320\276\321\200\320\276\320\263\320\260; \321\226 \320\275\320\260\320\271\320\263\321\226\321\200\321\210\320\260 \342\200\223 \320\272\320\270\320\264\320\260\321\202\320\270\321\201\321\214 \320\275\320\260 \321\203\320\272\321\200\321\226\320\277\320\273\320\265\320\275\321"
                        "\226 \320\274\321\203\321\200\320\260\320\274\320\270 \320\274\321\226\321\201\321\202\320\260.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">4. \320\237\342\200\231\321\217\321\202\321\214 \321\207\320\270\320\275\320\275\320\270\320\272\321\226\320\262, \320\260\320\261\320\270 \320\277\320\265\321\200\320\265\320\264\320\261\320\260\321\207\320\270\321\202\320\270, \321\205\321\202\320\276 \320\267\320\264\320\276\320\261\321\203\320\264\320\265 \320\277\320\265\321\200\320\265\320\274\320\276\320\263\321\203:</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">\342\200\223 \320\263\320\265\320\275\320\265\321\200\320\260\320\273, \321\217\320\272\320\270\320\271 \320\267\320\275\320\260\321\224, \320\272\320\276\320\273\320\270 \320\261\320\270\321\202\320\270\321\201\321\217, \320\260 \320\272\320\276\320\273\320\270 \320\275\321\226;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; fon"
                        "t-size:large; color:#3a3a3c;\">\342\200\223 \320\263\320\265\320\275\320\265\321\200\320\260\320\273, \321\211\320\276 \320\267\320\275\320\260\321\224 \320\261\321\226\320\273\321\214\321\210\320\265 \321\200\321\226\320\267\320\275\320\270\321\205 \321\201\320\277\320\276\321\201\320\276\320\261\321\226\320\262 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\217 \320\262\321\226\320\271\321\201\321\214\320\272\320\260;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">\342\200\223 \320\260\321\200\320\274\321\226\321\217, \320\262 \321\217\320\272\321\226\320\271 \321\201\321\202\320\260\321\200\321\210\320\270\320\275\320\270 \320\271 \320\277\321\226\320\264\320\273\320\265\320\263\320\273\321\226 \320\276\320\261\342\200\231\321\224\320\264\320\275\320\260\320\275"
                        "\321\226 \321\224\320\264\320\270\320\275\320\276\321\216 \320\274\320\265\321\202\320\276\321\216;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">\342\200\223 \320\260\321\200\320\274\321\226\321\217, \321\211\320\276 \320\262\320\270\321\201\321\202\320\260\320\262\320\273\321\217\321\224 \321\206\321\226\320\273\320\272\320\276\320\274 \320\277\321\226\320\264\320\263\320\276\321\202\320\276\320\262\320\273\320\265\320\275\320\270\321\205 \320\262\320\276\321\217\320\272\321\226\320\262 \320\277\321\200\320\276\321\202\320\270 \320\275\320\265\320\277\321\226\320\264\320\263\320\276\321\202\320\276\320\262\320\273\320\265\320\275\320\270\321\205;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\">"
                        "<span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">\342\200\223 \320\262\321\226\320\271\321\201\321\214\320\272\320\276, \320\263\320\265\320\275\320\265\321\200\320\260\320\273 \321\217\320\272\320\276\320\263\320\276 \320\272\320\262\320\260\320\273\321\226\321\204\321\226\320\272\320\276\320\262\320\260\320\275\320\270\320\271, \320\260 \321\226\320\274\320\277\320\265\321\200\320\260\321\202\320\276\321\200 \342\200\223 \320\275\320\265 \320\262\321\202\321\200\321\203\321\207\320\260\321\224\321\202\321\214\321\201\321\217.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><s"
                        "pan style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">5. \320\242\320\276\320\271, \321\205\321\202\320\276 \320\267\320\275\320\260\321\224 \320\262\320\276\321\200\320\276\320\263\320\260 \320\271 \321\201\320\265\320\261\320\265, \320\275\321\226\320\272\320\276\320\273\320\270 \320\275\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\321\224 \320\262\321\226\320\271\320\275\320\270;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">\320\245\321\202\320\276 \320\275\320\265 \320\267\320\275\320\260\321\224 \320\262\320\276\321\200\320\276\320\263\320\260, \320\260\320\273\320\265 \320\267\320\275\320\260\321\224 \321\201\320\265\320\261\320\265, \321\226\320\275\320\272\320\276\320\273\320\270 \320\262\320\270\320\263\321\200\320\260\321\224, \320\260 \321\226\320\275"
                        "\320\272\320\276\320\273\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\321\224;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">\320\242\320\276\320\271, \321\205\321\202\320\276 \320\275\320\265 \320\267\320\275\320\260\321\224 \320\275\321\226 \321\201\320\265\320\261\320\265, \320\275\321\226 \320\262\320\276\321\200\320\276\320\263\320\260, \320\277\321\200\320\276\320\263\321\200\320\260\321\224 \320\272\320\276\320\266\320\275\321\203 \320\261\320\260\321\202\320\260\320\273\321\226\321\216.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p sty"
                        "le=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">6. \320\243 \321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\211\321\226, \320\272\320\276\320\273\320\270 \320\275\320\265 \320\274\320\276\320\266\320\265\321\210 \320\262\320\270\320\263\321\200\320\260\321\202\320\270, \342\200\223 \320\267\320\260\321\205\320\270\321\211\320\260\320\271\321\201\321\217, \321\217\320\272\321\211\320\276 \321\205\320\276\321\207\320\265\321\210 \320\262\320\270\320\263\321\200\320\260\321\202\320\270 \342\200\223 \320\274\321\203\321\201\320\270\321\210 \320\275\320\260\320\277\320\260\320\264\320\260\321\202\320\270.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; fon"
                        "t-size:14px; color:#3a3a3c; background-color:#ffffff;\">\302\240</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Lato','arial','sans-serif'; font-size:large; color:#3a3a3c;\">7. \320\235\320\265 \320\274\320\260\321\224\321\210 \320\277\320\276\321\202\320\265\320\275\321\206\321\226\320\271\320\275\320\276\321\227 \320\277\320\265\321\200\320\265\320\262\320\260\320\263\320\270 \342\200\223 \320\275\320\265 \320\264\321\226\320\271.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
