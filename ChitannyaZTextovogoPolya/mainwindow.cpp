#include <QMessageBox>
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    QTextDocument *document = ui->textEdit->document();

    if (searchString.isEmpty() || document->isEmpty())
    {
        QMessageBox::information(this, tr(""), tr("Empty Search Field or Text is empty.\nPlease enter a word and click Find."));
    }
    else
    {
        QTextCursor cursor = ui->textEdit->textCursor();
        cursor.beginEditBlock();

//        // Clear previous highlighting
//        QTextCharFormat plainFormat;
//        plainFormat.setForeground(Qt::black);
//        cursor.setCharFormat(plainFormat);

        // Start new highlighting
        QTextCharFormat colorFormat;
        colorFormat.setForeground(Qt::red);

        QTextCursor highlightCursor(document);
        while (!highlightCursor.isNull() && !highlightCursor.atEnd())
        {
            highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull())
            {
                highlightCursor.mergeCharFormat(colorFormat);
            }
        }

        // Clear the selection to avoid keeping the highlighting on the selected text
        cursor.clearSelection();

        cursor.endEditBlock();
    }
}





void MainWindow::on_blackTextButton_clicked()
{

}

