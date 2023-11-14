#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int N = 1000000; // Choose an appropriate size, not 1e9+9
    vector<int> v1(N, 0); // Initialize a vector with N elements, all set to 0

    vector<int> v = {1, 1, 2, 2, 3, 4, 3, 4, 4, 5, 5};
    for (auto i : v) {
        v1[i]++;
    }

    for (int i = 0; i < N; i++) {
        if (v1[i] == 1) {
            cout << i << " ";
        }
    }

    return 0;
}
