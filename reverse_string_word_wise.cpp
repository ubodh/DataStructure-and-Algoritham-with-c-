#include <bits/stdc++.h>
using namespace std;
// subodh kumar =kumar subodh
string reverseStringWordWise(string &input)
{
    vector<string>v;
    string s=" ";
    for(auto &i:input){
        if(i!=' ')
         s+=i;
    else
        v.push_back(s);
    s=" ";
    }
     string ss;
     for(int i=v.size()-1;i;i--){
        ss+=v[i];
     }
     return ss;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
