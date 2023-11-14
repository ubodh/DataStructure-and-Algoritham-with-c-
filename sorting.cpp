#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[],int n){
int m=arr[0];
for(int i=1;i<n;i++){
    if( m<arr[i] )
        m=arr[i];
}
return m;
}
void  maxi1(int arr[],int n){
//int m=max(arr,arr+n);
sort( arr , arr + n ,greater<int>());
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}
cout<<endl;
sort(arr,arr+n);
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}
}
int main(){
int arr[]={4,3,2,6,8};
int n=*(&arr+1)-arr;
for(auto i:arr){
    cout<<i;
}
cout<<endl;
cout<<maxi(arr,n);
for(auto i:arr){
    cout<<i;
}
cout<<endl;
maxi1(arr,n);
for(auto i:arr){
    cout<<i;
}
}
