#include<bits/stdc++.h>
using namespace std;
bool unicOccurence(vector<int>v){
int ans=0;
for(int i=0;i<v.size();i++){
    ans=ans^v[i];
    if(ans==v[i])
         return true;
}
return false;
}
int main(){
vector<int>v{1,2,2,1,1,3};
if(unicOccurence(v))
    cout<<"yes";
else
    cout<<"no";
}
