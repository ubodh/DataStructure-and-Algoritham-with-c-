#include<bits/stdc++.h>
using namespace std;
void printBinary(int n)
{
    for(int i=n;i>=0;i--)
    {
        cout<< ((n>>i)&1);
    }
}
int main()
{
    int n;
    cin>>n;
    printBinary(n);
}
