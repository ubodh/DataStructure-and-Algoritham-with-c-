#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,0,1,0,0,1,0,1};
int n=*(&arr+1)-arr;
unordered_map<int,int>ump;
for(int i=0;i<n;i++){
    ump[arr[i]]++;
}
for(auto u:ump){
    for(int i=0;i<(u.second);i++){
        cout<<u.first<<" ";
    }
}
}
