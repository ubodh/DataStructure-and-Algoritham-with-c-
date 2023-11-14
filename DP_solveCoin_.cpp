#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];
int solveCoin(int x,vector<int>&coins)
{
   if(x==0) return 0;
   int an=INT_MAX;
   for(int coin:coins)
   { if(x-coin>=0)
       an=min(an,solveCoin(x-coin,coins)+1);
   }
   return an;
}
int coinChange(vector<int>&coins,int x)
{
    memset(dp,-1,sizeof(dp));
    int ans=solveCoin(x,coins);
    return ans==INT_MAX?-1:ans;
}
int main()
{
    vector<int>coins={1,2,3};

    cout<<coinChange(coins,11);
}
