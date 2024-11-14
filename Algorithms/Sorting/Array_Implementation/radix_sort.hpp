// Created by MuhammadHamza on 14/11/2024.

#ifndef RADIX_SORT_HPP
#define RADIX_SORT_HPP

void countSortForRadix(int *arr, const int &size, const int &exponent) {
    int count[10] = {0};
    int output[size] = {0};
    for (int i = 0; i < size; i++) { count[arr[i] / exponent % 10] += 1; }
    for (int i = 1; i < max + 1; i++) { count[i] += count[i - 1]; }
    for (int i = size - 1; i >= 0; i--) { output[--count[arr[i] / exponent % 10]] = arr[i]; }
    for (int i = 0; i < size; i++) { arr[i] = output[i]; }
}

void radixSort(int *arr, const int &size) {
    int max = *max_element(arr, arr + size);
    for (int exponent = 1; max / exponent > 0; exponent *= 10) {
        countSortForRadix(arr, size, exponent);
    }
}

#endif //RADIX_SORT_HPP
