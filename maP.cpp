#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int >p;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
     string  x;
    cin>>x;
    p[x]++;
  }
  for(auto k:p)
      cout<<k.first<<" "<<k.second<<endl;
}
