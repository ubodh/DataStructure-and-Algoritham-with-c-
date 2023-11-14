#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
int dp[N];
int lcs(int n)
{ if(dp[n]!=-1) return dp[n];
int ans=1;
    for(int i=0;i<n;i++)
    {
        if(h[n]>h[i])
            ans=max(ans,lcs(i)+1);
    }
    return dp[n]=ans;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    int cost=0;
    for(int i=0;i<n;i++)
    {
        cost=max(cost,lcs(i));
    }
    cout<<cost;
}
