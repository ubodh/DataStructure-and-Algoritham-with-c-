#include<bits/stdc++.h>
using namespace std;
vector<string>kstring(vector<string>&s,int k,int n){
vector<string>ans;
set<string>se;
vector<string>sorting;
unordered_map<string,int>ump;
for(auto kk:s){
    ump[kk]++;
    if(ump[kk]>=2)
        se.insert(ump.first);
        else
            sorting.push_back(ump.first);
}
if(se.size()==k)
{
    for(auto y:se)
    {
        ans.push_back(y);
    }
}
else{

}
}
int main()
{
    vector<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.push_back(x);
    }
    int k;
    cin>>k;
    vector<string>ks=kstring(s,k,n);
    for(auto k:ks){
        cout<<k<<" ";
    }
}
