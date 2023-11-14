#include<bits/stdc++.h>
using namespace std;
string  modify_the_variable(string s)
{
  string ss="";
  vector<char>st;
  for(int i=0;i<s.size();i++)
  {
      st.push_back(s[i]);
  }

  for(int i=0;i<st.size();i++)
  {
      if(st[i]!='_')
        ss.push_back(st[i]);
      else
      {
         char stt=ss.back();
        ss.pop_back();
char sss='A'+(s[i]-'a');
        ss.push_back(sss);
   }
  }
  return ss;
}
int main()
{
    string s;
    cin>>s;
  string ss =modify_the_variable(s);
    cout<<ss<<endl;
}
