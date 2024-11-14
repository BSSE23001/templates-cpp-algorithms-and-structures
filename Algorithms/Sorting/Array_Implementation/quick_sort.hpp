// Created by MuhammadHamza on 14/11/2024.

#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

int partition(int *arr, const int &low, const int &high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[high]);
}

void quickSortHelper(int *arr, const int &low, const int &high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSortHelper(arr, low, pivot - 1);
        quickSortHelper(arr, pivot + 1, high);
    }
}

#endif //QUICK_SORT_HPP
