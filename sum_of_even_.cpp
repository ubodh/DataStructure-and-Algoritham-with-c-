#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
        cin>>a[i];
}
int sum=0;
for(int i=0;i<n;i++){
    if(a[i]%2==0)
        sum+=a[i];
}
cout<<"it is sum of even number is="<<sum;
}
