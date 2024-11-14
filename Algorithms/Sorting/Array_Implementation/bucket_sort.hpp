// Created by MuhammadHamza on 14/11/2024.

#ifndef BUCKET_SORT_HPP
#define BUCKET_SORT_HPP

void bucketSort(int *arr, const int &size) {
    int num_buckets = 10;
    vector<int> buckets[num_buckets];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++) {
        max = max(max, arr[i]);
        min = min(min, arr[i]);
    }
    int range = max - min + 1;
    for (int i = 0; i < size; i++) {
        int bucket_index = num_buckets * (arr[i] - min) / range;
        buckets[bucket_index].push_back(arr[i]);
    }
    int index = 0;
    for (int i = 0; i < num_buckets; i++) {
        sort(buckets[i].begin(), buckets[i].end());
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

#endif //BUCKET_SORT_HPP
