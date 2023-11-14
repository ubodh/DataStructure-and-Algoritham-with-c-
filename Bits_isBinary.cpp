#include<bits/stdc++.h>
using namespace std;
/*
bool isSqure(int n){
int x=(n&n-1);
cout<<endl<<x<<endl;
return !x;
}
*/
bool isBinary(int n){
while(n){
    int ct=n%2;
    if(ct>=2)
        return false;
    n=n/2;
}
return true;
}

int main(){
    /*
int y=3;
if(isSqure(y))
    cout<<"it is square";
else
    cout<<"it is not square ";
    int z=2+3*4%5;
    cout<<endl<<z;
    int t=2;
    int t2=2;
    cout<<endl;
    cout<<(t^t2);
    cout<<endl<<((t|t2)-(t&t2));
    */
    int n=102101;
    if(isBinary(n))
        cout<<"it is binary number";
    else
        cout<<"it is not binary number";
}
