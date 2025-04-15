/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *TecDay;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1279, 720);
        QFont font;
        font.setBold(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font2;
        font2.setPointSize(11);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(170, 10, 1101, 661));
        tableWidget->setMinimumSize(QSize(621, 0));
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(220);
        TecDay = new QLabel(centralwidget);
        TecDay->setObjectName(QString::fromUtf8("TecDay"));
        TecDay->setGeometry(QRect(60, 10, 66, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 111, 17));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        label->setFont(font3);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 51, 251));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        pushButton->setFont(font4);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 60, 71, 41));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 110, 71, 41));
        pushButton_3->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, 150, 121, 101));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(false);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 230, 81, 20));
        QFont font6;
        font6.setPointSize(8);
        font6.setBold(true);
        label_3->setFont(font6);
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 250, 81, 25));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(false);
        lineEdit->setFont(font7);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 320, 81, 31));
        lineEdit_2->setFont(font7);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 320, 51, 31));
        QFont font8;
        font8.setPointSize(7);
        font8.setBold(false);
        pushButton_4->setFont(font8);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1279, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Next Day", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Difference between birthday", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Difference  between next", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Difference between previous", nullptr));
        TecDay->setText(QCoreApplication::translate("MainWindow", "Today is:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "10.10.1010", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+\n"
"+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Type date\n"
"     here\n"
" to add it!\n"
"REMEMBER!\n"
" ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "DD.MM.YYYY", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Add\n"
"Birthday", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
