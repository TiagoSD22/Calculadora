#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"conversor.h"
#include<iostream>
#include<cmath>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    int operacao;
    float numero = 0;
    int expoente = 1;
    int decimal;
    float x;
    float y;
    QString resultado;

    ~MainWindow();

private slots:
    void on_Op1_clicked();

    void on_Op2_clicked();

    void on_Op3_clicked();

    void on_Op4_clicked();

    void on_pushButton_clicked();

    void on_op5_clicked();

    void on_Op6_clicked();

    void on_Op7_clicked();

    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b0_clicked();

    void on_Op8_clicked();

    void on_Limpar_clicked();

    void on_op9_clicked();

    void on_op10_clicked();

    void on_op11_clicked();

    void on_op12_clicked();

    void on_op13_clicked();

    void on_op14_clicked();

    void on_op15_clicked();

    void on_op16_clicked();

    void on_decimal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
