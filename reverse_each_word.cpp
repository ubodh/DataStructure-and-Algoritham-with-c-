#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string reverse(string s){
int i=0;
int j=s.size()-1;
while(i<j){
    swap(s[i++],s[j--]);
}
return s;
}

string reverseEachWord(string input)
{
    // Write your code here
    string s;
    string s2;
    for(int i=0;i<input.size();i++){
        s=" ";
        while(input[i]!=' ' and i<input.size())
        {
            s+=input[i];
            i++;
        }

          s2+=reverse(s);
    }
    return s2;
}

int main()
{

    string str;
    getline(cin, str);
   string ans = reverseEachWord(str);
    cout << ans<< endl;
    ;
}
