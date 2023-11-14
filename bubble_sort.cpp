#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    int temp;
    for(int round=1;round<n;round++){
        for(int i=0;i<n-round;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={2,8,1,9,0,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}