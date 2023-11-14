#include<bits/stdc++.h>
using namespace std;
string reverseStringWordWise(string &s){
stack<string>s1;
for(int i=0;i<s.size();i++){
    string word="";
    while(s[i]!=' ' and i<s.size()){
        word+=s[i];
        i++;
    }
    s1.push(word);
}
string str;
while(!s1.empty()){
    str+=s1.top()+" ";
    s1.pop();

}
return str;
}
int main(){
string s;
getline(cin,s);
string ans=reverseStringWordWise(s);
cout<<ans<<endl;
}
