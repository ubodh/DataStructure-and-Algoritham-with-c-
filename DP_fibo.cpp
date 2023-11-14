#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N][M];
int fib(int n,int y)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n][y]!=-1) return dp[n][m];
    else
        return dp[n][m]= fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fib(n);
}
