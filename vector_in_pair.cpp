#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<pair<int,int>>v{{1,2},{3,4},{5,6},{7,8} };
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        // v.push_back({x,y});
    }
    for(auto &value:v)
    {
        cout<<value.first<< " "<<value.second<<endl;
    }
}
