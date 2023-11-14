//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int dp[1001][1005];
bool solve(int i,vector<int>&ans,int sum){
    if(sum==0) return true;
    if(i<0) return false;
    if(dp[i][sum]!=-1) return dp[i][sum];
    bool isposible=solve(i-1,ans,sum);
    if(sum-ans[i]>0)
    isposible|=solve(i-1,ans,sum-ans[i]);
    return dp[i][sum]=isposible;

}
    int equalPartition(int N, int arr[])
    {
        // code here
             int  NO,YES;
        vector<int>ans(arr,arr+N);
        int sum =accumulate(ans.begin(),ans.end(),0);
        if(sum%2!=0)
        return NO;
        else
        { bool found=solve(ans.size()-1,ans,sum/2);
        if(found) return YES;
        else
        return NO;
    }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];

        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends
