#include<bits/stdc++.h>
using namespace std;
int IsOccurseSubstring(string str,string sub)
{
    int k,ct=0;
    int l=strlen(sub);
    for(int i=0;str[i];i++)
    {
        k=i;
        for(int j=0;j<l;j++)
        {
            if(str[k]!=s[j])
                break;
            k++;
        }
        if(j==l)
        {
            ct++;
        }
        return ct;
    }
    return 0;
}
int main()
{
    string str;
    getline(cin,str);
    string sub;
    getline(cin,sub);
    int idex=IsOccurseSubstring(str,sub);
    cout<<idex<<endl;
}
