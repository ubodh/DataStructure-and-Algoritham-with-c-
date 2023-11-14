#include<bits/stdc++.h>
using namespace std;
char upper(char s)
{
    return ('A'+(s-'a'));
}
void modify_the_value(string &s)
{
    string st="";
    for(int i=s.size();i>=0;i--)
    {
        if(s[i]!='_')
            st.push_back(s[i]);
        else
        {
            char sss=st.back();
            char sts=upper(sss);
            st.pop_back();
            st.push_back(sts);
        }
    }
    //return st;
    for(int i=st.size();i>=0;i--)
    cout<<st[i];
}
int main()
{
    string s;
    cin>>s;
    modify_the_value(s);
  cout<<s;
}
