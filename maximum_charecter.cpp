#include<bits/stdc++.h>
using namespace std;
 char isMaxChar(string &s){
 int ch[26]={0};
 for(int i=0;i<s.size();i++){
    ch[s[i]-'a']++;// kisi bhi charecter me ghatane par ek inter ata h;
 }
 int maxi=-1,k=0;
 for(int i=0;i<26;i++){
    if(maxi<ch[i])
    {
    k=i;
    maxi=ch[i];
    }
 }
 return  k+'a';
 cout<<maxi;
 }
int main(){
string s;
cin>>s;
cout<<isMaxChar(s);
}
