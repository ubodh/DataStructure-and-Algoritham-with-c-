#include<bits/stdc++.h>
using namespace std;
bool checkSorting(int a[],int n,int i){
if(i==n-1) return true;
return checkSorting(a,n,i+1)&(a[i]<=a[i+1]);
}
int main(){
int a[]={4,5,6,7,11,8};
int n=*(&a+1)-a;
if(checkSorting(a,n,0))
    cout<<"yes";
else
    cout<<"no";
}
