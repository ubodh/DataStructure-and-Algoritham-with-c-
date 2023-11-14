#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
 cin>>n;
  map<int ,string>m;

 for(int i=0;i<n;i++){
      string s;
      int z;
      cin>>z>>s;
      m.insert({z,s});
 }
  map<int ,string>::iterator it;
  for(auto it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }


}
