#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   vector<int>countBits(int n)
   {
       vector<int>ans(n+1);
       ans[0]=0;
       for(int i=1;i<=n;i++)
       {
           ans[i]=ans[i/2]+i%2;
       }
       return ans;
   }
};
int main()
{
    int n;
    cin>>n;
    solution ob;
    vector<int>s=ob.countBits(n);
    for(int i:s)
        cout<<i<<" ";
    cout<<endl;
}
