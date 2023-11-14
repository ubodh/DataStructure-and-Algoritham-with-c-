#include<bits/stdc++.h>
using namespace std;
int main(){
vector<string>v={"i","like","codingninjas","i","love", "coding","love"};
unordered_map<string,int>ump;
set<string>se;
vector<string>sor;
for(auto k:v){
    ump[k]++;
}
for(auto vll:ump){
    if(vll.second>=2)
        se.insert(vll.first);
    else
        sor.push_back(vll.first);

}
for(auto value:ump){
    cout<<value.first<<" "<<value.second<<endl;
}
cout<<endl<<endl;
for(auto va:se){
    cout<<va<<endl;
}
cout<<endl<<endl;
sort(sor.begin(),sor.end());
for(auto val:sor){
    cout<<val<<endl;
}
}
