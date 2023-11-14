#include<bits/stdc++.h>
using namespace std;
bool isPermutation(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(auto i:s1){
        for(auto j:s2){
            if(i!=j){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    bool b=isPermutation(s1,s2);
    if(b){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
