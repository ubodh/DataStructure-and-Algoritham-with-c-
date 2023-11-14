#include <bits/stdc++.h>
using namespace std;

void solve(int v[], int n, vector<int>& out, int idx, vector<vector<int>>& ans) {
    ans.push_back(out);
    for (int i = idx; i < n; i++) {
        // Avoid adding duplicates
        if (i > idx && v[i] == v[i - 1]) {
            continue;
        }

        out.push_back(v[i]);
        solve(v, n, out, i + 1, ans);
        out.pop_back();
    }
}

void subset(int v[], int n) {
    vector<int> out;
    int id = 0;
    vector<vector<int>> ans;
    sort(v, v + n); // Sort the array to handle duplicates

    solve(v, n, out, id, ans);

    for (auto i : ans) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int v[] = {3,2,1, 1};
    int size=sizeof(v)/sizeof(v[0]);
    subset(v, size);
    return 0;
}
