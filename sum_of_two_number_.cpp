#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={1,2,3,4};
int k;
int n=*(&a+1)-a;
for(int i=0;i<n;i++){
        k=2;
    for(int j=i+1;j<k;j++)
    {
        cout<<(a[i]+a[j])<<"  ";
    }
k=0;
}
}
