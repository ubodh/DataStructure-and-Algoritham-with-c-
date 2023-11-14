#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=(1,2,3);
    cout<<k;//3
    int n=11;//1011
    int ct=0;
while(n){
    ct+=n%2;
    n>>=1;//n=n/2;
}
cout<<ct;
}
