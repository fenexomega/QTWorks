#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

namespace Ui {
class Widget;
}

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void botaoNumeroRelease();


    void botaoOperacaoRelease();

    void on_btn_eql_released();

    void on_pushButton_15_released();

private:
    int u,v;
    bool flag;
    Ui::Widget *ui;
    QString op;
};

#endif // WIDGET_H
