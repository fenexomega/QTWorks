/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *LCD;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QPushButton *btn_plus;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_7;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_0;
    QPushButton *btn_1;
    QPushButton *btn_8;
    QPushButton *btn_6;
    QPushButton *btn_9;
    QPushButton *btn_mp;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_15;
    QPushButton *btn_eql;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(258, 366);
        centralWidget = new QWidget(Widget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        LCD = new QLCDNumber(centralWidget);
        LCD->setObjectName(QStringLiteral("LCD"));
        LCD->setAutoFillBackground(true);
        LCD->setFrameShape(QFrame::Panel);
        LCD->setSmallDecimalPoint(true);
        LCD->setDigitCount(8);
        LCD->setMode(QLCDNumber::Dec);
        LCD->setProperty("value", QVariant(0));

        verticalLayout_3->addWidget(LCD);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        btn_plus = new QPushButton(centralWidget);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        btn_plus->setMinimumSize(QSize(51, 51));
        btn_plus->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_plus, 3, 2, 1, 1);

        btn_4 = new QPushButton(centralWidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setMinimumSize(QSize(51, 51));
        btn_4->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_4, 1, 0, 1, 1);

        btn_5 = new QPushButton(centralWidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setMinimumSize(QSize(51, 51));
        btn_5->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_5, 1, 1, 1, 1);

        btn_7 = new QPushButton(centralWidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setMinimumSize(QSize(51, 51));
        btn_7->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_7, 2, 0, 1, 1);

        btn_2 = new QPushButton(centralWidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setMinimumSize(QSize(51, 51));
        btn_2->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_2, 0, 1, 1, 1);

        btn_3 = new QPushButton(centralWidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setMinimumSize(QSize(51, 51));
        btn_3->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_3, 0, 2, 1, 1);

        btn_0 = new QPushButton(centralWidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setMinimumSize(QSize(51, 51));
        btn_0->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_0, 3, 1, 1, 1);

        btn_1 = new QPushButton(centralWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setMinimumSize(QSize(51, 51));
        btn_1->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_1, 0, 0, 1, 1);

        btn_8 = new QPushButton(centralWidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setMinimumSize(QSize(51, 51));
        btn_8->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_8, 2, 1, 1, 1);

        btn_6 = new QPushButton(centralWidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setMinimumSize(QSize(51, 51));
        btn_6->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_6, 1, 2, 1, 1);

        btn_9 = new QPushButton(centralWidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setMinimumSize(QSize(51, 51));
        btn_9->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_9, 2, 2, 1, 1);

        btn_mp = new QPushButton(centralWidget);
        btn_mp->setObjectName(QStringLiteral("btn_mp"));
        btn_mp->setMinimumSize(QSize(51, 51));
        btn_mp->setMaximumSize(QSize(51, 51));

        gridLayout_3->addWidget(btn_mp, 3, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(61, 61));
        pushButton_15->setMaximumSize(QSize(61, 61));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setBold(true);
        font.setWeight(75);
        pushButton_15->setFont(font);

        verticalLayout_2->addWidget(pushButton_15);

        btn_eql = new QPushButton(centralWidget);
        btn_eql->setObjectName(QStringLiteral("btn_eql"));
        btn_eql->setMinimumSize(QSize(61, 61));
        btn_eql->setMaximumSize(QSize(61, 61));
        btn_eql->setFont(font);

        verticalLayout_2->addWidget(btn_eql);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);

        Widget->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Widget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Widget->setStatusBar(statusBar);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QMainWindow *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        btn_plus->setText(QApplication::translate("Widget", "+", 0));
        btn_4->setText(QApplication::translate("Widget", "4", 0));
        btn_5->setText(QApplication::translate("Widget", "5", 0));
        btn_7->setText(QApplication::translate("Widget", "7", 0));
        btn_2->setText(QApplication::translate("Widget", "2", 0));
        btn_3->setText(QApplication::translate("Widget", "3", 0));
        btn_0->setText(QApplication::translate("Widget", "0", 0));
        btn_1->setText(QApplication::translate("Widget", "1", 0));
        btn_8->setText(QApplication::translate("Widget", "8", 0));
        btn_6->setText(QApplication::translate("Widget", "6", 0));
        btn_9->setText(QApplication::translate("Widget", "9", 0));
        btn_mp->setText(QApplication::translate("Widget", "*", 0));
        pushButton_15->setText(QApplication::translate("Widget", "C", 0));
        btn_eql->setText(QApplication::translate("Widget", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
