#include<bits/stdc++.h>
using namespace std;
int main(){
string str[]={" ","one","two","three","four","five","six","seven","eight","nine"};
vector<string>s;
int n;
cin>>n;
while(n){
int r=n%10;
s.push_back(str[r]);
//cout<<str[r]<<" ";
n=n/10;
}
cout<<endl;
for(auto i: s){
    cout<<i<<" ";
}
cout<<endl;
for(int i=s.size();i>=0;i--){
    cout<<s[i]<<" ";
}
}
