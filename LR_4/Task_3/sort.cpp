#include "sort.h"

Sort::Sort() {}

void Sort::MedianSort(QVector<int>& arr) {
    if (arr.isEmpty()) {
        return;
    }

    QVector<int> result;
    QVector<int> temp;

    for (int i = 0; i < arr.size(); i++) {
        temp.append(arr[i]);

        if (temp.size() == 3) {
            InsertionSort(temp);
            result.append(temp[1]);
            temp.clear();
        }
    }

    if (!temp.isEmpty()) {
        InsertionSort(temp);
        result.append(temp[temp.size()/2]);
    }

    arr = result;
}

void Sort::InsertionSort(QVector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
