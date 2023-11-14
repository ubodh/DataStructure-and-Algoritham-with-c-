#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
   
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    for(int J:v)
        cout<<J<<" ";
}
