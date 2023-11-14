#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];
int fibo(int n)
{

    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibo(n-1)+fibo(n-2);
}
int main()
{

    memset(dp,-1,sizeof(dp));
    int n,i;
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[i];
    cout<<fibo(n);
}
