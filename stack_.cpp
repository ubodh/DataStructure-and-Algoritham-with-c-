#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<char>st;
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top();
        v.push_back(st.top());
        st.pop();
    }
    cout<<endl;
    for(auto k:v)
        cout<<k;
}
