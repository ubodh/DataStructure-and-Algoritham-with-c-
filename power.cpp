#include<bits/stdc++.h>
using namespace std;
int pow1(int a,int b){
int ans=1;
for(int i=0;i<b;i++){
ans=a*1LL*ans;
}
return ans;
}
int pow2(int a,int b){
    if(b==0) return 1;
int ans=pow2(a,b/2);
if(b&1)
    return ans*1LL*ans*a;
else
    return ans*ans*1LL;
}
int pow3(int a,int b){
int ans=1;
while(b){
    if(b&1){
        ans=a*1LL*ans;
    }
    a=a*1LL*a;
    b>>=1;
}
return ans;
}
int main(){
int a,b;
cin>>a>>b;
cout<<pow1(a,b)<<endl;
cout<<pow2(a,b)<<endl;
cout<<pow3(a,b)<<endl;
}
