#include<bits/stdc++.h>
using namespace std;
void print(multiset<int>&s){
for(auto it=s.begin();it!=s.end();it++){
    cout<<(*it)<< "  ";
}
}
int main(){
multiset<int>s;
s.insert(2);
s.insert(5);
s.insert(1);
s.insert(0);
s.insert(0);
s.insert(2);
s.insert(2);
s.insert(4);
print(s);
}
