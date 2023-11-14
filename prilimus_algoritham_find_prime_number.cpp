#include<bits/stdc++.h>
using namespace std;
void prilimus_algoritham_prime(int n)
{
    //int a[1000]={0};
    vector<int>a(n,0);
    for(int i=2;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=2*i;j<n;j+=i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]==0)
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    prilimus_algoritham_prime(n);
}