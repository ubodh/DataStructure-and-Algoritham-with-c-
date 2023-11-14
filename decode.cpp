#include<bits/stdc++.h>
using namespace std;
string decode(string seq)
{

    string result;
    stack<int> stk;
    for (int i = 0; i <= seq.length(); i++)
    {
        stk.push(i + 1);
        if (i == seq.length() || seq[i] == 'I')
        {
            while(!stk.empty())
            {
                result += to_string(stk.top());
                stk.pop();
            }
        }
    }
    return result;
}

 int main()
{

    int t;
    cin>>t;
    while(t--){
        string seq;
        cin>>seq;
        cout << decode(seq)<<endl;
    }
    return 0;
   }
