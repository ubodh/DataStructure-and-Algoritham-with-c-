#include<bits/stdc++.h>
using namespace std;
class solution{
public :
    bool func(int i,int sum,vector<int>nums)
    {
        if(sum==0) return true;
        if(i<0) return false;
        bool isposible=func(i-1,sum,nums);
        isposible |=func(i-1,sum-nums[i],nums);
        return isposible;
    }
    bool canpartion(vector<int>&nums)
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2==0)
        {
            return func(nums.size()-1,sum,nums);
        }
        else
            return false;
    }
};
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        solution bo;
        cout<<bo.canpartion(nums);
    }
}
