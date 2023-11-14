
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    cout<<(x>>=1);
    cout<<(x>>=1)<<endl;
    int y=5;
    while (y)
    {
        cout<<(y%2)<<endl;
        y=y/2;
    }
    
}