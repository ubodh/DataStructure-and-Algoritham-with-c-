#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> sumOfPair(int arr[],int k,int n){
    vector<pair<int,int>>ans;
    int ct=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(k==arr[i]+arr[j]){
            ans.push_back({arr[i],arr[j]});
        }
    }
}
return ans;
}
int main(){
int arr[] = { 1, 5, 7, -1, 5 };
int k=6;
//cin>>k;
vector<pair<int,int>>ans=sumOfPair(arr,k,5);
for(auto K:ans){
    cout<<K.first<<"   "<<K.second<<endl;
}
}
