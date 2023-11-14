#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i = 0 ; i<(1<<nums.size()) ; i++){
            vector<int> vec;
            for(int j = 0 ; j< 32 ; j++){
                if( (i & (1<<j)) != 0) vec.push_back(nums[j]);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
int main(){
int n;
cin>>n;
vector<vector<int>>ans1=isValid(n);
   for(auto i:ans1){
        for(auto j:i){
            cout<<j<<"";
        }
    }
}
