#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    bool falg=true;
    for(i=2;i<n;i++){
        if(n%i==0){
            falg=false;
        break;
        }
    }
    if(falg)
        cout<<"it is prime number";
    else
        cout<<"it is not a prime number";
}
