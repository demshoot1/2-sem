#ifndef SORT_H
#define SORT_H

#include <algorithm>

class Sort
{
public:
    Sort();
    static void HeapSort(long* arr, long size);
    static void Heapify(long* arr, long size, long i);

    static void QuickSort(long* arr, long start, long size);
    static long Partition(long* arr, long start, long end);

    static void MergeSort(long* arr, long left, long right);
    static void Merge(long* arr, long left, long mid, long right);

    static long Binsearch(long* arr, long left, long right, long x);
    static long Binpow (long digit, long powder, long mod);

    static void InterpolationSort(long* arr, long size);

};

#endif // SORT_H
