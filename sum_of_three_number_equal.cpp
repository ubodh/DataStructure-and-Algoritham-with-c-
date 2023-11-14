#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int s=15;
int n=10;
vector<int>ans;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if((arr[i]+arr[j])==s){
                ans.push_back(i);
                ans.push_back(j);
                break;

        }
    }
}
for(auto &k:ans){
    cout<<k<<" ";
}
}
