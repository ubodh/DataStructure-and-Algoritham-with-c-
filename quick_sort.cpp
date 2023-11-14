#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int end) {
    int count = 0;
    int pivot = arr[start];
    
    for (int i = start + 1; i <= end; i++) {
        if (pivot > arr[i]) {
            count++;
        }
    }
    
    int pivotIndex = count + start;
    swap(arr[start], arr[pivotIndex]);
    int i = start, j = end;
    
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    
    return pivotIndex;
}

void Quick_sort(int arr[], int start, int end) {
    if (start < end) {
        int index = partition(arr, start, end);
        Quick_sort(arr, start, index - 1);
        Quick_sort(arr, index + 1, end);
    }
}

int main() {
    int arr[] = {2, 8, 11, 1, 9, 0, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Quick_sort(arr, 0, n - 1);  // Corrected the end parameter
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
