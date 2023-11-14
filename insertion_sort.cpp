#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j>=0 && temp<arr[j];j--){
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
int main(){
    int arr[]={2,8,11,1,9,0,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}