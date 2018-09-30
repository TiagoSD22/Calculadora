#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_decimal_clicked(){
    decimal = 1;
}

void MainWindow::on_b1_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 1;
    }
    else{
        numero = numero + 1/pow(10,expoente);
        expoente++;
    }
    resultado = QString::number(numero);
    //ui->Resposta->setText(QString::number(numero));
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b2_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 2;
    }
    else{
        numero = numero + 2/pow(10,expoente);
        expoente++;
    }
    resultado = QString::number(numero);
    //ui->Resposta->setText(QString::number(numero));
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b3_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 3;
    }
    else{
        numero = numero + 3/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b4_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 4;
    }
    else{
        numero = numero + 4/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b5_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 5;
    }
    else{
        numero = numero + 5/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b6_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 6;
    }
    else{
        numero = numero + 6/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b7_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 7;
    }
    else{
        numero = numero + 7/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b8_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 8;
    }
    else{
        numero = numero + 8/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b9_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 9;
    }
    else{
        numero = numero + 9/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_b0_clicked(){
    if(decimal == 0){
        numero = (10 * numero) + 0;
    }
    else{
        numero = numero + 0/pow(10,expoente);
        expoente++;
    }
    //ui->Resposta->setText(QString::number(numero));
    resultado = QString::number(numero);
    ui->Resposta->setText(resultado);
}

void MainWindow::on_Op1_clicked(){
    operacao = 1;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    //ui->Resposta->setText(QString::number(numero));
    resultado = resultado + " + ";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_Op2_clicked(){
    operacao = 2;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    resultado = resultado + " - ";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_Op3_clicked(){
    operacao = 3;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    resultado = resultado + " / ";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_Op4_clicked(){
    operacao = 4;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    resultado = resultado + " x ";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_op5_clicked(){
    operacao = 5;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    resultado = resultado + " ^2 ";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_Op6_clicked(){
    operacao = 6;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    resultado = resultado + " ^ ";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_Op7_clicked(){
    operacao = 7;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    ui->Resposta->setText(QString::number(numero));
}

void MainWindow::on_Op8_clicked(){
    operacao = 8;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op9_clicked(){
    operacao = 9;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
    resultado = resultado + "!";
    ui->Resposta->setText(resultado);
}

void MainWindow::on_op10_clicked(){
    operacao = 10;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op11_clicked(){
    operacao = 11;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op12_clicked(){
    operacao = 12;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op13_clicked(){
    operacao = 13;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op14_clicked(){
    operacao = 14;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op15_clicked(){
    operacao = 15;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_op16_clicked(){
    operacao = 16;
    x = numero;
    numero = 0;
    decimal = 0;
    expoente = 1;
}

void MainWindow::on_pushButton_clicked()
{
    float resultado;
    if(operacao == 1){
        y = numero;
        resultado = x + y;
    }
    if(operacao == 2){
        y = numero;
        resultado = x - y;
    }
    if(operacao == 3){
        y = numero;
        resultado = x/y;
    }
    if(operacao == 4){
        y = numero;
        resultado = x*y;
    }
    if(operacao == 5){
        resultado = pow(x,2);
    }
    if(operacao == 6){
        y = numero;
        resultado = pow(x,y);
    }
    if(operacao == 7){
        y = numero;
        resultado = log(x)/log(y);
    }
    if(operacao == 8){
        resultado = Inverter(x);
    }
    if(operacao == 9){
        resultado = Fatorial(x);
    }
    if(operacao == 10){
        resultado = sqrt(x);
    }
    if(operacao == 11){
        resultado = sin((x * M_PI)/180);
    }
    if(operacao == 12){
        resultado = cos((x* M_PI)/180);
    }
    if(operacao == 13){
        resultado = tan((x * M_PI)/180);
    }
    if(operacao == 14){
        resultado = asin(x) * 180/M_PI;
    }
    if(operacao == 15){
        resultado = acos(x) * 180/M_PI;
    }
    if(operacao == 16){
        resultado = atan(x) * 180/M_PI;
    }
    ui->Resposta->setText(QString::number(resultado));
}

void MainWindow::on_Limpar_clicked(){
    numero = 0;
    x = 0;
    y = 0;
    decimal = 0;
    expoente = 1;
    resultado.clear();
    ui->Resposta->setText(QString::number(0));
}
