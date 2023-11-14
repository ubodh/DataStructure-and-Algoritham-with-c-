#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[12];
    cin>>s;
    int i,j;
    for(i=0;s[i];i++);
    for(j=0;j<i/2;j++)
    {

        if(s[j]!=s[i-j-1])
        {

            cout<<"not is palindrom"<<endl;
            break;
        }
    }
        if(j==i/2)
            cout<<"it is palindrom"<<endl;

}
