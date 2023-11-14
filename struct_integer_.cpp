#include<iostream>
using namespace std;
struct st{
   int x,y,z;
};
int main()
{
    struct st o;
    cin>>o.x>>o.y>>o.z;
    cout<<o.x<<o.y<<o.z;
}