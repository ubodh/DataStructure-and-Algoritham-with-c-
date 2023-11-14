#include<bits/stdc++.h>
using namespace std;
int fun(int n){
if(0<=n && n<=9)
    return 1;
return (1+fun(n/10));
}
int main(){
int n=8096;
cout<<fun(n);
}
