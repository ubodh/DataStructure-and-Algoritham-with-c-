#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v{1,2,3,4,4,5,6};
for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;
}
int ser=6;
vector<int>::iterator it;
 it=find(v.begin(),v.end(),ser);
if(it!=v.end()){
    cout<<it-v.begin() ;
}
}
