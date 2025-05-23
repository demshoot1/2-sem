#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_2->clear();
    double num = ui->doubleSpinBox->value();
    ui->lineEdit_2->setText("Результат: " + Solution::BinaryRepresentation(num));
}

