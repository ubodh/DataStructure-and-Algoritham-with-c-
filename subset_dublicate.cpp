#include<bits/stdc++.h>
using namespace std;
void solve(int v[],int n,vector<int>&out,int idx,vector<vector<int>>&ans){

      ans.push_back(out);

    for (int i = idx; i < n; i++) {//1 2 3
        // include the A[i] in subset.
        out.push_back(v[i]);
        solve(v,n,out, i + 1,ans);
        out.pop_back();
    }
    return;
}
void subset(int v[],int n){
    vector<int>out;
    int id=0;
vector<vector<int>>ans;
solve(v,n,out,id,ans);
for(auto i:ans){
    for(int j:i){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
int main()
{ int v[] = {3,2,1, 1};
    int size=sizeof(v)/sizeof(v[0]);
    subset(v, size);
    return 0;
}
