#include<bits/stdc++.h>
using namespace std;
void IndexofSubstring(char str[],char s[])
{
    int i,j,k,l,ct=0;
    l=strlen(s);
    for(i=0;str[i];i++)
    {
        k=i;
        for(j=0;j<l;j++)
        {

            if(str[k]!=s[j])
                break;
            k++;
        }
        if(j==l){
            cout<<i<<endl;

            ct++;
            cout<<ct;
            }

    }
    cout<<-1;
}
int main()
{
    IndexofSubstring("aabbabaabbbaabbabaabbba","aabb");

}
