// Created by MuhammadHamza on 14/11/2024.

#ifndef COUNT_SORT_HPP
#define COUNT_SORT_HPP

void countSort(int *arr, const int &size) {
    int max = *max_element(arr, arr + size);
    int count[max + 1] = {0};
    int output[size] = {0};
    for (int i = 0; i < size; i++) { count[arr[i]] += 1; }
    for (int i = 1; i < max + 1; i++) { count[i] += count[i - 1]; }
    for (int i = size - 1; i >= 0; i--) { output[--count[arr[i]]] = arr[i]; }
    for (int i = 0; i < size; i++) { arr[i] = output[i]; }
}

#endif //COUNT_SORT_HPP
