#include<bits/stdc++.h>
using namespace std;
int ma(int a,int b,int c,int d){
int r1,r2;
return (r1=a>b?a:b)>(r2=c>d?c:d)?r1:r2;
}
int main(){
int a=3,b=5,c=9,d=11;
cout<<ma(a,b,c,d);
}
