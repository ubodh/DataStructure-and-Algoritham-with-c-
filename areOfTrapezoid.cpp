#include<bits/stdc++.h>
using namespace std;
/* ____a____
  /        \
 /          \
/____b________\

*/
int areOfTrapezoid(int a,int b,int h)
{
    return ((a+b)*h)/2;
}
int main()
{
    int a,b,h;
    cin>>a>>b>>h;
 int    ans=areOfTrapezoid(a,b,h);
    cout<<ans;
}
