#include<bits/stdc++.h>
using namespace std;
int HCF(int a,int b)
{
    int l;
    //for(h=a<b?a:b;h>1;h--)
    for(l=a<b?a:b;l<=a*b;l=l+(a<b?a:b))
    {
        if(l%a==0 and l%b==0)
            break;
    }
    return l;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int hcf=HCF(a,b);
    cout<<hcf<<endl;
}
