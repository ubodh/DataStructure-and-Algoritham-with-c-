#include <iostream>
#include <vector>
#include <string>
using namespace std;

string reverseStringWordWise(string s) {
    vector<string> str;
    string s1;

    for (auto i : s) {
        if (i != ' ') {
            s1 = s1 + i;
        } else {
            str.push_back(s1);
            s1 = "";
        }
    }

    str.push_back(s1); // Add the last word to the vector

    string s2;
    for (int i = str.size() - 1; i >= 0; i--) {
        s2 = s2 + str[i];
        if (i > 0) {
            s2 = s2 + " "; // Add a space unless it's the last word
        }
    }

    return s2;
}

int main() {
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
