#include<bits/stdc++.h>
using namespace std;
int Sum_Array(int a[],int n)
{
    if(n==0)
        return 0;
    else
        return Sum_Array(a,n-1)+a[n];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=Sum_Array(a,n);
    cout<<sum;
}
