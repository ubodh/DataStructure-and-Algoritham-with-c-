#include<bits/stdc++.h>
using namespace std;
char CountChar(string s){
  int arr[26]={0};
  int n=s.size();
  for(int i=0;i<n;i++){
    arr[s[i]-'a']++;
  }
  int maxi=-1;
  int ans=0;
  for(int i=0;i<26;i++){
    if(maxi<arr[i]){
            ans=i;
        maxi=arr[i];
        }
  }
  return ans+'a';
}
int main(){
string s;
cin>>s;
cout<<CountChar(s);
}
