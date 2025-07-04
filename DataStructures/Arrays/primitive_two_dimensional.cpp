#include <iostream>
using namespace std;

// Function to print the 2D array
void printMatrix(int arr[][4], int rows, int cols) {
    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        cout << "[ ";
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "]\n";
    }
}

// Function to set a value
void setElement(int arr[][4], int row, int col, int value) {
    arr[row][col] = value;
}

// Function to get a value
int getElement(int arr[][4], int row, int col) {
    return arr[row][col];
}

// Function to search for a value and print locations
void searchValue(int arr[][4], int rows, int cols, int value) {
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == value) {
                cout << "Found " << value << " at (" << i << "," << j << ")\n";
                found = true;
            }
        }
    }
    if (!found) {
        cout << value << " not found in matrix.\n";
    }
}

// Note:
// •	C++ static 2D arrays don’t allow actual insertion/deletion of rows/columns (fixed-size).
// •	We simulate by shifting contents.
//Insert Row (simulate by shifting down)
void insertRow(int arr[][4], int &rows, int maxRows, int newRow[], int pos) {
    if (rows >= maxRows) {
        cout << "Cannot insert row. Matrix full.\n";
        return;
    }
    // Shift rows down
    for (int i = rows; i > pos; i--) {
        for (int j = 0; j < 4; j++)
            arr[i][j] = arr[i-1][j];
    }
    // Insert new row
    for (int j = 0; j < 4; j++)
        arr[pos][j] = newRow[j];
    rows++;
}
//Delete Row (simulate by shifting up)
void deleteRow(int arr[][4], int &rows, int pos) {
    for (int i = pos; i < rows-1; i++) {
        for (int j = 0; j < 4; j++)
            arr[i][j] = arr[i+1][j];
    }
    rows--;
}


int main() {
    // Create a 3x4 matrix
    int arr[3][4] = { {1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12} };

    printMatrix(arr, 3, 4);

    // Set element at (1,2) to 99
    setElement(arr, 1, 2, 99);
    printMatrix(arr, 3, 4);

    // Get element at (2,3)
    int val = getElement(arr, 2, 3);
    cout << "Element at (2,3) = " << val << endl;

    // Search for 99
    searchValue(arr, 3, 4, 99);

    return 0;
}

/*
Explanation
•	arr[3][4] is a 3 rows x 4 columns matrix.
•	Stored as: 1 2 3 4 5 6 7 8 9 10 11 12 (row-major).
•	Functions:
o	setElement(arr, r, c, val) sets arr[r][c] to val.
o	getElement(arr, r, c) returns value at (r,c).
o	searchValue prints all positions where value occurs.
Example usage
setElement(arr, 0, 0, 42); 
int x = getElement(arr, 2, 1); // gets arr[2][1]
searchValue(arr, 3, 4, 7); 
*/