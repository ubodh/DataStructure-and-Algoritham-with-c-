#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    return  a.second<b.second;

}
int main(){
int arr[]={10,16,7,14,5,3,12,9};
int n=sizeof(arr)/sizeof(arr[0]);
vector<pair<int,int>>ans;
for(int i=0;i<n;i++){
    ans.push_back(make_pair(i,arr[i]));
}
sort(ans.begin(),ans.end(),comp);
for(int i=0;i<n;i++){
     arr[ans[i].first]=i;
}
for(auto i:arr)
    cout<<i<<"  ";
}
