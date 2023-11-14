#include<bits/stdc++.h>
int isVowel(string &s){
for(int j=0;j<s.size();j++){
    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
        return 1;
}
        return  0;

}
int main(){
string s;
std::cin>>s;
if(isVowel(s))
    std::cout<<"it  is vowel present";
else
    std::cout<<"it is not vowel present";
}
