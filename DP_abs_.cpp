#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
int dp[N];
int k;
int fun(int n)
{
  //  if(n==0) return 0;
if(dp[n]!=-1) return dp[n];
    int cost=INT_MAX;
    for(int i=0;i<k;i++)
    { if(n-i>0)
        cost=min(cost,fun(n-i)+abs(h[i]-h[n-i]));

    }
    return dp[n]=cost;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    cout<<fun(n-1);
}
