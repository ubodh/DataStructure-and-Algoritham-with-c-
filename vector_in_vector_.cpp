#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<vector<int>>v(n);
for(int j=0;j<n;j++){
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v[j].push_back(x);
}
}
for(auto i:v){
    for(auto j:i){
        cout<<j<<" ";

    }
}
}
