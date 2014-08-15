/********************************************************************************
** Form generated from reading UI file 'Clock.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clock
{
public:
    QWidget *centralWidget;
    QTimeEdit *timeEdit;

    void setupUi(QMainWindow *Clock)
    {
        if (Clock->objectName().isEmpty())
            Clock->setObjectName(QStringLiteral("Clock"));
        Clock->resize(400, 300);
        centralWidget = new QWidget(Clock);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(70, 90, 118, 22));
        Clock->setCentralWidget(centralWidget);

        retranslateUi(Clock);

        QMetaObject::connectSlotsByName(Clock);
    } // setupUi

    void retranslateUi(QMainWindow *Clock)
    {
        Clock->setWindowTitle(QApplication::translate("Clock", "Clock", 0));
    } // retranslateUi

};

namespace Ui {
    class Clock: public Ui_Clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
