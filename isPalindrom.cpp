#include<bits/stdc++.h>
using namespace std;
string reverse1(string &s){
int s1=0;
int e=s.size()-1;
while(s1<e){
    swap(s[s1++],s[e--]);
}
return  s;
}
bool isPalindrom(string &s){
string str=reverse1(s);

int i=0;
 while(i<s.size() ){
     if(str[i]!=s[i]){
        return false;
        break;
     }
        i++;
 }
 return true;
}
int main(){
string s="";
if(isPalindrom(s))
    cout<<"yes";
else
    cout<<"no";
}
