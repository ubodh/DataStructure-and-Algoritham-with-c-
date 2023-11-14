#include<bits/stdc++.h>
using namespace std;
void merge1(int arr1[],int arr2[],int arr3[],int n1,int n2){
int i=0,j=0,k=0;
while(i<n1&&j<n2){
if(arr1[i]<arr2[j])
    arr3[k++]=arr1[i++];
    else
        arr3[k++]=arr2[j++];
}
while(i<n1){
    arr3[k++]=arr1[i++];
}
while(j<n2){
    arr3[k++]=arr2[j++];
}
}
int main(){
int arr1[]={3,5,7,9};
int n1=*(&arr1+1)-arr1;
int arr2[]={1,2,4,5,6};
int n2=*(&arr2+1)-arr2;
int arr3[]={0};
merge1(arr1,arr2,arr3,n1,n2);
//int n3=*(&arr3+1)-arr3;
for(auto i:arr3)
    cout<<i<<" ";
}
