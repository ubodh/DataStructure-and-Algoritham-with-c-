#include <iostream>
#include "fact.cpp"  // Include the fact.cpp file
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << factorial(i) << " ";
    }
    return 0;
}
