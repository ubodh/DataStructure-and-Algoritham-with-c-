#include<bits/stdc++.h>
using  namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    priority_queue<int ,vector<int>,greater<int>>q1;
    q1.push(11);
    q1.push(12);
    q1.push(13);
    while(!q1.empty())
    {
        cout<<q1.top()<<" ";
        q1.pop();
    }
}