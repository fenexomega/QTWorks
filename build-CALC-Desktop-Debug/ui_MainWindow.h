/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_14;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_10;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(225, 248);
        MainWindow->setMinimumSize(QSize(225, 248));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(191, 41));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(8);
        lcdNumber->setProperty("value", QVariant(0));

        verticalLayout->addWidget(lcdNumber);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(41, 41));
        pushButton_9->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_9, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(41, 41));
        pushButton_7->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_7, 3, 2, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(41, 41));
        pushButton_8->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_8, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(41, 41));
        pushButton_4->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_4, 2, 2, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(41, 41));
        pushButton_6->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(41, 41));
        pushButton_5->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(41, 41));
        pushButton_3->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(41, 41));
        pushButton_2->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(41, 41));
        pushButton_14->setMaximumSize(QSize(41, 41));
        QFont font;
        font.setFamily(QStringLiteral("Nimbus Sans L"));
        font.setBold(true);
        font.setWeight(75);
        pushButton_14->setFont(font);

        gridLayout->addWidget(pushButton_14, 1, 3, 1, 1);

        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(41, 41));
        pushButton_11->setMaximumSize(QSize(41, 41));
        pushButton_11->setFont(font);

        gridLayout->addWidget(pushButton_11, 2, 3, 1, 1);

        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(41, 41));
        pushButton_12->setMaximumSize(QSize(41, 41));
        pushButton_12->setFont(font);

        gridLayout->addWidget(pushButton_12, 4, 2, 1, 1);

        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(41, 41));
        pushButton_13->setMaximumSize(QSize(41, 41));
        pushButton_13->setFont(font);

        gridLayout->addWidget(pushButton_13, 4, 1, 1, 1);

        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(41, 41));
        pushButton_10->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton_10, 4, 0, 1, 1);

        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(41, 41));
        pushButton_15->setMaximumSize(QSize(41, 41));
        pushButton_15->setFont(font);

        gridLayout->addWidget(pushButton_15, 3, 3, 1, 1);

        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(41, 41));
        pushButton_16->setMaximumSize(QSize(41, 41));
        pushButton_16->setFont(font);

        gridLayout->addWidget(pushButton_16, 4, 3, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(41, 41));
        pushButton->setMaximumSize(QSize(41, 41));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "*", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", ".", 0));
        pushButton_16->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton->setText(QApplication::translate("MainWindow", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
