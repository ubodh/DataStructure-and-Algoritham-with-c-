#include<bits/stdc++.h>
using namespace std;
vector<pair<string,int>>solve(vector<string>&v){
map<string,int>m;
vector<pair<string,int>>ans;
for(auto j:v){
    int idx=j.find('@');
    m[j.substr(idx)]++;
}
for(auto k:m){
    ans.push_back({k.first,k.second});
}
return ans;
}
int main(){
vector<string >v={
    "subodh@gmail.com",
    "ankur@gmail.com",
    "suraj@yahoo.com",
    "akash@yahoo.com",
    "ajay@vitt.ac.in",
    "suno@vitt.ac.in"
};
vector<pair<string ,int>>ans=solve(v);
for(auto i:ans){
    cout<<i.first<<" "<<i.second<<endl;
}
}
