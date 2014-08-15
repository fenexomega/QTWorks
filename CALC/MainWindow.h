#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_released();
    void on_operation_released();

private:
    Ui::MainWindow *ui;
    int v;
    int u;
    bool flag;
    std::string op;
};

#endif // MAINWINDOW_H
