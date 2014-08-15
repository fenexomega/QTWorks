#include "Clock.h"
#include "ui_Clock.h"

Clock::Clock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clock)
{
    ui->setupUi(this);
}

Clock::~Clock()
{
    delete ui;
}

void Clock::on_pushButton_2_clicked()
{

}
