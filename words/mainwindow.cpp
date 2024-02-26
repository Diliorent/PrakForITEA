#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QPalette>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //setStyleSheet("background-image: url(:/images/blueNormal.jpg);background-repeat: no-repeat;");
    srand(time(nullptr));
    ui->setupUi(this);
    word = wordlist[rand() % wordlist.size()];
    dispWord = QString(word.length(), '*');
    /*
    dispWord="";
    for (int i=0; i<word.length();i++)
     {dispWord=dispWord+"_ ";}
    */
    ui->label_find->setStyleSheet("font-size: 18px;");
    ui->label_infoWin->setStyleSheet("font-size: 18px;");
    ui->label_find->setText(dispWord);

    //SetForm();
//    QPixmap first(":/images/paper.png");
//    ui->label_fone->setPixmap(first);
//    QPixmap white(":/images/white.png");
//    ui->label_1->setPixmap(white);
//    ui->label_2->setPixmap(white);
//    ui->label_3->setPixmap(white);
//    ui->label_4->setPixmap(white);
//    ui->label_5->setPixmap(white);
//    ui->label_7->setPixmap(white);
//    ui->label->setPixmap(white);
//    ui->label_6->setPixmap(white);

}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::SetForm()
{   QPixmap test(":/images/paper11.png");
    QPixmap first(":/images/paper.png");
    //ui->label_fone->setPixmap(first);
    QPixmap white(":/images/blueNormal.jpg");
   //ui->label_1->setPixmap(white);
    //ui->label_2->setPixmap(white);
    //ui->label_3->setPixmap(white);
//    ui->label_4->setPixmap(white);
//    ui->label_5->setPixmap(white);
//    ui->label_7->setPixmap(white);
//    ui->label->setPixmap(white);
//    ui->label_6->setPixmap(white);

}
bool MainWindow::check(QString letter)
{
    bool foundLetter = false;
    for (int i = 0; i < word.length(); i++)
    {
        if (word.at(i) == letter.at(0))
        {
            // Замінюємо відповідний символ у слові-загадці на введену літеру
            dispWord.replace(i, 1, letter);
            foundLetter = true;
            found++;
        }
    }

    // Оновлюємо відображення загаданого слова
    ui->label_find->setText(dispWord);

    // Перевірка на перемогу чи поразку
    if (found == word.length())
    {
        ui->label_infoWin->setText("Ви перемогли!");
        game = false;
    }
    else if (!foundLetter)
    {

        tries--;
        if(tries==6)
        {
            ui->label_1->setText(" ");
            ui->label_1->setAttribute(Qt::WA_TranslucentBackground);

        }
        else if(tries==5)
        {
            ui->label_2->setText(" ");
            ui->label_2->setAttribute(Qt::WA_TranslucentBackground);
        }
        else if(tries==4)
        {
            ui->label_3->setText(" ");
            ui->label_3->setAttribute(Qt::WA_TranslucentBackground);
        }
        else if(tries==3)
        {   ui->label_4->setText(" ");
            ui->label_4->setAttribute(Qt::WA_TranslucentBackground);

        }
        else if(tries==2)
        {   ui->label_7->setText(" ");
            ui->label_7->setAttribute(Qt::WA_TranslucentBackground);
        }
        else if(tries==1)
        {
            ui->label_5->setText(" ");
            ui->label_5->setAttribute(Qt::WA_TranslucentBackground);
        }

        if (tries == 0)
        {
            ui->label->setText(" ");
            ui->label->setAttribute(Qt::WA_TranslucentBackground);
            ui->label_6->setText(" ");
            ui->label_6->setAttribute(Qt::WA_TranslucentBackground);
            ui->label_infoWin->setText("Ви програли! Слово: " + word);
            game = false;
        }
    }
    return foundLetter;
}

void MainWindow::on_pushButton_A_clicked()
{
    ui->pushButton_A->setText("А");
        ui->pushButton_A->setEnabled(false);
        bool correctLetter = check("А");
            if (correctLetter)
        {
        ui->pushButton_A->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
        }
        else
        {
        ui->pushButton_A->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
        }
}

void MainWindow::on_pushButton_B_clicked()
{
    ui->pushButton_B->setText("Б");
    ui->pushButton_B->setEnabled(false);
    bool correctLetter = check("Б");
    if (correctLetter)
    {
        ui->pushButton_B->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_B->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_V_clicked()
{
    ui->pushButton_V->setText("В");
    ui->pushButton_V->setEnabled(false);
    bool correctLetter = check("В");
    if (correctLetter)
    {
        ui->pushButton_V->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_V->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_G_clicked()
{
    ui->pushButton_G->setText("Г");
    ui->pushButton_G->setEnabled(false);
    bool correctLetter = check("Г");
    if (correctLetter)
    {
        ui->pushButton_G->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_G->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_GG_clicked()
{
    ui->pushButton_GG->setText("Ґ");
    ui->pushButton_GG->setEnabled(false);
    bool correctLetter = check("Ґ");
    if (correctLetter)
    {
        ui->pushButton_GG->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_GG->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_D_clicked()
{
    ui->pushButton_D->setText("Д");
    ui->pushButton_D->setEnabled(false);
    bool correctLetter = check("Д");
    if (correctLetter)
    {
        ui->pushButton_D->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_D->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_E_clicked()
{
    ui->pushButton_E->setText("Е");
    ui->pushButton_E->setEnabled(false);
    bool correctLetter = check("Е");
    if (correctLetter)
    {
        ui->pushButton_E->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_E->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_YE_clicked()
{
    ui->pushButton_YE->setText("Є");
    ui->pushButton_YE->setEnabled(false);
    bool correctLetter = check("Є");
    if (correctLetter)
    {
        ui->pushButton_YE->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_YE->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_ZHE_clicked()
{
    ui->pushButton_ZHE->setText("Ж");
    ui->pushButton_ZHE->setEnabled(false);
    bool correctLetter = check("Ж");
    if (correctLetter)
    {
        ui->pushButton_ZHE->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_ZHE->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_ZE_clicked()
{
    ui->pushButton_ZE->setText("З");
    ui->pushButton_ZE->setEnabled(false);
    bool correctLetter = check("З");
    if (correctLetter)
    {
        ui->pushButton_ZE->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_ZE->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_UI_clicked()
{
    ui->pushButton_UI->setText("И");
    ui->pushButton_UI->setEnabled(false);
    bool correctLetter = check("И");
    if (correctLetter)
    {
        ui->pushButton_UI->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_UI->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_I_clicked()
{
    ui->pushButton_I->setText("І");
    ui->pushButton_I->setEnabled(false);
    bool correctLetter = check("І");
    if (correctLetter)
    {
        ui->pushButton_I->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_I->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }}

void MainWindow::on_pushButton_YI_clicked()
{
    ui->pushButton_YI->setText("Ї");
    ui->pushButton_YI->setEnabled(false);
    bool correctLetter = check("Ї");
    if (correctLetter)
    {
        ui->pushButton_YI->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_YI->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_YOT_clicked()
{
    ui->pushButton_YOT->setText("Й");
    ui->pushButton_YOT->setEnabled(false);
    bool correctLetter = check("Й");
    if (correctLetter)
    {
        ui->pushButton_YOT->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_YOT->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_K_clicked()
{
    ui->pushButton_K->setText("К");
    ui->pushButton_K->setEnabled(false);
    bool correctLetter = check("К");
    if (correctLetter)
    {
        ui->pushButton_K->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_K->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_L_clicked()
{
    ui->pushButton_L->setText("Л");
    ui->pushButton_L->setEnabled(false);
    bool correctLetter = check("Л");
    if (correctLetter)
    {
        ui->pushButton_L->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_L->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_M_clicked()
{
    ui->pushButton_M->setText("М");
    ui->pushButton_M->setEnabled(false);
    bool correctLetter = check("М");
    if (correctLetter)
    {
        ui->pushButton_M->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_M->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_N_clicked()
{
    ui->pushButton_N->setText("Н");
    ui->pushButton_N->setEnabled(false);
    bool correctLetter = check("Н");
    if (correctLetter)
    {
        ui->pushButton_N->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_N->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_O_clicked()
{
    ui->pushButton_O->setText("О");
    ui->pushButton_O->setEnabled(false);
    bool correctLetter = check("О");
    if (correctLetter)
    {
        ui->pushButton_O->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_O->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_P_clicked()
{
    ui->pushButton_P->setText("П");
    ui->pushButton_P->setEnabled(false);
    bool correctLetter = check("П");
    if (correctLetter)
    {
        ui->pushButton_P->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_P->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_R_clicked()
{
    ui->pushButton_R->setText("Р");
    ui->pushButton_R->setEnabled(false);
    bool correctLetter = check("Р");
    if (correctLetter)
    {
        ui->pushButton_R->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_R->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_S_clicked()
{
    ui->pushButton_S->setText("С");
    ui->pushButton_S->setEnabled(false);
    bool correctLetter = check("С");
    if (correctLetter)
    {
        ui->pushButton_S->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_S->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }}

void MainWindow::on_pushButton_T_clicked()
{
    ui->pushButton_T->setText("Т");
    ui->pushButton_T->setEnabled(false);
    bool correctLetter = check("Т");
    if (correctLetter)
    {
        ui->pushButton_T->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_T->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_U_clicked()
{
    ui->pushButton_U->setText("У");
    ui->pushButton_U->setEnabled(false);
    bool correctLetter = check("У");
    if (correctLetter)
    {
        ui->pushButton_U->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_U->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_EF_clicked()
{
    ui->pushButton_EF->setText("Ф");
    ui->pushButton_EF->setEnabled(false);
    bool correctLetter = check("Ф");
    if (correctLetter)
    {
        ui->pushButton_EF->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_EF->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_HA_clicked()
{
    ui->pushButton_HA->setText("Х");
    ui->pushButton_HA->setEnabled(false);
    bool correctLetter = check("Х");
    if (correctLetter)
    {
        ui->pushButton_HA->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_HA->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButtonTS_clicked()
{
    ui->pushButtonTS->setText("Ц");
    ui->pushButtonTS->setEnabled(false);
    bool correctLetter = check("Ц");
    if (correctLetter)
    {
        ui->pushButtonTS->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButtonTS->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }}

void MainWindow::on_pushButton_CH_clicked()
{
    ui->pushButton_CH->setText("Ч");
    ui->pushButton_CH->setEnabled(false);
    bool correctLetter = check("Ч");
    if (correctLetter)
    {
        ui->pushButton_CH->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_CH->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_SH_clicked()
{
    ui->pushButton_SH->setText("Ш");
    ui->pushButton_SH->setEnabled(false);
    bool correctLetter = check("Ш");
    if (correctLetter)
    {
        ui->pushButton_SH->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_SH->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_SCH_clicked()
{
    ui->pushButton_SCH->setText("Щ");
    ui->pushButton_SCH->setEnabled(false);
    bool correctLetter = check("Щ");
    if (correctLetter)
    {
        ui->pushButton_SCH->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_SCH->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_MYAHKIY_clicked()
{
    ui->pushButton_MYAHKIY->setText("Ь");
    ui->pushButton_MYAHKIY->setEnabled(false);
    bool correctLetter = check("Ь");
    if (correctLetter)
    {
        ui->pushButton_MYAHKIY->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_MYAHKIY->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_YU_clicked()
{
    ui->pushButton_YU->setText("Ю");
    ui->pushButton_YU->setEnabled(false);
    bool correctLetter = check("Ю");
    if (correctLetter)
    {
        ui->pushButton_YU->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_YU->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }
}

void MainWindow::on_pushButton_YA_clicked()
{
    ui->pushButton_YA->setText("Я");
    ui->pushButton_YA->setEnabled(false);
    bool correctLetter = check("Я");
    if (correctLetter)
    {
        ui->pushButton_YA->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_YA->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }}

void MainWindow::on_pushButton_APOSTR_clicked()
{
    ui->pushButton_APOSTR->setText("'");
    ui->pushButton_APOSTR->setEnabled(false);
    bool correctLetter = check("'");
    if (correctLetter)
    {
        ui->pushButton_APOSTR->setStyleSheet("background-color: green;"); // Зелений фон для правильної літери
    }
    else
    {
        ui->pushButton_APOSTR->setStyleSheet("background-color: red;"); // Червоний фон для неправильної літери
    }}

