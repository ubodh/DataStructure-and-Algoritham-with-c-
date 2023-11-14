#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&nums,int i,int j){
    while(i<j){
        swap(nums[i++],nums[j--]);
    }
}
void ArrayRote(vector<int>&nums,int n,int k)
{
   // int n=nums.size();
    k=k%n;
    reverse(nums,0,n-k-1);
    reverse(nums,n-k,n-1);
    reverse(nums,0,n-1);
}

int main() {
    //Write your code here
   int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    ArrayRote(v,n,k);
 for(int value:v)
    cout<<value<<" ";
}
