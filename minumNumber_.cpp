#include<bits/stdc++.h>
using namespace std;
int minumNumber(int num,int k)
{
    vector<int>v;
    for(int i=0;i<num%10;i++)
    {
        v.push_back(10*i+k);
    }
    for(int &q:v)
        cout<<q<<" ";
        cout<<endl;
        int ct=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();i++)
            {
                if(v[i]+v[j]==k)
                    ct++;
            }
        }
        return ct;
}
int main()
{

    int n,k;
    cin>>n>>k;
    cout<<minumNumber(n,k);
}
