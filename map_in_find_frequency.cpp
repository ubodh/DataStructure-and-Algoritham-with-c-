#include<bits/stdc++.h>
using namespace std;

int main(){
    // Define an array
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a map to store the frequency of each element
    map<int, int> freq;

    // Traverse the array and store the frequency of each element
    for (int i = 0; i < size; i++)
            freq[arr[i]]=freq[arr[i]]+1;
        // freq[arr[i]]++;

    // Traverse the map and return the first element with frequency 1
    for (auto it = freq.begin(); it != freq.end(); it++)
        if (it->second == 1)
        {
            cout << "The first non-repeating element is: " << it->first << endl;
            return 0;
        }

    // If no such element is found
    cout << "No non-repeating elements found." << endl;
    return -1;
}
