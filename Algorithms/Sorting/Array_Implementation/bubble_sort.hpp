// Created by MuhammadHamza on 14/11/2024.

#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

void bubbleSort(int *arr, const int &size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

#endif //BUBBLE_SORT_HPP
