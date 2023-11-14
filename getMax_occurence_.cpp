#include<bits/stdc++.h>
using namespace std;
char getMax(string s){

   int arr[26]={0};
   for(int i=0;s.length();i++){
        if(s[i]>='a' and s[i]<='z')
         arr[s[i]-'a']++;
   }
    int ma=-1, ans=0;
   for(int i=0;i<26;i++){
        if(ma<arr[i]){
        ans=i;
        ma=arr[i];
        }
   }
   char findAns= ans+'a';
   return findAns;
}
int main()
{
   string s;
   cin>>s;
   cout<<getMax(s);
}
