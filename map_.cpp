#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    for(auto K:m){
        cout<<K.first<<" "<<K.second<<endl;
    }
}
