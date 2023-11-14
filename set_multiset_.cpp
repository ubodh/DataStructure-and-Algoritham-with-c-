#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>s;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.insert(x);
}
cout<<endl;
for(auto i:s)
    cout<<i<<endl;
}
