#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QMediaPlayer>
//#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_A_clicked();
    void on_pushButton_B_clicked();
    void on_pushButton_V_clicked();
    void on_pushButton_G_clicked();
    void on_pushButton_GG_clicked();
    void on_pushButton_D_clicked();
    void on_pushButton_E_clicked();
    void on_pushButton_YE_clicked();
    void on_pushButton_ZHE_clicked();
    void on_pushButton_ZE_clicked();
    void on_pushButton_UI_clicked();
    void on_pushButton_I_clicked();
    void on_pushButton_YI_clicked();
    void on_pushButton_YOT_clicked();
    void on_pushButton_K_clicked();
    void on_pushButton_L_clicked();
    void on_pushButton_M_clicked();
    void on_pushButton_N_clicked();
    void on_pushButton_O_clicked();
    void on_pushButton_P_clicked();
    void on_pushButton_R_clicked();
    void on_pushButton_S_clicked();
    void on_pushButton_T_clicked();
    void on_pushButton_U_clicked();
    void on_pushButton_EF_clicked();
    void on_pushButton_HA_clicked();
    void on_pushButtonTS_clicked();
    void on_pushButton_CH_clicked();
    void on_pushButton_SH_clicked();
    void on_pushButton_SCH_clicked();
    void on_pushButton_MYAHKIY_clicked();
    void on_pushButton_YU_clicked();
    void on_pushButton_YA_clicked();
    void on_pushButton_APOSTR_clicked();

    void SetForm();

private:
    Ui::MainWindow *ui;
    QString word,dispWord;
    bool check(QString letter);
    int tries=7,found=0;
    bool game=true;
//    QList <QString> wordlist={"ПОТЯГ","ВАРІАНТ","ФІКСАТОР"};
    QList<QString> wordlist={"ПОТЯГ","ВАРІАНТ","ФІКСАТОР","КАЛІГУЛА","ЕКСКУРСІЯ","КОМПЛЕКТ","АЛГОРИТМ","ПРОЦЕС","ПРОГРАМА","КОМПІЛЯТОР","ОПЕРАТОР","ФУНКЦІЯ","ЗМІННА","КЛАСС","МЕТОД","ІНТЕРФЕЙС","БІБЛІОТЕКА","КОМПОНЕНТ","АРХІТЕКТУРА","РОЗРОБНИК"};

    //    QMediaPlayer *soundPlayer;
//    QAudioOutput *playerOutput;
    QPixmap test;

};
#endif // MAINWINDOW_H
