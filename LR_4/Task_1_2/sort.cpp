#include "sort.h"

Sort::Sort() {}

void Sort::Heapify(long *arr, long size, long i){

    long largest = i;
    long left = 2 * i + 1;
    long right = 2 * i + 2;

    if (left < size && arr[left] > arr[largest])
        largest = left;

    if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        std::swap(arr[i], arr[largest]);
        Heapify(arr, size, largest);
    }
}

void Sort::HeapSort(long *arr, long size) //O n*long(n)
{
    //создаем убывающее дерево
    for (long i = size / 2 - 1; i >= 0; i--)
        Heapify(arr, size, i);

    //сортировка
    for (long i = size - 1; i >= 0; i--)
    {
        std::swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

long Sort::Partition(long *arr, long start, long end){
    long pivot = arr[end];
    long i = start - 1;

    for (long j = start; j < end; j++){
        if (pivot >= arr[j]){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[end]);

    return (i + 1);
}

void Sort::QuickSort(long *arr, long start, long end){

    if (start < end){
        long pi = Partition(arr, start, end);

        QuickSort(arr, start, pi - 1);
        QuickSort(arr, pi + 1, end);
    }
}

void Sort::Merge(long* arr, long left, long mid, long right){
    long size1 = mid - left + 1;
    long size2 = right - mid;

    long* leftarr = new long[size1];
    long* rightarr = new long[size2];

    for (long i = 0; i < size1; i++){
        leftarr[i] = arr[left + i];
    }
    for (long i = 0; i < size2; i++){
        rightarr[i] = arr[mid + 1 + i];
    }

    long i = 0, j = 0, k = left;

    while (i < size1 && j < size2){
        if(leftarr[i] <= rightarr[j]){
            arr[k] = leftarr[i];
            i++;
        }
        else{
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while(i < size1){
        arr[k] = leftarr[i];
        i++;
        k++;
    }

    while(j < size2){
        arr[k] = rightarr[j];
        j++;
        k++;
    }

    delete[] leftarr;
    delete[] rightarr;
}

void Sort::MergeSort(long* arr, long left, long right){
    if(left >= right) return;

    long mid = left + (right - left) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, mid, right);
}

long Sort::Binsearch(long* arr, long left, long right, long x){
    while (left <= right){
        long mid = left + (right - left) / 2;

        if(arr[mid] == x) return mid;

        if(arr[mid] < x) left = mid + 1;

        else right = mid - 1;
    }
    return -1;
}

long Sort::Binpow (long digit, long powder, long mod){
    if (powder == 0) {
        return 1;
    }
    else if (powder % 2 == 0) {
        long long res = Binpow(digit, powder / 2, mod) % mod;
        return (res * res) % mod;
    }
    return ((Binpow(digit, powder - 1, mod) % mod) * (digit % mod)) % mod;
}

