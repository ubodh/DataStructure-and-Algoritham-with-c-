#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
cin>>q;
while(q--)
{
    string s;
    cin>>s;
    int power=1;
    int result=0;
    for(int i=0;i<s.size();i++)
    {
        int b_d=s[i]-'0';
        result=result+b_d*power;
        power=power*2;
    }
    cout<<result<<endl;
}
}
