#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}
