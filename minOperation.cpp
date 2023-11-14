//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int &k) {
        // code here
       priority_queue<int,vector<int>,greater<int>>ans;
       for(int i=0;i<n;i++){
           ans.push(arr[i]);
       }
       while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
       }
       int ct=0,a,b;
       while(!ans.empty()){
        a=ans.top();
        cout<<endl<<a<<endl;
       ans.pop();
        b=ans.top();
       ans.pop();

       if((a+b)<=k){
           ct++;
        cout<<ct<<endl;
       ans.push(a+b);
       a=0;
       b=0;
       }
       }
       return ct;
    }
};

//{ Driver Code Starts.
int main() {

        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    return 0;
}

// } Driver Code Ends
