#include<bits/stdc++.h>
using namespace std;
int main(){
//1 3 4 1 3 1
int a[]={1,3,4,1,3,1,1,3,3,3};
int n=*(&a+1)-a;
int ct=1;
int maxi=-1;
for(int i=0;i<n;i++){
        ct=1;
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j])
        {
            ct++;
        }
    }
    maxi=max(maxi,ct);
}
cout<<maxi;
}
