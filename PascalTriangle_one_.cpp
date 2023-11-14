#include<bits/stdc++.h>
using namespace std;
int PascalTriangle(int n,int n1){
if(n1==1|| n1==n)
    return 1;
return PascalTriangle(n-1,n1-1)+PascalTriangle(n-1,n1);
}
int main(){
int n,n1;
cin>>n>>n1;
cout<<PascalTriangle(n,n1);
}
