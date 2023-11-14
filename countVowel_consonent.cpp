#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
// subodh  -> size=6
//
int Count_vowel(string &s,int idx){
    int ct=0;
         if(s.size()==idx) return 1;
    for(auto i:s)
    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
        ct++;
    return ct;
}
int main(){
string s;
getline(cin,s);
int ct=0;
for(auto i:s){
    if(i==' ')
        continue;
    ct++;
}
//int n=s.size();
int vowels=Count_vowel(s,0);
int consonants=ct-vowels;
cout<<"total vowel is ="<<vowels<<endl<<"total consonants is="<<consonants;
}
