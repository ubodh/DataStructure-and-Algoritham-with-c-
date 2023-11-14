//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    int ct=0;
	    vector<int>ans(n);
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(arr[i]>arr[j]){
	                ct++;
	            }
	        }
	        if(ct==n-1)
	         ans.push_back(0);
	         else
	        ans.push_back(ct);
	         ct=0;
	    }
	    return ans;

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
