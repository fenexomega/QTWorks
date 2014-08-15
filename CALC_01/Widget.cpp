#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    u = v = 0;
    flag = false;


    //Botões Númericos
    connect(ui->btn_0,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_1,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_2,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_3,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_4,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_5,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_6,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_7,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_8,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));
    connect(ui->btn_9,SIGNAL(released()),this,SLOT(botaoNumeroRelease()));

    //Botões de operação
    connect(ui->btn_plus,SIGNAL(released()),this,SLOT(botaoOperacaoRelease()));
    connect(ui->btn_mp,SIGNAL(released()),this,SLOT(botaoOperacaoRelease()));


}

Widget::~Widget()
{
    delete ui;
}



void Widget::botaoNumeroRelease()
{
    QPushButton* pb =  dynamic_cast<QPushButton *>(sender());

   if(!flag)
   {
       u = u*10 + pb->text().toInt();
       ui->LCD->display(u);
   } else
   {
       v = v*10 + pb->text().toInt();
       ui->LCD->display(v);
   }
}


void Widget::botaoOperacaoRelease()
{
    QPushButton* pb =  dynamic_cast<QPushButton *>(sender());

    flag = true;
    v = 0;
    op = pb->text();

}



void Widget::on_btn_eql_released()
{
    if(op == "*")
        u *= v;
    else if(op == "+")
        u += v;
    ui->LCD->display(u);

}

void Widget::on_pushButton_15_released()
{
    u = v = 0;
    flag = false;
    ui->LCD->display(u);

}
