#include <iostream>
#include <vector>
using namespace std;

void zigzag(string &s, int k) {
    if (k == 1 || k >= s.size()) {
        cout << s;
        return;
    }

    vector<vector<char>> ans(k);

    int j = 0;
    bool flag = true;

    for (int i = 0; i < s.size(); i++) {
        ans[j].push_back(s[i]);
        j += (flag == true) ? 1 : -1;
        if (j == k - 1 || j == 0)
            flag = !flag;
    }

    string str = "";

    for (vector<char> &row : ans) {
        for (char &ch : row)
            str += ch;
    }

    cout << str;
}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    zigzag(s, k);

    return 0;
}
