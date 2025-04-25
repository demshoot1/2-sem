#ifndef SORT_H
#define SORT_H

#include <QVector>

class Sort {
 public:
  Sort();
  static void MedianSort(QVector<int>& arr);
  static void InsertionSort(QVector<int>& arr);
};

#endif  // SORT_H
