#include<bits/stdc++.h>
using namespace std;
int LCM(int a,int b)
{
    int l;
    for(int l=a<b?a:b;l<=a*b;l=l+(a<b?a:b))
    {
        if(l%a==0 and l%b==0)
        {
        break;
        }
    }
    return l;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int lcm=LCM(a,b);
    cout<<lcm<<endl;
}
