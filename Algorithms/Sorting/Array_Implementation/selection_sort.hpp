// Created by MuhammadHamza on 14/11/2024.

#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

void selectionSort(int *arr, const int &size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

#endif //SELECTION_SORT_HPP
