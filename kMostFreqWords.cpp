#include<bits/stdc++.h>
using namespace std;
vector<string> kMostFreqWords(vector<string>words, int n, int k){
    // Write your code here.
    vector<string>ans;
    unordered_map<string,int>unp;
    for(int i=0;i<n;i++){
        unp[words[i]]++;
    }
    set<string>se;
    vector<string>v1;
     for(auto i:unp){
         if(i.second>=2)
             se.insert(i.first);
         else
             v1.push_back(i.first);
     }
    for(auto kk:se)
    {
        ans.push_back(kk);
    }

     sort(v1.begin(),v1.end());
    if(se.size()==k)
       return ans;

    else{

                for(int j=se.size();j<=k;j++)
                {
                    for(auto kkk:v1)
                   ans.push_back(kkk);
                }
                return ans;
           }
}
int main()
{
    vector<string>se;
    for(int i=0;i<6;i++){

        string s;
        cin>>s;
        se.push_back(s);
    }
    int k;
    cin>>k;
    vector<string>sss= kMostFreqWords(se,se.size(),k);

for(auto ii:sss)
    cout<<ii;
}

