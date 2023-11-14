#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string &input) {
    // Write your code here
    int x=0;
    for(auto &i:input)
    if(i==' ')
    x++;
    return x;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
