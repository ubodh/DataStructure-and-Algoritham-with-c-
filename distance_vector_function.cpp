#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,3,4,3,4,1,2};
sort(v.begin(),v.end());
int ct;
ct=distance(v.begin(),unique(v.begin(),v.end()));
cout<<ct;
}
