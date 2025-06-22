#include <bits/stdc++.h>

using namespace std;

void binarySearch(int* arr,int n,int x) {
    int a = 0, b = n-1;
    while (a<=b) {
        int k = (a+b)/2;
        if(arr[k]==x) {
            cout << "Found at index: " << k << "\n";
            return;
        } else if (arr[k]<x)
        {
            a = k+1;
        } else {
            b = k-1;
        }
    }
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {1,2,3,4,5,4,7,4,9,4};
    // binarySearch(arr,10,10);
    sort(arr, arr+10);
    auto a = lower_bound(arr,arr+10,4);
    auto b = upper_bound(arr,arr+10,4);
    cout << a << " " << *a << "\n" << b << " " << *b << "\n";
    cout << b-a << "\n";

    auto c = equal_range(arr,arr+10,4);
    cout << c.second-c.first << "\n";
    return 0;
}
