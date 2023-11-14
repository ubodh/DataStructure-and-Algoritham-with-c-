//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
        bool fun(int i,int sum,vector<int>&nums,int k){
            if(sum==0) return true;
            if(i<0) return false;
            bool isPossible=fun(i-1,sum,nums,k);
            isPossible|=fun(i-1,sum-nums[i],nums,k-1);
            return isPossible;
        }
    bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         vector<int>v(a,a+n);
         int sum=accumulate(v.begin(),v.end(),0);
         if(sum%k!=0) return false;
         sum=sum/k;
         return fun(v.size()-1,sum,v,int k);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;

    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}
// } Driver Code Ends
