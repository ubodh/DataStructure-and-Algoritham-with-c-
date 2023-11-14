#include<bits/stdc++.h>
using namespace std;
  vector<pair<string ,int>>findInput(vector<string>&nums){
      vector<pair<string ,int>>ans;
      map<string ,int>m;
      for(int i=0;i<nums.size();i++)
      {
          auto findIndex=nums[i].find('@');
          m[nums[i].substr(findIndex+1)]++;
      }
      for(auto K:m){
        ans.push_back( make_pair(K.first,K.second));
      }
      return ans;
  }
int main()
{
  vector<string> input = {
        "rupesh@gmail.com", "akole@yahoo.com",
        "rupesh.21910879@viit.ac.in",
        "faculty.surname@viit.ac.in",
        "Shyam@gmail.com", "examcell@viit.ac.in"
    };

  vector<pair<string ,int>>ans=findInput(input);
  for(pair<string ,int>K:ans){
    cout<<K.first<<" "<<K.second<<endl;
  }
}
