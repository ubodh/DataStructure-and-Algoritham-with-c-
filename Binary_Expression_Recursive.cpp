#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b)
{
  if(b==0) return 1;
  int ans=pow(a,b/2);
  if(b&1)
    return a*ans*ans;
  else
    return ans*ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int lc=pow(a,b);
    cout<<lc<<endl;
}
