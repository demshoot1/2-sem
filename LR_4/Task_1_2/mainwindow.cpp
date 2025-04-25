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

void MainWindow::SetRandomElements(long* arr, long size) {
    for (long i = 0; i < size; i++) {
        arr[i] = QRandomGenerator::global()->bounded(0, 1000);
    }
}

void MainWindow::PrintArray(const long* const arr, const long size){
    QString str = "";
    for (long i = 0; i < size; i++){
        str += QString::number(arr[i]) + " ";
    }
    str += '\n';
    ui->textEdit->append(str);
}



void MainWindow::on_Fill_Array_Button_clicked()
{
    size = ui->spinBox->value();
    ui->spinBox->clear();
    array = new long[size];
    SetRandomElements(array, size);
    PrintArray(array, size);

}

void MainWindow::on_Heap_Sort_Button_clicked()
{
    ui->textEdit->clear();
    Sort::HeapSort(array, size);
    PrintArray(array, size);
}

void MainWindow::on_Quick_Sort_Button_clicked()
{
    ui->textEdit->clear();
    Sort::QuickSort(array, 0, size - 1);
    PrintArray(array, size);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->clear();
    Sort::MergeSort(array, 0, size - 1);
    PrintArray(array, size);
}


void MainWindow::on_Find_El_Button_clicked()
{
    digit = ui->spinBox_2->value();
    index = Sort::Binsearch(array, 0, size - 1, digit);
    ui->label->setText("Индекс: " + QString::number(index));
}


void MainWindow::on_pushButton_6_clicked()
{
    long res = Sort::Binpow(index, size, digit);
    ui->label_2->setText("Результат: " + QString::number(res));
}


void MainWindow::on_Interpol_Sort_Button_clicked()
{
    ui->textEdit->clear();
    InterpolationSortWithSteps(array, size);
}

#include <iostream>
#include <algorithm>

void MainWindow::InterpolationSortWithSteps(long* arr, long size) {
    ui->textEdit->clear();
    if (size <= 1) {
        ui->textEdit->append("Массив слишком мал для сортировки: ");
        PrintArray(arr, size);
        return;
    }

    ui->textEdit->append("Начальный массив: ");
    PrintArray(arr, size);

    long min = arr[0], max = arr[0];
    for (long i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    ui->textEdit->append("Минимальный элемент: " + QString::number(min) + ", Максимальный: " + QString::number(max) + "\n");

    if (min == max) {
        ui->textEdit->append("Все элементы одинаковы, сортировка не требуется: ");
        PrintArray(arr, size);
        return;
    }

    long** buckets = new long*[size];
    long* sizes = new long[size]();

    for (long i = 0; i < size; ++i) {
        buckets[i] = new long[size];
    }

    for (long i = 0; i < size; ++i) {
        long num = arr[i];
        long index = ((num - min) * (size - 1)) / (max - min);
        buckets[index][sizes[index]++] = num;

        ui->textEdit->append("Элемент " + QString::number(num) + " помещен в ведро " + QString::number(index) + '\n');
    }

    ui->textEdit->append("\nСостояние ведер:\n");
    for (long i = 0; i < size; ++i) {
        if (sizes[i] > 0) {
            ui->textEdit->append("Ведро " + QString::number(i) + " (" + QString::number(sizes[i]) + " элементов): ");
            for (long j = 0; j < sizes[i]; ++j) {
                ui->textEdit->append(QString::number(buckets[i][j]) + " ");
            }
            ui->textEdit->append("\n");
        }
    }

    ui->textEdit->append("\nСортировка ведер:\n");
    for (long i = 0; i < size; ++i) {
        if (sizes[i] > 1) {
            ui->textEdit->append("Сортировка ведра " + QString::number(i) + ": ");
            PrintArray(buckets[i], sizes[i]);
            std::sort(buckets[i], buckets[i] + sizes[i]);
            ui->textEdit->append("После сортировки: ");
            PrintArray(buckets[i], sizes[i]);
        }
    }

    ui->textEdit->append("\nСборка отсортированного массива:\n");
    long pos = 0;
    for (long i = 0; i < size; ++i) {
        for (long j = 0; j < sizes[i]; ++j) {
            arr[pos++] = buckets[i][j];
            ui->textEdit->append("Текущее состояние массива: ");
            PrintArray(arr, size);
        }
        delete[] buckets[i];
    }

    delete[] buckets;
    delete[] sizes;

    ui->textEdit->append("Финальный отсортированный массив: ");
    PrintArray(arr, size);
}

