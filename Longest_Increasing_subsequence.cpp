#include<bits/stdc++.h>
using namespace std;
int A[]={0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
     int N=*(&A+1)-A;
int dp[1000001];
int LIS(int i,int a[],int n){
int ans=1;
if(dp[i]!=-1) return dp[i];
for(int j=0;j<i;j++){
        if(a[i]>a[j])
    ans=max(ans,LIS(j,a,n)+1);
}
return dp[i]=ans;
}
int LIS(int a[],int n){
    int ans=0; memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++){
    ans=max(ans,LIS(i,a,n));
}
return ans;
}
int main(){
     cout<<LIS(A,N);
}
