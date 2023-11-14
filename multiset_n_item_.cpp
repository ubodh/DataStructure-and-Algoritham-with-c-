#include<bits/stdc++.h>
using namespace std;
int main()
{
multiset<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto aa:s)
    cout<<aa<< " ";
}