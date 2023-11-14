#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>>v{ {1,2,3},{4,5,6},{7,8,9} };
int r=v.size();
int c=v[0].size();
int s_r=0;
int s_c=0;
int e_r=r-1;
int e_c=c-1;
int count1=0;
int total=r*c;
while(count1<total){
    for(int i=s_c;count1<total&i<=e_c;i++){
        cout<<v[s_r][i]<<" ";
        count1++;
    }
    s_r++;
    for(int i=s_r;count1<total&i<=e_r;i++){
        cout<<v[i][e_c]<<" ";
        count1++;
    }
    e_c--;
    for(int i=e_c;count1<total&i>=s_c;i--){
        cout<<v[e_r][i]<<"  ";
        count1++;
    }
    e_r--;
    for(int i=e_r;count1<total&i>s_r;i--){
        cout<<v[i][s_c]<<" ";
        count1++;
    }
    s_c++;
}
}
