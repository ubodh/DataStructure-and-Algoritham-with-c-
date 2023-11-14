#include<bits/stdc++.h>
using namespace std;
//given array in negative number is more and ,find 
//continuous sub_arry maximum sum

int main(){
int arr[]={-2, 3, -1, 2};
int n1=*(&arr+1)-arr;
int lmaxi=arr[0],gmaxi=arr[0];
for(int i=1;i<n1;i++){
    if(arr[i]>(arr[i]+lmaxi))
        lmaxi=arr[i];
    else
    lmaxi=lmaxi+arr[i];
    gmaxi=max(gmaxi,lmaxi);
}
cout<<gmaxi;
}
