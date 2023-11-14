#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<char>s="subodh";
    //cout<<s.end()-1;
 vector<int>v={1,2,3};
 for(int I:v)
    cout<<I;
 v.push_back(4);
 cout<<endl;
 for(int I:v)
    cout<<I;
    cout<<endl;
   cout<< v.front();
   cout<<endl;
    for(int I:v)
    cout<<I;
    cout<<endl;
    v.pop_back();
     for(int I:v)
    cout<<I;
}
