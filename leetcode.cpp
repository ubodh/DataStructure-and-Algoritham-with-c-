#include<bits/stdc++.h>
using namespace std;
int main(){
string s="leetcode";
map<char,int>m;
for(auto i:s){
    m[i]++;
}
string ss="";
        for(auto j:m){
            for(int k=0;k<j.second;k++){
                ss+=j.first;
            }
        }
    cout<<ss;
}
