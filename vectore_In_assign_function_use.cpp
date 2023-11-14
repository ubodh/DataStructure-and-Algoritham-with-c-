#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, x;
    cin >> n >> x;
    v.assign(n, x);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
