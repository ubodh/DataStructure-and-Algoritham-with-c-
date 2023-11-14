#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[] = {1, 3, 4, 1, 3, 1, 1, 3, 3, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int size=*(&a+1)-a;

    unordered_map<int, int> countMap;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        countMap[a[i]]++;
        maxCount = max(maxCount, countMap[a[i]]);
    }

    cout << maxCount << endl;

    return 0;
}
