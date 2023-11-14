#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(9);
    for(auto value:s)
        cout<<value<<" " ;
}
