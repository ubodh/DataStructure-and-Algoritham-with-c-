#include<bits/stdc++.h>
using namespace std;
void meargeArray(int arr[],int arr1[],int m1,int m2){
       int l1=m1-1;
       int l2=m2-1;
       int t=m1+m2-1;
       while(l1>=0 and l2>=0){
        if(arr[l1]>arr1[l2]){
            arr[t--]=arr[l1--];
        }else
        {
            arr[t--]=arr1[l2--];
        }
       }
        while(l2>=0)
            arr[t--]=arr1[l2--];


}
int main(){
int arr[]={1,4,6,8,0,0,0,0};
int n=*(&arr+1)-arr;
int arr1[]={3,44,53,72};
int n1=*(&arr1+1)-arr1;
meargeArray(arr,arr1,n,n1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
}
