#include<bits/stdc++.h>
using namespace std;
long long int BinP(int a,int b){
int  ans=1;
while(b){
    if(b&1){
        ans=ans*a;
    }
    a=a*a;
    b>>=1;
}

return ans;
}
int main(){
 int a,b;
 cin>>a>>b;
 cout<<BinP(a,b);
}
