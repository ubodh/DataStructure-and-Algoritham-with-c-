#include<bits/stdc++.h>
using namespace std;
char lower(char s)
{
    return ('a'+(s-'A'));
}
void modify_the_value(string&s)
{
    string st="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 and s[i]<=90){
            char stt=lower(s[i]);
            st.push_back('_');
            st.push_back(stt);
        }
            else
                st.push_back(s[i]);
    }

    cout<<st;
}
int main()
{
    string s;
    cin>>s;
    modify_the_value(s);

}
