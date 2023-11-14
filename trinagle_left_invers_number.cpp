#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int k;
for(int i=1;i<=n;i++){
        k=1;
    for(int j=1;j<=n;j++){
        if(j<=n+1-i){
            cout<<k;
            k++;
        }
        else
            cout<<" ";
    }
    cout<<endl;
}
}
