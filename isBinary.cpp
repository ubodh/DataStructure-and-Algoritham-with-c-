#include<bits/stdc++.h>
using namespace std;
bool isBinary(int n){
    while(n>0){
        int x=n%2;
        if(x>=2)
            return false;
        n>>=1;
    }
    return true;
}
int main(){
int n=1010101201;
int x=n;
while(x){
    cout<<x%2;
    x>>=1;
}
if(isBinary(n))
    cout<<"it is binary number";
else
    cout<<"it is not binary number";
}
