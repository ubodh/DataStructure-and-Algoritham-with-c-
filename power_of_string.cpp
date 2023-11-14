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
        int result=0;
        int pow=1;
        for(int i=0;s[i];i++)
        {
            int b_d=s[i]-'0';
            result=result+(b_d*pow);
            pow=pow*2;
        }
        cout<<result<<endl;
    }
}
