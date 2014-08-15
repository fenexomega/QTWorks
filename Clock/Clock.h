#ifndef CLOCK_H
#define CLOCK_H

#include <QMainWindow>

namespace Ui {
class Clock;
}

class Clock : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clock(QWidget *parent = 0);
    ~Clock();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Clock *ui;

};

#endif // CLOCK_H
