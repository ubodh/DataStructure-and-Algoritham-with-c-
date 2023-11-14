#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>se;
    vector<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string ss;
        cin>>ss;
        s.push_back(ss);
    }
  map<string,int>unp;
    for( auto K:s)
    {
        unp[K]++;
    }
   for(auto p:unp)

    for(auto i:unp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    int r=0,t;
    for(auto ii:se
        if(r>2)
            break;
        cout<<ii<<" ";
    }
}
