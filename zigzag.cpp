#include<bits/stdc++.h>
using namespace std;
void zigzag(string &s,int k)
{
  vector<vector<char>>ans;
  int j=0;
  bool flag=true;
  for(int i=0;i<s.size();i++)
  {
      ans[j].push_back(s[i]);
      j+=(flag==true)?1:-1;
      if(j==k-1||j==0)
        flag=!flag;
  }
string str=" ";
for(vector<char>&K:ans)
{
    for(char &j:K)
        str+=j;
}
cout<<str;
}
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
   zigzag(s,k);

}
