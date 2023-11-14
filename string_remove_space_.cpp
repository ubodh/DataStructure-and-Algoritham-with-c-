#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "subodh kumar";
    string sr;
    vector<string> str;

    for (auto i : s) {
        if (i != ' ') {
            sr.push_back(i);
        } else {
            str.push_back(sr);
            sr = ""; // Reset sr to an empty string
        }
    }

    // Add the last word to the vector
    str.push_back(sr);

    for (auto i : str) {
        cout << i << endl;
    }

    return 0;
}
