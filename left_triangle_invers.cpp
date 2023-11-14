#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int q;
cin>>q;
while(q){
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j<n-i)
            cout<<"*";
            else
                cout<<" ";
    }
    cout<<endl;
}
q--;
}
}
