#include<bits/stdc++.h>
using namespace std;
int  ispowerOf2(int n)
{
    return ( n&& !(n&n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<ispowerOf2(n);
}
