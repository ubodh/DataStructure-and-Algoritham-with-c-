#include<bits/stdc++.h>
using namespace std;
int countMin(string &s)
{
     for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j])
                break;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<countMin(s);
   }
