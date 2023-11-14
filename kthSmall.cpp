#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter the kth element is ";
int k;
cin>>k;
int p=kthSmall(a,0,n,k);
cout<<p<<endl;
}
int kthSmall(int a[],int i,int j,int k)
{
    priority_queue<int>q;
    for(int l=i;l<k;l++)
    {
        q.push(a[l]);
    }
    for(int r=k;r<j;r++)
    {
        if(a[r]<q.top())
        {
            q.pop();
            q.push(a[r]);
        }
    }
    return q.top();
}