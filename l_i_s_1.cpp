#include<bits/stdc++.h>
using namespace std;
vector<int>v{ 4,9,2,3,101,8};
int n=v.size();
int lis(int i){
    int ans=1;
    for(int j=0;j<i;j++){
        if(v[j]<v[i]){
            ans=max(ans,lis(j)+1);
        }
    }
 return ans;
}
int main(){
    int ans=0;
for(int i=0;i<n;i++){
        ans=max(ans,lis(i));
}
cout<<ans;
}
