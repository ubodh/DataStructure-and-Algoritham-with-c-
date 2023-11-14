#include<bits/stdc++.h>
using namespace std;
char upper(char ss)
{
    char s=('A'+(ss-'a'));
    return s;
}
/*
int main()
{
    string  s="subodh";
    char st;
    for(int i=0;i<s.size();i++){
    st=upper(s[i]);
    }
    cout<<st;

}
*/
void modify_the_value(string &s)
{
    vector<char>v;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {

        st.push(s[i]);
    }
while(!st.empty())
{
    v.push_back(st.top());
}
for(char k:v)
    cout<<k;
    while(!st.empty())
    {
        if(st.top()!='_')
        v.push_back(st.top());
        else{
         char ss=v.back();
        char sss=upper(ss);
        v.pop_back();
        v.push_back(sss);
    }

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

}
int main()
{
    string s;
    cin>>s;
    modify_the_value(s);
    //cout<<ss;
}

