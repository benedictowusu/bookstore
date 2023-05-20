#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <vector>
#include <string>
#include "QString"
using namespace std;

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

// storing item selection in vector


struct itemPrice{
    string itemName;
    int itemprice;
};

// declaring a global variable

vector<itemPrice> v;
int total = 0;

MainWindow::~MainWindow()
{
    delete ui;
}

// Navigations


void MainWindow::on_viewcart_clicked()
{
    string str;

    ui->stackedWidget->setCurrentIndex(1);
    // view selected items in a list widget

    for (int i = 0; i < v.size(); i++){
        str = v[i].itemName + "\t\t\t" + to_string(v[i].itemprice);
        ui->addeditems->addItem(str.c_str());

        total += v[i].itemprice;
    }

    str = to_string(total);
    ui->totalPrice->setText(str.c_str());

    str = to_string(total);
    ui->totalPricePay->setText(str.c_str());
}


void MainWindow::on_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pay_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_confirm_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_new_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//adding cart

void MainWindow::on_pushButton_clicked()
{
    itemPrice richdadpoordad;
    richdadpoordad.itemName = "Rich Dad Poor Dad";
    richdadpoordad.itemprice = 25;

    v.push_back(richdadpoordad);
}


void MainWindow::on_pushButton_2_clicked()
{
    itemPrice psychologyofmoney;
    psychologyofmoney.itemName = "Psychology of Money";
    psychologyofmoney.itemprice = 29;

    v.push_back(psychologyofmoney);
}


void MainWindow::on_pushButton_3_clicked()
{
    itemPrice bookofmoney;
    bookofmoney.itemName = "Book of Money";
    bookofmoney.itemprice = 21;

    v.push_back(bookofmoney);
}


void MainWindow::on_pushButton_4_clicked()
{
    itemPrice speakaboutmoney;
    speakaboutmoney.itemName = "Speak about money";
    speakaboutmoney.itemprice = 12;

    v.push_back(speakaboutmoney);
}

