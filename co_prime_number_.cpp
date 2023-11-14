#include<bits/stdc++.h>
using namespace std;
void co_prime(int a,int b)
{
    int c;
    int mini=a<b?a:b;
    for(c=2;c<=mini;c++)
    {
        if(a%c==0 and b%c==0)
            break;
    }
    if(c==(mini+1))
        cout<<"it is co_prime number is"<<endl;
    else
        cout<<"it is not co_prime number is "<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    co_prime(a,b);

}
