// Created by MuhammadHamza on 14/11/2024.

#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

void merge(int *arr, const int &left, const int &mid, const int &right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    auto left_array = new int[n1];
    auto right_array = new int[n2];
    for (int i = 0; i < n1; i++) {
        left_array[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        right_array[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (left_array[i] <= right_array[j]) {
            arr[k++] = left_array[i++];
        } else {
            arr[k++] = right_array[j++];
        }
    }
    while (i < n1) { arr[k++] = left_array[i++]; }
    while (j < n2) { arr[k++] = right_array[j++]; }
}

void mergeSortHelper(int *arr, const int &left, const int &right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortHelper(arr, left, mid);
        mergeSortHelper(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void mergeSort(int *arr, const int &size) {
    mergeSortHelper(arr, 0, size - 1);
}

#endif //MERGE_SORT_HPP
