#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sort.h"

#include <QMainWindow>
#include <QRandomGenerator>
#include <QString>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Fill_Array_Button_clicked();

    void on_Heap_Sort_Button_clicked();

    void on_Quick_Sort_Button_clicked();

    void on_pushButton_3_clicked();

    void on_Find_El_Button_clicked();

    void on_pushButton_6_clicked();

    void on_Interpol_Sort_Button_clicked();

private:
    Ui::MainWindow *ui;
    void SetRandomElements(long* arr, long size);
    void PrintArray(const long* const arr, const long size);
    void InterpolationSortWithSteps(long* arr, long size);
    long* array;
    long size;
    long digit;
    long index;
};
#endif // MAINWINDOW_H
