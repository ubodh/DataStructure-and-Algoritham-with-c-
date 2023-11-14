#include<bits/stdc++.h>
using namespace std;
int main(){
string s="subodh kumar  mahto";
vector<string>str;
string s1;
for(auto i:s){
    if(i!=' ')
        s1=s1+i;
    else{
        str.push_back(s1);
        s1="";
    }

}
string s2="";
for(int i=str.size()-1;i>=0;i--)
     s2+=str[i];
     cout<<s2;
}
