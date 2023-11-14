#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,3,4,18,22};
int k=22;
auto it=find(v.begin(),v.end(),k);
if(it!=v.end()){
    cout<<"it is present";
    cout<<it-v.begin();
}
else
    cout<<"it is not present";
}
