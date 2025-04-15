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
    ui->lineEdit->clear();
    int m = ui->spinBox->value();
    int n = ui->spinBox_2->value();
    ui->lineEdit->setText(QString::number(Solution::AccermanFunction(m, n)));
}

