#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 cout<<(1<<n);
 cout<<endl;
 cout<<(n&1);
 cout<<endl;
 if(n&1)
    cout<<"odd";
 else
    cout<<"even";
    n=n>>1;
    cout<<endl;
    cout<<(n>1);
}
