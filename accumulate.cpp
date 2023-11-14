#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,4,2,3,1};
int ans=0;
int n=*(&arr+1)-arr;
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
for(int i=1;i<n;i++){
    ans=ans^i;
}
cout<<ans;
int sum=accumulate(arr,arr+n,0);
int sum1=n*(n-1)/2;
cout<<endl<<sum1-sum;
}
