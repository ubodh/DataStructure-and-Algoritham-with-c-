#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>p;
    p.push(3);
    p.push(4);
    p.push(1);
    p.push(5);
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}