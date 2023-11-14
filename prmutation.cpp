#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&ans,int idx,vector<int>&nums)
{
    if(idx==nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    for(int i=idx;i<nums.size();i++)
    {
        swap(nums[i],nums[idx]);
        solve(ans,idx+1,nums);
        swap(nums[i],nums[idx]);
    }
}
vector<vector<int>>prmutation(vector<int>&num)
{
   // vector<int>output;
    vector<vector<int>>ans;
    int idx=0;
    solve(ans,idx,num);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<vector<int>>pr=prmutation(a);
    for(vector<int>&i:pr)
    {
        for(int K:i)
        {
            cout<<K<<" ";
        }
        cout<<endl;
    }
}
