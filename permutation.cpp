#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void permut(vector<int>&v,int idx)
{
    if(idx==v.size())
    {
        ans.push_back(v);
        return ;
    }
    for(int i=idx;i<v.size();i++)
    {
        swap(v[i],v[idx]);
        permut(v,idx+1);
        swap(v[i],v[idx]);
    }
}
int main()
{
    int n;
    cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   permut(v,0);
   for(auto i:v)
   cout<<i;
}