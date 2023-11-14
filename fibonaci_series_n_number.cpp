#include<iostream>
using namespace std;
int main()
{
    int a=-1,b=1,c;
    int n;
    cin>>n;
    while(n--)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}