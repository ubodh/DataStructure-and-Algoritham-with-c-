#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>getsubset(vector<int>&nums)
{
    vector<vector<int>>ans;
    for(int i=0;i<(1<<nums.size());i++)
    {
        vector<int>su;
        for(int j=0;j<nums.size();j++)
        {
            if((i&(1<<j))!=0)
            {
                su.push_back(nums[j]);
            }
        }
        ans.push_back(su);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(v[i]);
    }
    vector<int>sst;
    for(auto it=st.begin();it!=st.end();it++)
        sst.push_back(*it);
    for(auto it=st.begin();it!=st.end();it++)
        cout<<(*it)<<" ";

    vector<vector<int>>subsets=getsubset(sst);
    for(auto su:subsets)
    {
        for(int i:su)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
