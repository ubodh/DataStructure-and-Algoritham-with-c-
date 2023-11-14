#include<bits/stdc++.h>
using namespace  std;
class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int ct=0;
        while(b)
        {
            ct+=b%2;
            b/=2;
        }
        cout<<ct<<endl;
        int ans=0;
        int bt=ct;
        for(int i=31;i>=0 &&bt;i--)
        {
            if((a&(1<<i)))
            {
                ans|=(1<<i);
                bt--;
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<=31 &&bt;i++)
        {
            if((ans&(1<<i))==0)
            {
                ans|=(1<<i);
                bt--;
            }
        }
        cout<<ans<<endl;
      return   ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends
