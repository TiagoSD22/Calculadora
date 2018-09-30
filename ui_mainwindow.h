/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Resposta;
    QPushButton *Op1;
    QPushButton *Op2;
    QPushButton *Op3;
    QPushButton *Op4;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *b0;
    QPushButton *pushButton;
    QPushButton *op5;
    QPushButton *Op6;
    QPushButton *Op7;
    QPushButton *Op8;
    QPushButton *Limpar;
    QPushButton *op9;
    QPushButton *op10;
    QPushButton *op11;
    QPushButton *op12;
    QPushButton *op13;
    QPushButton *op14;
    QPushButton *op15;
    QPushButton *op16;
    QPushButton *decimal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(533, 332);
        QIcon icon;
        icon.addFile(QStringLiteral("calculator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("QWidget{\n"
"	//background-color:rgb(222, 222, 222);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Resposta = new QLabel(centralWidget);
        Resposta->setObjectName(QStringLiteral("Resposta"));
        Resposta->setGeometry(QRect(10, 0, 511, 31));
        Resposta->setAutoFillBackground(false);
        Resposta->setStyleSheet(QLatin1String("QLabel{\n"
"background-color:rgb(85, 170, 127);\n"
"}"));
        Resposta->setInputMethodHints(Qt::ImhDigitsOnly);
        Resposta->setFrameShape(QFrame::WinPanel);
        Resposta->setFrameShadow(QFrame::Plain);
        Op1 = new QPushButton(centralWidget);
        Op1->setObjectName(QStringLiteral("Op1"));
        Op1->setGeometry(QRect(470, 240, 51, 31));
        Op1->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Op2 = new QPushButton(centralWidget);
        Op2->setObjectName(QStringLiteral("Op2"));
        Op2->setGeometry(QRect(470, 200, 51, 31));
        Op2->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Op3 = new QPushButton(centralWidget);
        Op3->setObjectName(QStringLiteral("Op3"));
        Op3->setGeometry(QRect(470, 120, 51, 31));
        Op3->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Op4 = new QPushButton(centralWidget);
        Op4->setObjectName(QStringLiteral("Op4"));
        Op4->setGeometry(QRect(470, 160, 51, 31));
        Op4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b1 = new QPushButton(centralWidget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(350, 120, 51, 31));
        b1->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b2 = new QPushButton(centralWidget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(410, 120, 51, 31));
        b2->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b3 = new QPushButton(centralWidget);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(290, 160, 51, 31));
        b3->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b4 = new QPushButton(centralWidget);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(350, 160, 51, 31));
        b4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b5 = new QPushButton(centralWidget);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(410, 160, 51, 31));
        b5->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b6 = new QPushButton(centralWidget);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(290, 200, 51, 31));
        b6->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b7 = new QPushButton(centralWidget);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(350, 200, 51, 31));
        b7->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b8 = new QPushButton(centralWidget);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(410, 200, 51, 31));
        b8->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b9 = new QPushButton(centralWidget);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(290, 240, 51, 31));
        b9->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        b0 = new QPushButton(centralWidget);
        b0->setObjectName(QStringLiteral("b0"));
        b0->setGeometry(QRect(290, 120, 51, 31));
        b0->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 240, 51, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op5 = new QPushButton(centralWidget);
        op5->setObjectName(QStringLiteral("op5"));
        op5->setGeometry(QRect(200, 120, 61, 31));
        op5->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Op6 = new QPushButton(centralWidget);
        Op6->setObjectName(QStringLiteral("Op6"));
        Op6->setGeometry(QRect(200, 160, 61, 31));
        Op6->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Op7 = new QPushButton(centralWidget);
        Op7->setObjectName(QStringLiteral("Op7"));
        Op7->setGeometry(QRect(200, 240, 61, 31));
        Op7->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Op8 = new QPushButton(centralWidget);
        Op8->setObjectName(QStringLiteral("Op8"));
        Op8->setGeometry(QRect(40, 240, 61, 31));
        Op8->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        Limpar = new QPushButton(centralWidget);
        Limpar->setObjectName(QStringLiteral("Limpar"));
        Limpar->setGeometry(QRect(410, 80, 111, 31));
        Limpar->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op9 = new QPushButton(centralWidget);
        op9->setObjectName(QStringLiteral("op9"));
        op9->setGeometry(QRect(200, 200, 61, 31));
        op9->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op10 = new QPushButton(centralWidget);
        op10->setObjectName(QStringLiteral("op10"));
        op10->setGeometry(QRect(120, 120, 61, 31));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        op10->setFont(font);
        op10->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op10->setFlat(false);
        op11 = new QPushButton(centralWidget);
        op11->setObjectName(QStringLiteral("op11"));
        op11->setGeometry(QRect(120, 160, 61, 31));
        op11->setFont(font);
        op11->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op12 = new QPushButton(centralWidget);
        op12->setObjectName(QStringLiteral("op12"));
        op12->setGeometry(QRect(120, 200, 61, 31));
        op12->setFont(font);
        op12->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op13 = new QPushButton(centralWidget);
        op13->setObjectName(QStringLiteral("op13"));
        op13->setGeometry(QRect(120, 240, 61, 31));
        op13->setFont(font);
        op13->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op14 = new QPushButton(centralWidget);
        op14->setObjectName(QStringLiteral("op14"));
        op14->setGeometry(QRect(40, 120, 61, 31));
        op14->setFont(font);
        op14->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op15 = new QPushButton(centralWidget);
        op15->setObjectName(QStringLiteral("op15"));
        op15->setGeometry(QRect(40, 160, 61, 31));
        op15->setFont(font);
        op15->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        op16 = new QPushButton(centralWidget);
        op16->setObjectName(QStringLiteral("op16"));
        op16->setGeometry(QRect(40, 200, 61, 31));
        op16->setFont(font);
        op16->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        decimal = new QPushButton(centralWidget);
        decimal->setObjectName(QStringLiteral("decimal"));
        decimal->setGeometry(QRect(350, 240, 51, 31));
        decimal->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"background-color:rgb(85,170,255);\n"
"    min-width: 40px;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculadora", 0));
        Op1->setText(QApplication::translate("MainWindow", "+", 0));
        Op1->setShortcut(QApplication::translate("MainWindow", "+", 0));
        Op2->setText(QApplication::translate("MainWindow", "-", 0));
        Op2->setShortcut(QApplication::translate("MainWindow", "-", 0));
        Op3->setText(QApplication::translate("MainWindow", "\303\267", 0));
        Op3->setShortcut(QApplication::translate("MainWindow", "/", 0));
        Op4->setText(QApplication::translate("MainWindow", "x", 0));
        Op4->setShortcut(QApplication::translate("MainWindow", "*", 0));
        b1->setText(QApplication::translate("MainWindow", "1", 0));
        b1->setShortcut(QApplication::translate("MainWindow", "1", 0));
        b2->setText(QApplication::translate("MainWindow", "2", 0));
        b2->setShortcut(QApplication::translate("MainWindow", "2", 0));
        b3->setText(QApplication::translate("MainWindow", "3", 0));
        b3->setShortcut(QApplication::translate("MainWindow", "3", 0));
        b4->setText(QApplication::translate("MainWindow", "4", 0));
        b4->setShortcut(QApplication::translate("MainWindow", "4", 0));
        b5->setText(QApplication::translate("MainWindow", "5", 0));
        b5->setShortcut(QApplication::translate("MainWindow", "5", 0));
        b6->setText(QApplication::translate("MainWindow", "6", 0));
        b6->setShortcut(QApplication::translate("MainWindow", "6", 0));
        b7->setText(QApplication::translate("MainWindow", "7", 0));
        b7->setShortcut(QApplication::translate("MainWindow", "7", 0));
        b8->setText(QApplication::translate("MainWindow", "8", 0));
        b8->setShortcut(QApplication::translate("MainWindow", "8", 0));
        b9->setText(QApplication::translate("MainWindow", "9", 0));
        b9->setShortcut(QApplication::translate("MainWindow", "9", 0));
        b0->setText(QApplication::translate("MainWindow", "0", 0));
        b0->setShortcut(QApplication::translate("MainWindow", "0", 0));
        pushButton->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton->setShortcut(QApplication::translate("MainWindow", "Return", 0));
        op5->setText(QApplication::translate("MainWindow", "x^2", 0));
        Op6->setText(QApplication::translate("MainWindow", "x^y", 0));
        Op7->setText(QApplication::translate("MainWindow", "log x,y", 0));
        Op8->setText(QApplication::translate("MainWindow", "Inverter", 0));
        Limpar->setText(QApplication::translate("MainWindow", "Limpar", 0));
        Limpar->setShortcut(QApplication::translate("MainWindow", "Backspace", 0));
        op9->setText(QApplication::translate("MainWindow", "x!", 0));
        op9->setShortcut(QApplication::translate("MainWindow", "F", 0));
        op10->setText(QApplication::translate("MainWindow", "sqrt", 0));
        op11->setText(QApplication::translate("MainWindow", "sin", 0));
        op12->setText(QApplication::translate("MainWindow", "cos", 0));
        op13->setText(QApplication::translate("MainWindow", "tan", 0));
        op14->setText(QApplication::translate("MainWindow", "arcsin", 0));
        op15->setText(QApplication::translate("MainWindow", "arccos", 0));
        op16->setText(QApplication::translate("MainWindow", "arctan", 0));
        decimal->setText(QApplication::translate("MainWindow", ".", 0));
        decimal->setShortcut(QApplication::translate("MainWindow", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
