#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //adding image of rich dad poor dad
    QPixmap richDad(":/img/rich dad poor dad.jpg");
    int wrd = ui->richDad->width();
    int hrd = ui->richDad->height();
    ui->richDad->setPixmap(richDad.scaled(wrd,hrd,Qt::KeepAspectRatio));

    //adding image of psychology of money
    QPixmap psyofMoney(":/img/psychology of money.jpg");
    int wpsy = ui->psyofMoney->width();
    int hpsy = ui->psyofMoney->height();
    ui->psyofMoney->setPixmap(psyofMoney.scaled(wpsy,hpsy,Qt::KeepAspectRatio));

    //adding image of speak about money
    QPixmap speakmoney(":/img/speak about money.jpg");
    int wsam = ui->speakAboutMoney->width();
    int hsam = ui->speakAboutMoney->height();
    ui->speakAboutMoney->setPixmap(speakmoney.scaled(wsam, hsam, Qt::KeepAspectRatio));

    //adding image of book of money
    QPixmap boofmoney (":/img/book of money.jpg");
    int wbom = ui->boofMoney->width();
    int hbom = ui->boofMoney->height();
    ui->boofMoney->setPixmap(boofmoney.scaled(wbom, hbom, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


