#include<bits/stdc++.h>
using namespace std;
vector<int>Dublicate_Number(vector<int>nums)
{
    set<int>s;
    for(int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }
    vector<int>v;
    for(auto it=s.begin();it!=s.end();it++)
    {
        v.push_back(*it);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>db=Dublicate_Number(v);
    for(int K:db)
    {
        cout<<K<<endl;
    }
}
