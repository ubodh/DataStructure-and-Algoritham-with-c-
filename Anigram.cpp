#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string &x,string &y){
int n1=x.size();
int n2=y.size();
if(n1!=n2)
    return false;
else
{
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for(int i=0;i<n1;i++){
        if(x[i]!=y[i])
        {
            return false;
        }
    }
    return true;
}
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2))
        cout<<"it is anigram";
    else
        cout<<"it is not anigram";
}
