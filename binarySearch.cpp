#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate mid inside the loop

        if (arr[mid] == key)
            return true;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Enter the key you want to search: " << endl;
    int key;
    cin >> key;
    
    bool found = binarySearch(arr, n, key);
    
    if (found)
        cout << "Yes, it is found." << endl;
    else
        cout << "It is not found." << endl;
    
    return 0;
}
