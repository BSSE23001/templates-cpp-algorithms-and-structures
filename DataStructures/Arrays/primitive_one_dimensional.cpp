#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]\n";
}

// Function to insert an element at the end (if capacity allows)
void append(int arr[], int &size, int capacity, int value) {
    if (size < capacity) {
        arr[size] = value;
        size++;
    } else {
        cout << "Array full. Cannot append.\n";
    }
}

// Function to insert at a given index (shift right)
void insertAt(int arr[], int &size, int capacity, int index, int value) {
    if (size >= capacity) {
        cout << "Array full. Cannot insert.\n";
        return;
    }
    if (index < 0 || index > size) {
        cout << "Invalid index.\n";
        return;
    }
    for (int i = size; i > index; i--) {
        arr[i] = arr[i-1]; // shift right
    }
    arr[index] = value;
    size++;
}

// Function to delete at index
void deleteAt(int arr[], int &size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index.\n";
        return;
    }
    for (int i = index; i < size-1; i++) {
        arr[i] = arr[i+1]; // shift left
    }
    size--;
}

// Function to search for a value (linear search)
int search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value)
            return i; // return index
    }
    return -1; // not found
}

int main() {
    const int CAPACITY = 10;
    int arr[CAPACITY]; // fixed-size array
    int size = 0;      // current logical size

    // Adding elements
    append(arr, size, CAPACITY, 5);
    append(arr, size, CAPACITY, 10);
    append(arr, size, CAPACITY, 15);

    printArray(arr, size); // [ 5 10 15 ]

    // Insert at index
    insertAt(arr, size, CAPACITY, 1, 7);
    printArray(arr, size); // [ 5 7 10 15 ]

    // Delete at index
    deleteAt(arr, size, 2);
    printArray(arr, size); // [ 5 7 15 ]

    // Search
    int idx = search(arr, size, 7);
    if (idx != -1)
        cout << "Found 7 at index " << idx << endl;
    else
        cout << "7 not found\n";

    return 0;
}

/*

Explanation
•	append(arr, size, capacity, value) adds at the end. Checks for overflow.
•	insertAt(arr, size, capacity, index, value) inserts at a given index, shifting right.
•	deleteAt(arr, size, index) removes element at index, shifts left.
•	search(arr, size, value) does linear search.
Example usage
append(arr, size, CAPACITY, 20); // appends 20
insertAt(arr, size, CAPACITY, 2, 50); // inserts 50 at index 2
deleteAt(arr, size, 0); // deletes first element
int idx = search(arr, size, 15); // returns index or -1

*/