#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
   // cout<<s;
    cout<<endl;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
           s[i]='A'+(s[i]-'a');
        }
    }
    cout<<s;
    }
}
