#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>s;
    string ss;
    cin>>ss;
    s.push(ss);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
