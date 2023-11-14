#include<bits/stdc++.h>
using namespace std;
 void reverse(string &s){
   int s1=0;
   int e=s.size()-1;
   while(s1<e){
    swap(s[s1++],s[e--]);
   }
 }
int main(){
string s="abcba";
reverse(s);
cout<<s;
}
