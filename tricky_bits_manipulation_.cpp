#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^a[i];
}
for(int i=1;i<=n;i++){
    ans=ans^i;
}
cout<<ans;
}
