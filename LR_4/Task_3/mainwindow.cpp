#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() {
  delete ui;
}

void MainWindow::setRandomElements(QVector<int>& arr, long size) {
    if (size <= 0) return;
    arr.resize(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = QRandomGenerator::global()->bounded(0, 1000);
    }
}

QString MainWindow::outputLineArray(const QVector<int>& arr) {
    QString result;
    result.reserve(arr.size() * 5);
    for (int val : arr) {
        result += QString::number(val) + " ";
    }
    return result;
}

void MainWindow::on_pushButton_clicked() {

    int size = ui->spinBox->value();

    QVector<int> arr;
    setRandomElements(arr, size);

    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("Исходный массив:\n" + outputLineArray(arr));

    Sort::MedianSort(arr);

    ui->plainTextEdit_2->clear();
    ui->plainTextEdit_2->appendPlainText("Медианы троек:\n" + outputLineArray(arr));
}
