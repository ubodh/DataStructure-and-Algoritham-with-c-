/*N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
Explanation:Longest increasing subsequence(LIS)
0 2 6 9 13 15, which has length 6
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1212][2323];
int solve(int a[],int n,int curr,int prev){
    if(curr==n) return 0;
    int take=0;
    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
if(prev==-1||a[curr]>a[prev])
take=1+solve(a,n,curr+1,curr);
int notTake=0+solve(a,n,curr+1,prev);
return dp[curr][prev+1]=max(take,notTake);
}
int LIS(int a[],int n){
memset(dp,-1,sizeof(dp));
return solve(a,n,0,-1);
}
int main(){
int A[]={0,8,4,12,2,10,6,14,1,9,5,
     13,3,11,7,15};
     int N=*(&A+1)-A;
     cout<<LIS(A,N);
}
