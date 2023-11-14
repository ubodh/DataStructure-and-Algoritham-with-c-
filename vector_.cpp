#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>se;
    for(int i=0;i<6;i++){

        string s;
        cin>>s;
        se.push_back(s);
    }
    sort(se.begin(),se.end());
for(auto ii:se)
    cout<<ii;
}
