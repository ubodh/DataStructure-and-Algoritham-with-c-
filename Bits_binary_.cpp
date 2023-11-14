#include<bits/stdc++.h>
using namespace std;
void printBinary(int n)
{
    for(int i=32;i>=0;i--)
    {
        cout<<((n>>i)&1);
    }
}

int main()
{
   
    printBinary(12);
    cout<<endl;
    printBinary(-7);
    cout<<endl;
    cout<<(3>>5);//(a/(2^b));
    cout<<(3<<5)<<endl; //a<<b==>a*(2^b);
    // a >> b // Equivalent to 16 / (2^2) = 16 / 4 = 4
    cout<<(16>>2)<<endl;
    cout<<(5>>2);//give integer--
    
    cout<<endl<<(7>>1);//divide the number 2
     cout<<endl<<((4>>32)&1);//divide the number 2

}

