#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    setCentralWidget(ui->tabWidget);
    ui->tabWidget->clear();
    tabs = ui->tabWidget;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSair_triggered()
{
    close();
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    std::cout << ui->tabWidget->currentIndex() << std::endl;
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_actionNovo_triggered()
{
    QString titulo = "Novo Documento " + QString::number(ui->tabWidget->count() + 1) ;
    ui->tabWidget->addTab(new QPlainTextEdit(),titulo);
    tabs->widget(ui->tabWidget->count() - 1 );
    QPlainTextEdit *textedit = (QPlainTextEdit*) tabs->widget(ui->tabWidget->count() - 1 )->children()[0];
    tabs->setFocusProxy(tabs->widget(ui->tabWidget->count() - 1 ));
    textedit->setFocus();
}

void MainWindow::on_actionFechar_triggered()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex());

}
