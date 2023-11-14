/*n 
(decimal): 12
n (binary):  1100
Original:   1100
Cleared:    1000
Result (decimal): 8
clearBit(12, 2)
*///setBits 
//Position (0-based index) to clear: 2
#include<bits/stdc++.h>
using namespace std;
int clearBit(int n,int pos)
{
    return (n&(~(1<<pos)));
}
int main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<clearBit(n,pos);
}
