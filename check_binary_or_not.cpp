#include<bits/stdc++.h>
using namespace std;
int  main(){
int n;
cin>>n;
if(n==1||n==0||n<0)
  {
        cout<<"it is not Binary number";
  }
  else if(n>0)
    while(n){
        int r=n%10;
        if(r>=2){
        cout<<"it it not Binary number";
        break;
        }
        else
         n=n/10;
}

        cout<<"it isBinary number";
}
