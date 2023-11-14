#include<bits/stdc++.h>
using namespace std;
int sumOfcube(int n){
if(n==0)
    return n*n*n;
return sumOfcube(n/10)+(n%10*n%10*n%10);
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfcube(n);
}
