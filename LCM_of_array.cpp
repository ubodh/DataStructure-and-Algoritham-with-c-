#include<bits/stdc++.h>

using namespace std;
int LcmOfArra(vector<int>&arr ,int idx){
if(idx==arr.size()-1){
    return arr[idx];
}
int a=arr[idx];
int b=LcmOfArra(arr,idx+1);
return (a*b/__gcd(a,b));
}
int main(){
    vector<int>arr={6,9,12,15};
    cout<<LcmOfArra(arr,0);
}
