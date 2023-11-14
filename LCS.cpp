#include<bits/stdc++.h>
using namespace std;
int dp[1003][1003]; string s;
int solve(int i,int j,string &s1,string &s2){
if(i<0 ||j<0) return 0;
if(dp[i][j]!=-1) return dp[i][j];
int ans=solve(i-1,j,s1,s2);
ans=max(ans,solve(i,j-1,s1,s2));
ans=max(ans,solve(i-1,j-1,s1,s2)+(s1[i]==s2[j])); if(s1[i]==s2[j]) s.push_back(s1[i]);
return dp[i][j]=ans;
}
int MaxLenthOfLogestCommonSubsequence(string &s1,string &s2){
return solve(s1.size()-1,s2.size()-1,s1,s2);
}
int main(){
memset(dp,-1,sizeof(dp));
string s1, s2;
cin>>s1>>s2;
cout<<MaxLenthOfLogestCommonSubsequence(s1,s2);cout<<endl;for(auto &i:s) cout<<i;
}
