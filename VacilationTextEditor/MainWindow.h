#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QTabBar>
#include <iostream>

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
    void on_actionSair_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void on_actionNovo_triggered();

    void on_actionFechar_triggered();

private:
    Ui::MainWindow *ui;
    QTabWidget *tabs;
};

#endif // MAINWINDOW_H
