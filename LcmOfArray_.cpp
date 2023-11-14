#include<bits/stdc++.h>
using namespace std;

int LcmOfArray(vector<int>&arr,int idx){
if(idx=arr.size()-1){
    return arr[idx];
}
int a=arr[idx];
int b=LcmOfArray(arr,idx+1);
return (a*b/__gcd(a,b));
}
int main(){
vector<int>arr={1,2,8,3};
cout<<LcmOfArray(arr,0);
}
