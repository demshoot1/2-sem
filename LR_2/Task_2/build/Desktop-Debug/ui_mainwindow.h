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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_open_file;
    QPushButton *pushButton_save_five;
    QPushButton *pushButton_close_file;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_search_drive_place;
    QLineEdit *lineEdit;
    QPushButton *pushButton_search_drive_date;
    QDateEdit *dateEdit;
    QPushButton *pushButton_cancel_search;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_add_trip;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_6;
    QDateTimeEdit *dateTimeEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_delete;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(953, 785);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_open_file = new QPushButton(centralwidget);
        pushButton_open_file->setObjectName(QString::fromUtf8("pushButton_open_file"));

        verticalLayout->addWidget(pushButton_open_file);

        pushButton_save_five = new QPushButton(centralwidget);
        pushButton_save_five->setObjectName(QString::fromUtf8("pushButton_save_five"));

        verticalLayout->addWidget(pushButton_save_five);

        pushButton_close_file = new QPushButton(centralwidget);
        pushButton_close_file->setObjectName(QString::fromUtf8("pushButton_close_file"));

        verticalLayout->addWidget(pushButton_close_file);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_search_drive_place = new QPushButton(centralwidget);
        pushButton_search_drive_place->setObjectName(QString::fromUtf8("pushButton_search_drive_place"));

        verticalLayout_2->addWidget(pushButton_search_drive_place);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        pushButton_search_drive_date = new QPushButton(centralwidget);
        pushButton_search_drive_date->setObjectName(QString::fromUtf8("pushButton_search_drive_date"));

        verticalLayout_2->addWidget(pushButton_search_drive_date);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_2->addWidget(dateEdit);

        pushButton_cancel_search = new QPushButton(centralwidget);
        pushButton_cancel_search->setObjectName(QString::fromUtf8("pushButton_cancel_search"));

        verticalLayout_2->addWidget(pushButton_cancel_search);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_add_trip = new QPushButton(centralwidget);
        pushButton_add_trip->setObjectName(QString::fromUtf8("pushButton_add_trip"));

        verticalLayout_3->addWidget(pushButton_add_trip);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_3->addWidget(lineEdit_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        dateTimeEdit_2 = new QDateTimeEdit(centralwidget);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));

        verticalLayout_3->addWidget(dateTimeEdit_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        dateTimeEdit_3 = new QDateTimeEdit(centralwidget);
        dateTimeEdit_3->setObjectName(QString::fromUtf8("dateTimeEdit_3"));

        verticalLayout_3->addWidget(dateTimeEdit_3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMaximum(99999);

        horizontalLayout->addWidget(spinBox_4);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(99999);

        horizontalLayout_2->addWidget(spinBox_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(99999);

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(99999);

        horizontalLayout_4->addWidget(spinBox_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout_3);

        lineEdit_delete = new QLineEdit(centralwidget);
        lineEdit_delete->setObjectName(QString::fromUtf8("lineEdit_delete"));

        verticalLayout_2->addWidget(lineEdit_delete);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 953, 23));
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
        pushButton_open_file->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_save_five->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_close_file->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_search_drive_place->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \321\200\320\265\320\271\321\201\320\276\320\262 \320\277\320\276 \320\272\320\276\320\275\320\265\321\207\320\275\320\276\320\274\321\203 \320\277\321\203\320\275\320\272\321\202\321\203", nullptr));
        pushButton_search_drive_date->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \321\200\320\265\320\271\321\201\320\276\320\262 \320\277\320\276 \320\264\320\260\321\202\320\265 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        pushButton_cancel_search->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        pushButton_add_trip->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\271\321\201 / \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\265\320\271\321\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\200\320\265\320\271\321\201\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\321\213\320\271 \320\277\321\203\320\275\320\272\321\202", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\272\321\203\320\277\320\265\320\271\320\275\321\213\321\205 \320\274\320\265\321\201\321\202", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\277\320\273\320\260\321\206\320\272\320\260\321\200\321\202\320\275\321\213\321\205 \320\274\320\265\321\201\321\202", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\272\321\203\320\277\320\265\320\271\320\275\321\213\321\205 \320\274\320\265\321\201\321\202", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205 \320\277\320\273\320\260\321\206\320\272\320\260\321\200\321\202\320\275\321\213\321\205 \320\274\320\265\321\201\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\265\320\271\321\201", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\203\320\264\320\260\320\273\321\217\320\265\320\274\320\276\320\263\320\276 \321\200\320\265\320\271\321\201\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
