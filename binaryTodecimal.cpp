#include<bits/stdc++.h>
using namespace std;
void  binaryTodecimal(int n){
if(n==0) return ;
binaryTodecimal(n/2);
cout<<n%2;
}
int main(){
int n=25;
int x=n;
vector<int>v;
while(n){
    int x=n%2;
    cout<<x;
    v.push_back(x);
    n>>=1;
}
cout<<endl;
binaryTodecimal(x);
cout<<endl;
for(auto i:v)
    cout<<i;
cout<<endl;
int sum=0;//2^v[i]+2^
int pow=1;
for(int i=0;i<v.size();i++){
    int n=v[i];
    sum+=pow*n;
    pow=pow*2;
}
cout<<sum;
}
