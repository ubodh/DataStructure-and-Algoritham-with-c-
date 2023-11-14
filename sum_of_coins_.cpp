#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&num,int k)
{
    if(k==0) return 0;
    if(k<0) return INT_MAX;
    int ans=INT_MAX;
    for(int i=0;i<num.size();i++)
    {
        if(k-num[i]>0&&ans!=INT_MAX)
        ans=min(ans+0LL,solve(num,k-num[i])+1LL);
    }

    cout<<ans;
}
int ME(vector<int>&nums,int k)
{
    int ans=solve(nums,k);
    if(ans==INT_MAX)
        cout<<-1;
else
    cout<<ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the number of sum of coins"<<endl;
    int k;
    cin>>k;
    cout<<ME(v,k);
}
