#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int l=2*n-1;
for(int i =1;i<=n+1;i++){
    for(int j=1;j<=l;j++){
        if(j==l/2+i || j==l/2-i){
            cout<<"*";
        }else{
        cout<<" ";
        }
    }
    cout<<endl;
}
}
