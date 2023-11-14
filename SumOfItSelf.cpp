#include<bits/stdc++.h>
using namespace std;
void SumOfItSelf(int a[],int n){
int sum=accumulate(a,a+n,0);
for(int i=0;i<n;i++){
    cout<<sum-a[i]<<" ";
}
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
SumOfItSelf(a,n);
}
