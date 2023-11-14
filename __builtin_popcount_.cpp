#include<bits/stdc++.h>
using namespace std;
void printBianry(int n)
{
    for(int i=n;i>=0;i--)
        cout<<( (n>>i)&1);
}
int main()
{
    int n;
    cin>>n;
    printBianry(n);
    cout<<endl;
//     printBianry(~n);
//    cout<<endl;
   //set bits
   printBianry(n|~(1<<4));
   cout<<endl;
//     printBianry(n|(1<<5));
//    cout<<endl;
//    printBianry(n|~(1<<5));
//    cout<<endl;
//    printBianry(n|( ~(1<<2) ));
//    cout<<endl;
//    // toggle karna
//    printBianry(n^(1<<4));
//    cout<<__builtin_popcount(n)<<endl;
 }
