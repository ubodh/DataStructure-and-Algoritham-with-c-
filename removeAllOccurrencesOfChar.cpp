#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here
    string s;
    for(int i=0;i<input.size();i++){
        if(input[i]==c)
        continue;
        else
        s+=input[i];
    }
    return s;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
