#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    v = u = 0;
    flag = false;
    connect(ui->pushButton,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(on_pushButton_released()));
    connect(ui->pushButton_10,SIGNAL(released()),this,SLOT(on_pushButton_released()));

    connect(ui->pushButton_12,SIGNAL(released()),this,SLOT(on_operation_released()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
    QPushButton *pb = (QPushButton*) sender();

    if(!flag)
    {
        v = v*10 + pb->text().toInt();
        ui->lcdNumber->display(v);
    }
    else
    {
        u = u*10 + pb->text().toInt();
        ui->lcdNumber->display(u);
    }

}

void MainWindow::on_operation_released()
{
    QPushButton *pb = (QPushButton*) sender();

    op = pb->text().toStdString();

    flag = true;
}
